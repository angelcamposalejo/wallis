#include "stdafx.h"  //________________________________________ Wallis.cpp
#include "Wallis.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Wallis app;
	return app.BeginDialog(IDI_Wallis, hInstance);
}

void Wallis::Window_Open(Win::Event& e)
{
}

void Wallis::btCalcular_Click(Win::Event& e)
{
	const double count = tbxTerm.IntValue;
	double product=1.0;
	for (int n = 0; n < count; n++)
	{
		product = product*GetTerm(n);
	}
	tbxSalida.DoubleValue = product;
}
double Wallis::GetTerm(int n)
{
	return GetNumerator(n) / GetDenominator(n);
}
double Wallis::GetNumerator(int n)
{
	if (n == 0)
	{
		return 0 + 2;
	}
	else
	{
		if (n % 2 == 0)
		{
			return n + 2;
		}
		else
		{
			return n + 1;
		}
	}
}
double Wallis::GetDenominator(int n)
{
	if (n == 0)
	{
		return 0 + 1;
	}
	else
	{
		if (n % 2 == 0)
		{
			return n + 1;
		}
		else
		{
			return n + 2;
		}
	}
}

