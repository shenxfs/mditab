// MainFrm.cpp : implementation of the CMainFrame class
// download by http://www.NewXing.com

#include "stdafx.h"
#include "TabMDIDemo.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
	ON_COMMAND_EX(ID_VIEW_TAB_BAR, OnBarCheck)
	ON_UPDATE_COMMAND_UI(ID_VIEW_TAB_BAR, OnUpdateControlBarMenu)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CMDIFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Delete these three lines if you don't want the toolbar to
	//  be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	//创建TAB条
	if (!m_wndTabBar.Create(this, IDD_TAB_DLG_BAR,
			CBRS_TOP| CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_HIDE_INPLACE,
			ID_VIEW_TAB_BAR))//ID_VIEW_TAB_BAR是菜单命令ID,用于显示或隐藏对话框条
		{
			TRACE0("Failed to create dialog bar m_wndDialogbar\n");
			return -1;		// fail to create
		}
	m_wndTabBar.EnableDocking(CBRS_ALIGN_LEFT | CBRS_ALIGN_RIGHT);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndTabBar);
	//将m_MyTab与控件IDC_TAB绑定
	m_MyTab.SubclassDlgItem(IDC_TAB, &m_wndTabBar); 


	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CMDIFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CMDIFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CMDIFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers


void CMainFrame::OnSize(UINT nType, int cx, int cy) 
{
	CMDIFrameWnd::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	CRect rcClient;
	GetClientRect(&rcClient);
	int left,top,right,bottom;
	left=rcClient.left;
	top=rcClient.top;
	right=rcClient.right;
	bottom=rcClient.bottom;
	m_wndTabBar.MoveWindow(left,top+24,right-left,24,TRUE);
    CRect rcTab;
    m_wndTabBar.GetClientRect(&rcTab);
	CTabCtrl *pMyTab=(CTabCtrl *)(m_wndTabBar.GetDlgItem(IDC_TAB));
	pMyTab->MoveWindow(rcTab,TRUE);
}

