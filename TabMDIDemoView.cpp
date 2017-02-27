// TabMDIDemoView.cpp : implementation of the CTabMDIDemoView class
// download by http://www.NewXing.com

#include "stdafx.h"
#include "TabMDIDemo.h"
#include "MainFrm.h"

#include "TabMDIDemoDoc.h"
#include "TabMDIDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTabMDIDemoView

IMPLEMENT_DYNCREATE(CTabMDIDemoView, CView)

BEGIN_MESSAGE_MAP(CTabMDIDemoView, CView)
	//{{AFX_MSG_MAP(CTabMDIDemoView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTabMDIDemoView construction/destruction

CTabMDIDemoView::CTabMDIDemoView()
{
	// TODO: add construction code here

}

CTabMDIDemoView::~CTabMDIDemoView()
{
	((CMainFrame*)AfxGetMainWnd())->m_ViewManager.RemoveView(this);
}

BOOL CTabMDIDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTabMDIDemoView drawing

void CTabMDIDemoView::OnDraw(CDC* pDC)
{
	CTabMDIDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CTabMDIDemoView printing

BOOL CTabMDIDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTabMDIDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTabMDIDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTabMDIDemoView diagnostics

#ifdef _DEBUG
void CTabMDIDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CTabMDIDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTabMDIDemoDoc* CTabMDIDemoView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTabMDIDemoDoc)));
	return (CTabMDIDemoDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTabMDIDemoView message handlers

void CTabMDIDemoView::OnInitialUpdate() 
{
	CView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	CTabMDIDemoDoc * pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CString cs=pDoc->GetTitle();
	((CMainFrame*)AfxGetMainWnd())->m_ViewManager.AddView(cs,this);
}

void CTabMDIDemoView::OnActivateView(BOOL bActivate, CView* pActivateView, CView* pDeactiveView) 
{
	// TODO: Add your specialized code here and/or call the base class
	((CMainFrame*)AfxGetMainWnd())->m_ViewManager.OnActivateView(bActivate, this);
	((CMainFrame*)AfxGetMainWnd())->SendMessage(WM_SIZE);
	CView::OnActivateView(bActivate, pActivateView, pDeactiveView);
}
