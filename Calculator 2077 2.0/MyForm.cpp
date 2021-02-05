#include "MyForm.h"

using namespace Calculator207720;
using namespace System;
using namespace System::Windows::Forms;


void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator207720::MyForm form;
	Application::Run(%form);
		
}