#include "pch.h"

using namespace System;



#include "Mainform.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Gstorg::Form1());
	return 0;
}