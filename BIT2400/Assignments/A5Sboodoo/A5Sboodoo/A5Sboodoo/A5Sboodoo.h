
// A5Sboodoo.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CA5SboodooApp:
// See A5Sboodoo.cpp for the implementation of this class
//

class CA5SboodooApp : public CWinApp
{
public:
	CA5SboodooApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CA5SboodooApp theApp;
