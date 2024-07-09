#pragma once

namespace School {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Results
	/// </summary>
	public ref class Results : public System::Windows::Forms::Form
	{
	public:
		Results(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Results()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ results_dividerLbl;
	protected:

	private: System::Windows::Forms::Label^ results_TitleLbl;
	protected:

	private: System::Windows::Forms::Button^ results_backBtn;
	private: System::Windows::Forms::DataGridView^ results_DataGrid;
	private: System::Windows::Forms::ComboBox^ results_subCbx;
	private: System::Windows::Forms::Label^ results_subLbl;


	private: System::Windows::Forms::Button^ results_loadBtn;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Results::typeid));
			this->results_dividerLbl = (gcnew System::Windows::Forms::Label());
			this->results_TitleLbl = (gcnew System::Windows::Forms::Label());
			this->results_backBtn = (gcnew System::Windows::Forms::Button());
			this->results_DataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->results_subCbx = (gcnew System::Windows::Forms::ComboBox());
			this->results_subLbl = (gcnew System::Windows::Forms::Label());
			this->results_loadBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->results_DataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// results_dividerLbl
			// 
			this->results_dividerLbl->BackColor = System::Drawing::Color::Transparent;
			this->results_dividerLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->results_dividerLbl->ForeColor = System::Drawing::Color::White;
			this->results_dividerLbl->Location = System::Drawing::Point(80, 202);
			this->results_dividerLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->results_dividerLbl->Name = L"results_dividerLbl";
			this->results_dividerLbl->Size = System::Drawing::Size(1067, 36);
			this->results_dividerLbl->TabIndex = 34;
			this->results_dividerLbl->Text = L"____________";
			this->results_dividerLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// results_TitleLbl
			// 
			this->results_TitleLbl->AutoSize = true;
			this->results_TitleLbl->BackColor = System::Drawing::Color::Transparent;
			this->results_TitleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->results_TitleLbl->ForeColor = System::Drawing::Color::White;
			this->results_TitleLbl->Location = System::Drawing::Point(510, 170);
			this->results_TitleLbl->Name = L"results_TitleLbl";
			this->results_TitleLbl->Size = System::Drawing::Size(200, 32);
			this->results_TitleLbl->TabIndex = 33;
			this->results_TitleLbl->Text = L"Class Results";
			// 
			// results_backBtn
			// 
			this->results_backBtn->BackColor = System::Drawing::Color::Firebrick;
			this->results_backBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->results_backBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->results_backBtn->ForeColor = System::Drawing::Color::White;
			this->results_backBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"results_backBtn.Image")));
			this->results_backBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->results_backBtn->Location = System::Drawing::Point(94, 152);
			this->results_backBtn->Margin = System::Windows::Forms::Padding(4);
			this->results_backBtn->Name = L"results_backBtn";
			this->results_backBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->results_backBtn->Size = System::Drawing::Size(130, 49);
			this->results_backBtn->TabIndex = 32;
			this->results_backBtn->Text = L" Back";
			this->results_backBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->results_backBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->results_backBtn->UseVisualStyleBackColor = false;
			this->results_backBtn->Click += gcnew System::EventHandler(this, &Results::results_backBtn_Click);
			// 
			// results_DataGrid
			// 
			this->results_DataGrid->AllowUserToAddRows = false;
			this->results_DataGrid->AllowUserToDeleteRows = false;
			this->results_DataGrid->AllowUserToOrderColumns = true;
			this->results_DataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->results_DataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->results_DataGrid->Location = System::Drawing::Point(129, 318);
			this->results_DataGrid->Name = L"results_DataGrid";
			this->results_DataGrid->ReadOnly = true;
			this->results_DataGrid->RowHeadersWidth = 51;
			this->results_DataGrid->RowTemplate->Height = 24;
			this->results_DataGrid->Size = System::Drawing::Size(968, 315);
			this->results_DataGrid->TabIndex = 31;
			// 
			// results_subCbx
			// 
			this->results_subCbx->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->results_subCbx->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->results_subCbx->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->results_subCbx->FormattingEnabled = true;
			this->results_subCbx->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"DBMGTLAB", L"DBMGTLEC", L"DISSTRU1", L"GEFILDIS",
					L"GEPANPI", L"GEPEFITE", L"GEPURPCO", L"IPROGLAB", L"IPROGLEC", L"REMMCRAT"
			});
			this->results_subCbx->Location = System::Drawing::Point(254, 266);
			this->results_subCbx->Margin = System::Windows::Forms::Padding(4);
			this->results_subCbx->Name = L"results_subCbx";
			this->results_subCbx->Size = System::Drawing::Size(155, 31);
			this->results_subCbx->Sorted = true;
			this->results_subCbx->TabIndex = 35;
			// 
			// results_subLbl
			// 
			this->results_subLbl->AutoSize = true;
			this->results_subLbl->BackColor = System::Drawing::Color::Transparent;
			this->results_subLbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold));
			this->results_subLbl->ForeColor = System::Drawing::Color::White;
			this->results_subLbl->Location = System::Drawing::Point(124, 268);
			this->results_subLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->results_subLbl->Name = L"results_subLbl";
			this->results_subLbl->Size = System::Drawing::Size(107, 28);
			this->results_subLbl->TabIndex = 36;
			this->results_subLbl->Text = L"SUBJECT";
			// 
			// results_loadBtn
			// 
			this->results_loadBtn->BackColor = System::Drawing::Color::Firebrick;
			this->results_loadBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->results_loadBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->results_loadBtn->ForeColor = System::Drawing::Color::White;
			this->results_loadBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"results_loadBtn.Image")));
			this->results_loadBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->results_loadBtn->Location = System::Drawing::Point(428, 259);
			this->results_loadBtn->Margin = System::Windows::Forms::Padding(4);
			this->results_loadBtn->Name = L"results_loadBtn";
			this->results_loadBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->results_loadBtn->Size = System::Drawing::Size(130, 49);
			this->results_loadBtn->TabIndex = 37;
			this->results_loadBtn->Text = L" Load";
			this->results_loadBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->results_loadBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->results_loadBtn->UseVisualStyleBackColor = false;
			this->results_loadBtn->Click += gcnew System::EventHandler(this, &Results::results_loadBtn_Click);
			// 
			// Results
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1232, 753);
			this->Controls->Add(this->results_loadBtn);
			this->Controls->Add(this->results_subCbx);
			this->Controls->Add(this->results_subLbl);
			this->Controls->Add(this->results_dividerLbl);
			this->Controls->Add(this->results_TitleLbl);
			this->Controls->Add(this->results_backBtn);
			this->Controls->Add(this->results_DataGrid);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Results";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"School Management System";
			this->Load += gcnew System::EventHandler(this, &Results::Results_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->results_DataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region SQL Queries
	private: System::Void loadData(System::String^ subject) {
		String^ connString = "Server=localhost;database='group3_schooldb';username='root';password=''";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);

		conn->Open();
		String^ adpString = "SELECT ID_NUMBER, FULL_NAME, ACTIVITIES, MIDTERMS, FINALS, RECITATION, ATTENDANCE, AVERAGE, GWA " + 
			"FROM records_table WHERE SUBJECT_CODE = '" + subject + "'";
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(adpString, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		this->results_DataGrid->DataSource = dt;
		if (dt->Rows->Count == 0) {	MessageBox::Show("No Records Found", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information); }
		conn->Close();
	}
#pragma endregion

#pragma region UI Actions
	public: bool resultsBackToHome = false;
	private: System::Void results_backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->resultsBackToHome = true;
	}
	//TODO: Load db, default should display DBMGTLAB grades of all students
	private: System::Void Results_Load(System::Object^ sender, System::EventArgs^ e) {
		this->results_subCbx->Text = "DBMGTLAB";
		loadData("DBMGTLAB");
	}
	//TODO: Load db according to selected subject
	private: System::Void results_loadBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		loadData(this->results_subCbx->Text);
	}
#pragma endregion
};
}
