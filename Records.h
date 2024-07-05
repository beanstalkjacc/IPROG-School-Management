#pragma once

namespace School {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Records
	/// </summary>
	public ref class Records : public System::Windows::Forms::Form
	{
	public:
		Records(void)
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
		~Records()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ records_DataGrid;
	protected:


	private: System::Windows::Forms::Label^ records_dividerLbl;
	private: System::Windows::Forms::Label^ records_TitleLbl;
	private: System::Windows::Forms::Button^ records_backBtn;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Records::typeid));
			this->records_DataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->records_dividerLbl = (gcnew System::Windows::Forms::Label());
			this->records_TitleLbl = (gcnew System::Windows::Forms::Label());
			this->records_backBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->records_DataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// records_DataGrid
			// 
			this->records_DataGrid->AllowUserToAddRows = false;
			this->records_DataGrid->AllowUserToDeleteRows = false;
			this->records_DataGrid->AllowUserToOrderColumns = true;
			this->records_DataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->records_DataGrid->Location = System::Drawing::Point(132, 278);
			this->records_DataGrid->Name = L"records_DataGrid";
			this->records_DataGrid->ReadOnly = true;
			this->records_DataGrid->RowHeadersWidth = 51;
			this->records_DataGrid->RowTemplate->Height = 24;
			this->records_DataGrid->Size = System::Drawing::Size(968, 357);
			this->records_DataGrid->TabIndex = 9;
			// 
			// records_dividerLbl
			// 
			this->records_dividerLbl->BackColor = System::Drawing::Color::Transparent;
			this->records_dividerLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->records_dividerLbl->ForeColor = System::Drawing::Color::White;
			this->records_dividerLbl->Location = System::Drawing::Point(83, 204);
			this->records_dividerLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->records_dividerLbl->Name = L"records_dividerLbl";
			this->records_dividerLbl->Size = System::Drawing::Size(1067, 36);
			this->records_dividerLbl->TabIndex = 30;
			this->records_dividerLbl->Text = L"_______________";
			this->records_dividerLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// records_TitleLbl
			// 
			this->records_TitleLbl->AutoSize = true;
			this->records_TitleLbl->BackColor = System::Drawing::Color::Transparent;
			this->records_TitleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->records_TitleLbl->ForeColor = System::Drawing::Color::White;
			this->records_TitleLbl->Location = System::Drawing::Point(485, 172);
			this->records_TitleLbl->Name = L"records_TitleLbl";
			this->records_TitleLbl->Size = System::Drawing::Size(244, 32);
			this->records_TitleLbl->TabIndex = 29;
			this->records_TitleLbl->Text = L"View All Records";
			// 
			// records_backBtn
			// 
			this->records_backBtn->BackColor = System::Drawing::Color::Firebrick;
			this->records_backBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->records_backBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->records_backBtn->ForeColor = System::Drawing::Color::White;
			this->records_backBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"records_backBtn.Image")));
			this->records_backBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->records_backBtn->Location = System::Drawing::Point(97, 154);
			this->records_backBtn->Margin = System::Windows::Forms::Padding(4);
			this->records_backBtn->Name = L"records_backBtn";
			this->records_backBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->records_backBtn->Size = System::Drawing::Size(130, 49);
			this->records_backBtn->TabIndex = 28;
			this->records_backBtn->Text = L" Back";
			this->records_backBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->records_backBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->records_backBtn->UseVisualStyleBackColor = false;
			this->records_backBtn->Click += gcnew System::EventHandler(this, &Records::records_backBtn_Click);
			// 
			// Records
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1232, 753);
			this->Controls->Add(this->records_dividerLbl);
			this->Controls->Add(this->records_TitleLbl);
			this->Controls->Add(this->records_backBtn);
			this->Controls->Add(this->records_DataGrid);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Records";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"School Management System";
			this->Load += gcnew System::EventHandler(this, &Records::Records_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->records_DataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region UI Actions
	public: bool recordsBackToHome = false;
	private: System::Void records_backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->recordsBackToHome = true;
	}
#pragma endregion
	//TODO: Load db, display all student records for all subjects
	private: System::Void Records_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
