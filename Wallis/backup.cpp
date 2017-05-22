#include "stdafx.h"  //________________________________________ Wallis.cpp
#include "Wallis.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Wallis app;
	return app.BeginDialog(IDI_Wallis, hInstance);
}

void Wallis::Window_Open(Win::Event& e)
{
}

void Wallis::bt1_Click(Win::Event& e)
{
}

