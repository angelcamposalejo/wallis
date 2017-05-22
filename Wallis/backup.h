#pragma once  //______________________________________ Wallis.h  
#include "Resource.h"
class Wallis: public Win::Dialog
{
public:
	Wallis()
	{
	}
	~Wallis()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxTerm;
	Win::Textbox tbxSalida;
	Win::Button bt1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(303);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(83);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Wallis";
		lb1.Create(NULL, L"Term Count", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 11, 11, 85, 25, hWnd, 1000);
		lb2.Create(NULL, L"Value of PI", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 12, 51, 84, 25, hWnd, 1001);
		tbxTerm.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 95, 11, 120, 25, hWnd, 1002);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 95, 50, 120, 25, hWnd, 1003);
		bt1.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 221, 11, 75, 24, hWnd, 1004);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxTerm.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
		bt1.Font = fontArial014A;
	}
	//_________________________________________________
	void bt1_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (bt1.IsEvent(e, BN_CLICKED)) {bt1_Click(e); return true;}
		return false;
	}
};
