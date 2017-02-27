// MyTab.cpp : implementation file
// download by http://www.NewXing.com

#include "stdafx.h"
#include "TabMDIDemo.h"
#include "MyTab.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyTab

CMyTab::CMyTab()
{
}

CMyTab::~CMyTab()
{
}


BEGIN_MESSAGE_MAP(CMyTab, CTabCtrl)
	//{{AFX_MSG_MAP(CMyTab)
	ON_WM_LBUTTONDBLCLK()
	ON_NOTIFY_REFLECT(TCN_SELCHANGE, OnSelchange)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyTab message handlers

void CMyTab::OnLButtonDblClk(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	int idx = GetCurSel();

	TC_ITEM ti;
	ti.mask = TCIF_PARAM;
	GetItem(idx, &ti);
	CView * pView = (CView *) ti.lParam;
	((CMDIFrameWnd *)AfxGetMainWnd())->MDIActivate((pView->GetParent())->GetParent());
	
	// maximize or restore MDIChild window based on its current state
	BOOL bMaximize=FALSE;
	CWnd* pActiveWnd=((CMDIFrameWnd *)AfxGetMainWnd())->MDIGetActive(&bMaximize);
	if(bMaximize)
		((CMDIFrameWnd *)AfxGetMainWnd())->MDIRestore(pActiveWnd);
	else
		((CMDIFrameWnd *)AfxGetMainWnd())->MDIMaximize(pActiveWnd);
}

void CMyTab::OnSelchange(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	int idx = GetCurSel();

	TC_ITEM ti;
	ti.mask = TCIF_PARAM;
	GetItem(idx, &ti);
	CView * pView = (CView *) ti.lParam;
	((CMDIFrameWnd *)AfxGetMainWnd())->MDIActivate((pView->GetParent())->GetParent());
	*pResult = 0;
	*pResult = 0;
}
