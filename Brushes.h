
// Brushes.h : Brushes ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CBrushesApp:
// �� Ŭ������ ������ ���ؼ��� Brushes.cpp�� �����Ͻʽÿ�.
//

class CBrushesApp : public CWinApp
{
public:
	CBrushesApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBrushesApp theApp;
