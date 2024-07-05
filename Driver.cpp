#include "Home.h"
#include "Add.h"
#include "Records.h"
#include "Search.h"
#include "Results.h"

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
	} else if (homeForm.switchToRecords) {
		School::Records recordsForm;
		Application::Run(% recordsForm);

		if (recordsForm.recordsBackToHome) { goto HOME; }
	} else if (homeForm.switchToSearch) {
		School::Search searchForm;
		Application::Run(% searchForm);

		if (searchForm.searchBackToHome) { goto HOME; }
	} else if (homeForm.switchToResults) {
		School::Results resultsForm;
		Application::Run(% resultsForm);

		if (resultsForm.resultsBackToHome) { goto HOME; }
	}

	Application::Exit();
}