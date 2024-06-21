#include "Home.h"
#include "Add.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	HOME: School::Home homeForm;
	Application::Run(%homeForm);
	
	if (homeForm.switchToAdd) {
		School::Add addForm;
		Application::Run(% addForm);

		if (addForm.addBackToHome) { goto HOME; }
	}

	Application::Exit();
}