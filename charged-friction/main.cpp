#include "Window.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void WinMain() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	chargedfriction::Window Window;
	Application::Run(%Window);
}