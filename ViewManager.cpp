// ViewManager.cpp: implementation of the CViewManager class.
// download by http://www.NewXing.com
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ViewManager.h"
#include "MainFrm.h"
#include "MyTab.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CViewManager::CViewManager()
{
	bClosing = false;
}

CViewManager::~CViewManager()
{
	arViews.RemoveAll();
	arViewTitles.RemoveAll();
}

void CViewManager::AddView(const char * csName, CView * pView)
{
	if (bClosing) return;

	CString cs(csName);

	arViews.Add(pView);
	arViewTitles.Add(cs);
	if ( ((CMainFrame*)AfxGetMainWnd())->m_MyTab.GetSafeHwnd())
	{
		TC_ITEM ti;
		ti.mask = TCIF_TEXT|TCIF_PARAM;
		ti.pszText = cs.LockBuffer();
		ti.lParam = (long) pView;
		   ((CMainFrame*)AfxGetMainWnd())->m_MyTab.InsertItem(   ((CMainFrame*)AfxGetMainWnd())->m_MyTab.GetItemCount(), &ti);
		cs.UnlockBuffer();
	}
}

void CViewManager::RemoveView(CView * pView)
{
	if (bClosing || arViews.GetSize() <= 0) return;

	int t;

	if (   ((CMainFrame*)AfxGetMainWnd())->m_MyTab.GetSafeHwnd())
	{
		for (t = 0; t <    ((CMainFrame*)AfxGetMainWnd())->m_MyTab.GetItemCount(); t++)
		{
			TC_ITEM ti;
			ti.mask = TCIF_PARAM;
			   ((CMainFrame*)AfxGetMainWnd())->m_MyTab.GetItem(t, &ti);
			if (ti.lParam == (long) pView)
			{
				   ((CMainFrame*)AfxGetMainWnd())->m_MyTab.DeleteItem(t);
				break;
			}
		}
	}


	for (t = 0; t < arViews.GetSize(); t++)
	{
		if ((CView *)(arViews.GetAt(t)) == pView)
		{
			arViewTitles.RemoveAt(t);
			arViews.RemoveAt(t);
			return;
		}
	}
}

void CViewManager::RemoveAll()
{
	arViews.RemoveAll();
	arViewTitles.RemoveAll();
}



void CViewManager::OnActivateView(const BOOL bActivate, CView * pView)
{
	if (bActivate)
	{
		if (   ((CMainFrame*)AfxGetMainWnd())->m_MyTab.GetSafeHwnd())
		{
			for (int t = 0; t <    ((CMainFrame*)AfxGetMainWnd())->m_MyTab.GetItemCount(); t++)
			{
				TC_ITEM ti;
				ti.mask = TCIF_PARAM;
				   ((CMainFrame*)AfxGetMainWnd())->m_MyTab.GetItem(t, &ti);
				if (ti.lParam == (long) pView)
				{
					   ((CMainFrame*)AfxGetMainWnd())->m_MyTab.SetCurSel(t);
					   ((CMainFrame*)AfxGetMainWnd())->m_MyTab.Invalidate();
					break;
				}
			}
		}
	}
}
