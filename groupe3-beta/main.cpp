#include "pch.h"
#include "CLmainform.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	groupe3beta::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}
