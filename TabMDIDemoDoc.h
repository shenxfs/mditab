//Download by http://www.NewXing.com
// TabMDIDemoDoc.h : interface of the CTabMDIDemoDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TABMDIDEMODOC_H__14E5618D_D7D2_11D7_B31C_F66BF6C5BDA8__INCLUDED_)
#define AFX_TABMDIDEMODOC_H__14E5618D_D7D2_11D7_B31C_F66BF6C5BDA8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTabMDIDemoDoc : public CDocument
{
protected: // create from serialization only
	CTabMDIDemoDoc();
	DECLARE_DYNCREATE(CTabMDIDemoDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTabMDIDemoDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTabMDIDemoDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTabMDIDemoDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TABMDIDEMODOC_H__14E5618D_D7D2_11D7_B31C_F66BF6C5BDA8__INCLUDED_)
