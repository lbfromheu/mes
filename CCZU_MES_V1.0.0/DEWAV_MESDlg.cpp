// DEWAV_MESDlg.cpp : implementation file
//

#include "stdafx.h"
#include "DEWAV_MES.h"
#include "DEWAV_MESDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDEWAV_MESDlg dialog

CDEWAV_MESDlg::CDEWAV_MESDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDEWAV_MESDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDEWAV_MESDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDEWAV_MESDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDEWAV_MESDlg)
	DDX_Control(pDX, IDC_BTN_WRITE_SNSCAN, m_ctrSNScan);
	DDX_Control(pDX, IDC_BTN_CHECKS3, m_ctrCheckS3);
	DDX_Control(pDX, IDC_STATIC3, m_ctrStatic3);
	DDX_Control(pDX, IDC_BTN_REWORK, m_ctrRework);
	DDX_Control(pDX, IDC_BTN_CLEANIMEI, m_ctrCleanIMEI);
	DDX_Control(pDX, IDC_BTN_CHECKORDER, m_ctrCheckOrder);
	DDX_Control(pDX, IDC_STATIC2, m_ctrStatic2);
	DDX_Control(pDX, IDC_STATIC1, m_ctrStatic1);
	DDX_Control(pDX, IDC_BTN_PALLET, m_ctrPallet);
	DDX_Control(pDX, IDC_BTN_COUPLINGTEST, m_ctrCouplingTest);
	DDX_Control(pDX, IDC_BTN_COLORBOX_WEIGH, m_ctrColorBoxWeigh);
	DDX_Control(pDX, IDC_BTN_COLORBOX, m_ctrColorBox);
	DDX_Control(pDX, IDC_BTN_CHECKSI, m_ctrCheckS1);
	DDX_Control(pDX, IDC_BTN_CHECKS2, m_ctrCheckS2);
	DDX_Control(pDX, IDC_BTN_CARTON_WEIGH, m_ctrCartonWeigh);
	DDX_Control(pDX, IDC_BTN_CARTON, m_ctrCarton);
	DDX_Control(pDX, IDC_BTN_WRITE_IMEI, m_ctrWriteIMEI);
	DDX_Control(pDX, IDC_BTN_QUERY, m_ctrQuery);
	DDX_Control(pDX, IDC_BTN_CREATE, m_ctrCreate);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CDEWAV_MESDlg, CDialog)
	//{{AFX_MSG_MAP(CDEWAV_MESDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_CREATE, OnBtnCreate)
	ON_BN_CLICKED(IDC_BTN_WRITE_IMEI, OnBtnWriteImei)
	ON_BN_CLICKED(IDC_BTN_COUPLINGTEST, OnBtnCouplingtest)
	ON_BN_CLICKED(IDC_BTN_CHECKSI, OnBtnChecksi)
	ON_BN_CLICKED(IDC_BTN_COLORBOX, OnBtnColorbox)
	ON_BN_CLICKED(IDC_BTN_CHECKS2, OnBtnChecks2)
	ON_BN_CLICKED(IDC_BTN_COLORBOX_WEIGH, OnBtnColorboxWeigh)
	ON_BN_CLICKED(IDC_BTN_CARTON, OnBtnCarton)
	ON_BN_CLICKED(IDC_BTN_CARTON_WEIGH, OnBtnCartonWeigh)
	ON_BN_CLICKED(IDC_BTN_PALLET, OnBtnPallet)
	ON_BN_CLICKED(IDC_BTN_QUERY, OnBtnQuery)
	ON_BN_CLICKED(IDC_BTN_CHECKORDER, OnBtnCheckorder)
	ON_BN_CLICKED(IDC_BTN_REWORK, OnBtnRework)
	ON_BN_CLICKED(IDC_BTN_CLEANIMEI, OnBtnCleanimei)
	ON_BN_CLICKED(IDC_BTN_CHECKS3, OnBtnChecks3)
	ON_BN_CLICKED(IDC_BTN_WRITE_SNSCAN, OnBtnWriteSnscan)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDEWAV_MESDlg message handlers

