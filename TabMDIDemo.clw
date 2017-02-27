; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTabMDIDemoView
LastTemplate=CTabCtrl
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "TabMDIDemo.h"
LastPage=0

ClassCount=7
Class1=CTabMDIDemoApp
Class2=CTabMDIDemoDoc
Class3=CTabMDIDemoView
Class4=CMainFrame

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDR_TABMDITYPE
Class5=CChildFrame
Class6=CAboutDlg
Class7=CMyTab
Resource4=IDD_TAB_DLG_BAR

[CLS:CTabMDIDemoApp]
Type=0
HeaderFile=TabMDIDemo.h
ImplementationFile=TabMDIDemo.cpp
Filter=N
LastObject=CTabMDIDemoApp

[CLS:CTabMDIDemoDoc]
Type=0
HeaderFile=TabMDIDemoDoc.h
ImplementationFile=TabMDIDemoDoc.cpp
Filter=N

[CLS:CTabMDIDemoView]
Type=0
HeaderFile=TabMDIDemoView.h
ImplementationFile=TabMDIDemoView.cpp
Filter=C
LastObject=CTabMDIDemoView
BaseClass=CView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame
BaseClass=CMDIFrameWnd
VirtualFilter=fWC


[CLS:CChildFrame]
Type=0
HeaderFile=ChildFrm.h
ImplementationFile=ChildFrm.cpp
Filter=M


[CLS:CAboutDlg]
Type=0
HeaderFile=TabMDIDemo.cpp
ImplementationFile=TabMDIDemo.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_PRINT_SETUP
Command4=ID_FILE_MRU_FILE1
Command5=ID_APP_EXIT
Command6=ID_VIEW_TOOLBAR
Command7=ID_VIEW_STATUS_BAR
Command8=ID_VIEW_TAB_BAR
Command9=ID_APP_ABOUT
CommandCount=9

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_TABMDITYPE]
Type=1
Class=CTabMDIDemoView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_FILE_MRU_FILE1
Command10=ID_APP_EXIT
Command11=ID_EDIT_UNDO
Command12=ID_EDIT_CUT
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_VIEW_TOOLBAR
Command16=ID_VIEW_STATUS_BAR
Command17=ID_VIEW_TAB_BAR
Command18=ID_WINDOW_NEW
Command19=ID_WINDOW_CASCADE
Command20=ID_WINDOW_TILE_HORZ
Command21=ID_WINDOW_ARRANGE
Command22=ID_APP_ABOUT
CommandCount=22

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_TAB_DLG_BAR]
Type=1
Class=?
ControlCount=1
Control1=IDC_TAB,SysTabControl32,1342177600

[CLS:CMyTab]
Type=0
HeaderFile=MyTab.h
ImplementationFile=MyTab.cpp
BaseClass=CTabCtrl
Filter=W
LastObject=CMyTab
VirtualFilter=UWC

