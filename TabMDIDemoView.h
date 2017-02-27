//Download by http://www.NewXing.com
// TabMDIDemoView.h : interface of the CTabMDIDemoView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TABMDIDEMOVIEW_H__14E5618F_D7D2_11D7_B31C_F66BF6C5BDA8__INCLUDED_)
#define AFX_TABMDIDEMOVIEW_H__14E5618F_D7D2_11D7_B31C_F66BF6C5BDA8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTabMDIDemoView : public CView
{
protected: // create from serialization only
	CTabMDIDemoView();
	DECLARE_DYNCREATE(CTabMDIDemoView)

// Attributes
public:
	CTabMDIDemoDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTabMDIDemoView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnInitialUpdate();
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnActivateView(BOOL bActivate, CView* pActivateView, CView* pDeactiveView);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTabMDIDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTabMDIDemoView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in TabMDIDemoView.cpp
inline CTabMDIDemoDoc* CTabMDIDemoView::GetDocument()
   { return (CTabMDIDemoDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TABMDIDEMOVIEW_H__14E5618F_D7D2_11D7_B31C_F66BF6C5BDA8__INCLUDED_)
