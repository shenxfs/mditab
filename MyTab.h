#if !defined(AFX_MYTAB_H__14E56197_D7D2_11D7_B31C_F66BF6C5BDA8__INCLUDED_)
#define AFX_MYTAB_H__14E56197_D7D2_11D7_B31C_F66BF6C5BDA8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MyTab.h : header file
// download by http://www.NewXing.com

/////////////////////////////////////////////////////////////////////////////
// CMyTab window

class CMyTab : public CTabCtrl
{
// Construction
public:
	CMyTab();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyTab)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyTab();

	// Generated message map functions
protected:
	//{{AFX_MSG(CMyTab)
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnSelchange(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYTAB_H__14E56197_D7D2_11D7_B31C_F66BF6C5BDA8__INCLUDED_)
