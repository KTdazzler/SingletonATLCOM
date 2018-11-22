using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

using System.Text.RegularExpressions;

namespace WPFapp
{
    /// <summary>
    /// MainWindow.xaml 的互動邏輯
    /// </summary>
    public partial class MainWindow : Window
    {
        private MyATLCOMLib.MyATLSimpleObjectClass _myATLObj = null;

        public MainWindow()
        {
            InitializeComponent();

            if (_myATLObj == null)
            {
                _myATLObj = new MyATLCOMLib.MyATLSimpleObjectClass();

                _myATLObj.OnNumberChanged += _myATLObj_OnNumberChanged;

                _tbNum.Text =  _myATLObj.GetNumber().ToString();
            }
        }

        private void _myATLObj_OnNumberChanged(int nNum)
        {
            Dispatcher.BeginInvoke(new Action(() =>
            {
                _tbNum.Text = nNum.ToString();
            }));
        }

        private void _tbInputNum_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.Key == Key.Return)
            {
                if (_myATLObj != null)
                {
                    _myATLObj.SetNumber(Convert.ToInt32(_tbInputNum.Text));
                }
            }
        }

        private bool IsTextAllowed(string text)
        {
            Regex regex = new Regex("[^0-9.-]+");
            return !regex.IsMatch(text);
        }

        private void _tbInputNum_PreviewTextInput(object sender, TextCompositionEventArgs e)
        {
            if (!IsTextAllowed(e.Text))
            {
                e.Handled = true;
            }
        }
    }
}