BOOL CDEWAV_MESDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	char direc[MAX_PATH];

	//获取当前文件路径
  
	GetCurrentDirectory(MAX_PATH,direc);
	if (strcmp(CString(direc),"D:\\CCZU_MES_V1.0.0") != 0)
	{
		MessageBox("Please place the files(CCZU_MES_V1.0.0) to the root directory of D!","warning",MB_OK);
		exit(0);
	}

	VERIFY(m_staticfont.CreateFont(
		30,                        // nHeight
		0,                         // nWidth
		0,                         // nEscapement
		0,                         // nOrientation
		FW_NORMAL,                 // nWeight
		FALSE,                     // bItalic
		FALSE,                     // bUnderline
		0,                         // cStrikeOut
		ANSI_CHARSET,              // nCharSet
		OUT_DEFAULT_PRECIS,        // nOutPrecision
		CLIP_DEFAULT_PRECIS,       // nClipPrecision
		DEFAULT_QUALITY,           // nQuality
		DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
		"Arial"));                  // lpszFacename

	VERIFY(m_staticfont1.CreateFont(
		16,                        // nHeight
		0,                         // nWidth
		0,                         // nEscapement
		0,                         // nOrientation
		FW_HEAVY,                  // nWeight
		FALSE,                     // bItalic
		FALSE,                     // bUnderline
		0,                         // cStrikeOut
		ANSI_CHARSET,              // nCharSet
		OUT_DEFAULT_PRECIS,        // nOutPrecision
		CLIP_DEFAULT_PRECIS,       // nClipPrecision
		DEFAULT_QUALITY,           // nQuality
		DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
		"Arial"));                  // lpszFacename
	
// 	m_ctrPallet.SetFont(&m_staticfont);
// 	m_ctrCouplingTest.SetFont(&m_staticfont);
// 	m_ctrColorBoxWeigh.SetFont(&m_staticfont);
// 	m_ctrColorBox.SetFont(&m_staticfont);
// 	m_ctrCheckS1.SetFont(&m_staticfont);
// 	m_ctrCheckS2.SetFont(&m_staticfont);
// 	m_ctrCheckS3.SetFont(&m_staticfont);
// 	m_ctrCartonWeigh.SetFont(&m_staticfont);
// 	m_ctrCarton.SetFont(&m_staticfont);
// 	m_ctrWriteIMEI.SetFont(&m_staticfont);
// 	m_ctrSNScan.SetFont(&m_staticfont);
// 	m_ctrQuery.SetFont(&m_staticfont);
// 	m_ctrCreate.SetFont(&m_staticfont);
// 	m_ctrCheckOrder.SetFont(&m_staticfont);
// 	m_ctrRework.SetFont(&m_staticfont);
// 	m_ctrCleanIMEI.SetFont(&m_staticfont);
// 	m_ctrStatic1.SetFont(&m_staticfont1);
// 	m_ctrStatic2.SetFont(&m_staticfont1);
// 	m_ctrStatic3.SetFont(&m_staticfont1);

	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CDEWAV_MESDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CDEWAV_MESDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;
		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CDEWAV_MESDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

