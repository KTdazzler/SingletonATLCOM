// MyATLSimpleObject.cpp: CMyATLSimpleObject 的實作

#include "stdafx.h"
#include "MyATLSimpleObject.h"


// CMyATLSimpleObject

STDMETHODIMP CMyATLSimpleObject::SetNumber(INT nNum)
{

	// TODO: Add your implementation code here
	m_nNum = nNum;


	Fire_OnNumberChanged(m_nNum);

	return S_OK;
}


STDMETHODIMP CMyATLSimpleObject::GetNumber(INT* pnNum)
{
	// TODO: Add your implementation code here
	*pnNum = m_nNum;

	return S_OK;
}