
// ccConfigDlg.h : header file
//

#pragma once
#include "afxcmn.h"

#include "TabSheet.h"
#include "PageLogging.h"
#include "PageOption.h"
#include "PageOption2.h"
#include "PageOption3.h"
#include "PageOption4.h"

// CccConfigDlg dialog
class CccConfigDlg : public CDialog
{
// Construction
public:
	CccConfigDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CCCONFIG_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

private:
	CPageLogging m_pageLogging;
	CPageOption m_pageOption;
	CPageOption2 m_pageOption2;
	CPageOption3 m_pageOption3;
	CPageOption4 m_pageOption4;

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CTabSheet m_tabSheet;
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedSave();
	afx_msg void OnBnClickedLoad();
	afx_msg void OnBnClickedHelpE();
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedHelpC();
};
