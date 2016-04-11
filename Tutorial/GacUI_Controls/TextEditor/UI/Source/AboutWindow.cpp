﻿/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::AboutWindow

This file is generated by: Vczh GacUI Resource Code Generator
***********************************************************************/

#include "Demo.h"
#include <Windows.h>

namespace demo
{
	// #region CLASS_MEMBER_GUIEVENT_HANDLER (DO NOT PUT OTHER CONTENT IN THIS #region.)

	void AboutWindow::documentLabel_ActiveHyperlinkExecuted(GuiGraphicsComposition* sender, vl::presentation::compositions::GuiEventArgs& arguments)
	{
		ShellExecute(NULL, L"OPEN", documentLabel->GetActiveHyperlinkReference().Buffer(), NULL, NULL, SW_MAXIMIZE);
	}

	// #endregion CLASS_MEMBER_GUIEVENT_HANDLER

	AboutWindow::AboutWindow()
	{
		InitializeComponents();
	}

	AboutWindow::~AboutWindow()
	{
		ClearSubscriptions();
	}
}