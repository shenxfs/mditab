// TabMDIDemoDoc.cpp : implementation of the CTabMDIDemoDoc class
// download by http://www.NewXing.com

#include "stdafx.h"
#include "TabMDIDemo.h"

#include "TabMDIDemoDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTabMDIDemoDoc

IMPLEMENT_DYNCREATE(CTabMDIDemoDoc, CDocument)

BEGIN_MESSAGE_MAP(CTabMDIDemoDoc, CDocument)
	//{{AFX_MSG_MAP(CTabMDIDemoDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTabMDIDemoDoc construction/destruction

CTabMDIDemoDoc::CTabMDIDemoDoc()
{
	// TODO: add one-time construction code here

}

CTabMDIDemoDoc::~CTabMDIDemoDoc()
{
}

BOOL CTabMDIDemoDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTabMDIDemoDoc serialization

void CTabMDIDemoDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTabMDIDemoDoc diagnostics

#ifdef _DEBUG
void CTabMDIDemoDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTabMDIDemoDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTabMDIDemoDoc commands
