#include"VentanaPrincipal.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace VentiladorMecanicoView;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VentanaPrincipal form;
	Application::Run(% form);
}