BOOL CDEWAV_MESDlg::CallExe(int iWorkStation)
{
	CString             temp;
	STARTUPINFO         sInfo;
	PROCESS_INFORMATION pInfo;
	char                direc[MAX_PATH];

	//清空结构
	temp.Empty();
	ZeroMemory(&sInfo,sizeof(sInfo));
	sInfo.cb=sizeof(sInfo);
	sInfo.dwFlags=STARTF_USESHOWWINDOW;
	sInfo.wShowWindow=SW_SHOW;;
	ZeroMemory(&pInfo,sizeof(pInfo));
	
	//获取当前路径
	GetCurrentDirectory(MAX_PATH,direc);

	//根据不同iWorkStation，调用不同的exe
	switch(iWorkStation) 
	{
	case 0:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_CreateProductTool.exe");
		break;

	case 1:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_WriteIMEITool.exe");
		break;

	case 2:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_CouplingTestTool.exe");
		break;

	case 3:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_CheckIMEIS1Tool.exe");
		break;

	case 4:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_ColorBoxTool.exe");
		break;

	case 5:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_CheckIMEIS2Tool.exe");
		break;

	case 6:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_ColorBoxWeighTool.exe");
		break;

	case 7:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_CartonBoxTool.exe");
		break;

	case 8:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_CartonBoxWeighTool.exe");
		break;

	case 9:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_PalletTool.exe");
		break;

	case 10:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_ProductionDataQueryTool.exe");
		break;

	case 11:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_CheckOrderTool.exe");
		break;

	case 12:
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_ReworkTool.exe");
		break;

	case 13: 
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_IMEICleanTool.exe");
		break;

	case 14: 
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_CheckIMEIS3Tool.exe"); 
		break;

	case 15: 
		temp.Format(CString(direc)+"\\bin\\CCZU_ODM_SNScanTool.exe"); 
		break;

	default:
		break;
	}	

	if(!::CreateProcess(LPCTSTR(temp),NULL,NULL,FALSE,NULL,NULL,NULL,LPCTSTR(CString(direc)+"\\bin"),&sInfo,&pInfo))
	{
#ifdef _DEBUG
		CString sPath = CString("Open The Tool Fail,The Path:") + temp;
		MessageBox(sPath, "Error", MB_OK | MB_ICONINFORMATION);
#endif
		return FALSE;
	}
/*
	WaitForSingleObject(pInfo.hProcess,INFINITE);
	CloseHandle(pInfo.hThread);
	CloseHandle(pInfo.hProcess);
*/	
	return TRUE;
}
 
void CDEWAV_MESDlg::OnBtnCreate()
{
	if(!CallExe(0))
	{
		MessageBox("Open Order Manage Setting Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnWriteImei() 
{
	if(!CallExe(1))
	{
		MessageBox("Open Write IMEI Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnCouplingtest() 
{
	if(!CallExe(2))
	{
		MessageBox("Open Coupling Test Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnChecksi() 
{
	if(!CallExe(3))
	{
		MessageBox("Open CheckING Module IMEI Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnColorbox() 
{
	if(!CallExe(4))
	{
		MessageBox("Open Colorbox Packet Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnChecks2() 
{
	if(!CallExe(5))
	{
		MessageBox("Open Check Colorbox IMEI Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnColorboxWeigh() 
{
	if(!CallExe(6))
	{
		MessageBox("Open Colorbox Weight Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnCarton() 
{
	if(!CallExe(7))
	{
		MessageBox("Open Carton Packet Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnCartonWeigh() 
{
	if(!CallExe(8))
	{
		MessageBox("Open Carton Weight Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnPallet() 
{
	if(!CallExe(9))
	{
		MessageBox("Open Pallet Packet Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}


void CDEWAV_MESDlg::OnBtnQuery() 
{
	if(!CallExe(10))
	{
		MessageBox("Open Query Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnCheckorder() 
{
	if(!CallExe(11))
	{
		MessageBox("Open Check Order Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnRework() 
{
	if(!CallExe(12))
	{
		MessageBox("Open Rework Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnCleanimei() 
{
	if(!CallExe(13))
	{
		MessageBox("Open Clean IMEI Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}

void CDEWAV_MESDlg::OnBtnChecks3() 
{
	if(!CallExe(14))
	{
		MessageBox("Open Check IMEI S3 Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
	
}

void CDEWAV_MESDlg::OnBtnWriteSnscan() 
{
	if(!CallExe(15))
	{
		MessageBox("Open SN Scan Tool Fail!","Error");
	}
	else
	{
		ShowWindow(SW_MINIMIZE);
	}
}
