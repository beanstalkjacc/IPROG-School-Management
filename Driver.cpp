#include "Home.h"
#include "Add.h"
#include "Records.h"

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
	} else if (homeForm.switchToList) {
		School::Records recordsForm;
		Application::Run(% recordsForm);

		if (recordsForm.recordsBackToHome) { goto HOME; }
	}

	Application::Exit();
}