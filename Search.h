#pragma once

namespace School {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Search
	/// </summary>
	public ref class Search : public System::Windows::Forms::Form
	{
	public:
		Search(void)
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
		~Search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ search_dividerLbl;
	protected:

	private: System::Windows::Forms::Label^ search_TitleLbl;
	private: System::Windows::Forms::Button^ search_backBtn;
	private: System::Windows::Forms::Button^ search_updateBtn;
	protected:



	private: System::Windows::Forms::Label^ search_nameLbl;
	private: System::Windows::Forms::FlowLayoutPanel^ search_nameFlwPnl;


	private: System::Windows::Forms::TextBox^ search_fnameTxt;
	private: System::Windows::Forms::TextBox^ search_mnameTxt;
	private: System::Windows::Forms::TextBox^ search_lnameTxt;



	private: System::Windows::Forms::Label^ search_idLbl;

	private: System::Windows::Forms::FlowLayoutPanel^ add_idFlwPnl;
	private: System::Windows::Forms::TextBox^ search_id1Txt;

	private: System::Windows::Forms::Label^ search_idDashLbl;
	private: System::Windows::Forms::TextBox^ search_id2Txt;


	private: System::Windows::Forms::DataGridView^ add_studentsDataGrid;
	private: System::Windows::Forms::Button^ search_searchBtn;
	private: System::Windows::Forms::Button^ search_clearBtn;



	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ search_SearchPnl;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Search::typeid));
			this->search_dividerLbl = (gcnew System::Windows::Forms::Label());
			this->search_TitleLbl = (gcnew System::Windows::Forms::Label());
			this->search_backBtn = (gcnew System::Windows::Forms::Button());
			this->search_updateBtn = (gcnew System::Windows::Forms::Button());
			this->search_nameLbl = (gcnew System::Windows::Forms::Label());
			this->search_nameFlwPnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->search_fnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->search_mnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->search_lnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->search_idLbl = (gcnew System::Windows::Forms::Label());
			this->add_idFlwPnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->search_id1Txt = (gcnew System::Windows::Forms::TextBox());
			this->search_idDashLbl = (gcnew System::Windows::Forms::Label());
			this->search_id2Txt = (gcnew System::Windows::Forms::TextBox());
			this->add_studentsDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->search_searchBtn = (gcnew System::Windows::Forms::Button());
			this->search_clearBtn = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->search_SearchPnl = (gcnew System::Windows::Forms::Panel());
			this->search_nameFlwPnl->SuspendLayout();
			this->add_idFlwPnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_studentsDataGrid))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->search_SearchPnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// search_dividerLbl
			// 
			this->search_dividerLbl->BackColor = System::Drawing::Color::Transparent;
			this->search_dividerLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_dividerLbl->ForeColor = System::Drawing::Color::White;
			this->search_dividerLbl->Location = System::Drawing::Point(-15, 49);
			this->search_dividerLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->search_dividerLbl->Name = L"search_dividerLbl";
			this->search_dividerLbl->Size = System::Drawing::Size(1067, 36);
			this->search_dividerLbl->TabIndex = 36;
			this->search_dividerLbl->Text = L"_____________";
			this->search_dividerLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// search_TitleLbl
			// 
			this->search_TitleLbl->AutoSize = true;
			this->search_TitleLbl->BackColor = System::Drawing::Color::Transparent;
			this->search_TitleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->search_TitleLbl->ForeColor = System::Drawing::Color::White;
			this->search_TitleLbl->Location = System::Drawing::Point(407, 17);
			this->search_TitleLbl->Name = L"search_TitleLbl";
			this->search_TitleLbl->Size = System::Drawing::Size(224, 32);
			this->search_TitleLbl->TabIndex = 35;
			this->search_TitleLbl->Text = L"Search Student";
			// 
			// search_backBtn
			// 
			this->search_backBtn->BackColor = System::Drawing::Color::Firebrick;
			this->search_backBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->search_backBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->search_backBtn->ForeColor = System::Drawing::Color::White;
			this->search_backBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_backBtn.Image")));
			this->search_backBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->search_backBtn->Location = System::Drawing::Point(-1, -1);
			this->search_backBtn->Margin = System::Windows::Forms::Padding(4);
			this->search_backBtn->Name = L"search_backBtn";
			this->search_backBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->search_backBtn->Size = System::Drawing::Size(130, 49);
			this->search_backBtn->TabIndex = 28;
			this->search_backBtn->Text = L" Back";
			this->search_backBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->search_backBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->search_backBtn->UseVisualStyleBackColor = false;
			this->search_backBtn->Click += gcnew System::EventHandler(this, &Search::search_backBtn_Click);
			// 
			// search_updateBtn
			// 
			this->search_updateBtn->BackColor = System::Drawing::Color::Firebrick;
			this->search_updateBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->search_updateBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->search_updateBtn->ForeColor = System::Drawing::Color::White;
			this->search_updateBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_updateBtn.Image")));
			this->search_updateBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->search_updateBtn->Location = System::Drawing::Point(894, 462);
			this->search_updateBtn->Margin = System::Windows::Forms::Padding(4);
			this->search_updateBtn->Name = L"search_updateBtn";
			this->search_updateBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->search_updateBtn->Size = System::Drawing::Size(150, 49);
			this->search_updateBtn->TabIndex = 30;
			this->search_updateBtn->Text = L"Update";
			this->search_updateBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->search_updateBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->search_updateBtn->UseVisualStyleBackColor = false;
			this->search_updateBtn->Visible = false;
			this->search_updateBtn->Click += gcnew System::EventHandler(this, &Search::search_updateBtn_Click);
			// 
			// search_nameLbl
			// 
			this->search_nameLbl->AutoSize = true;
			this->search_nameLbl->BackColor = System::Drawing::Color::Transparent;
			this->search_nameLbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_nameLbl->ForeColor = System::Drawing::Color::White;
			this->search_nameLbl->Location = System::Drawing::Point(70, 109);
			this->search_nameLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->search_nameLbl->Name = L"search_nameLbl";
			this->search_nameLbl->Size = System::Drawing::Size(75, 28);
			this->search_nameLbl->TabIndex = 29;
			this->search_nameLbl->Text = L"NAME";
			this->search_nameLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// search_nameFlwPnl
			// 
			this->search_nameFlwPnl->BackColor = System::Drawing::Color::Transparent;
			this->search_nameFlwPnl->Controls->Add(this->search_fnameTxt);
			this->search_nameFlwPnl->Controls->Add(this->search_mnameTxt);
			this->search_nameFlwPnl->Controls->Add(this->search_lnameTxt);
			this->search_nameFlwPnl->Location = System::Drawing::Point(218, 105);
			this->search_nameFlwPnl->Margin = System::Windows::Forms::Padding(4);
			this->search_nameFlwPnl->Name = L"search_nameFlwPnl";
			this->search_nameFlwPnl->Size = System::Drawing::Size(751, 42);
			this->search_nameFlwPnl->TabIndex = 31;
			// 
			// search_fnameTxt
			// 
			this->search_fnameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_fnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->search_fnameTxt->Location = System::Drawing::Point(4, 4);
			this->search_fnameTxt->Margin = System::Windows::Forms::Padding(4);
			this->search_fnameTxt->Name = L"search_fnameTxt";
			this->search_fnameTxt->Size = System::Drawing::Size(240, 32);
			this->search_fnameTxt->TabIndex = 8;
			this->search_fnameTxt->Text = L"First Name";
			this->search_fnameTxt->Enter += gcnew System::EventHandler(this, &Search::search_fnameTxt_Enter);
			this->search_fnameTxt->Leave += gcnew System::EventHandler(this, &Search::search_fnameTxt_Leave);
			// 
			// search_mnameTxt
			// 
			this->search_mnameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_mnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->search_mnameTxt->Location = System::Drawing::Point(252, 4);
			this->search_mnameTxt->Margin = System::Windows::Forms::Padding(4);
			this->search_mnameTxt->Name = L"search_mnameTxt";
			this->search_mnameTxt->Size = System::Drawing::Size(240, 32);
			this->search_mnameTxt->TabIndex = 10;
			this->search_mnameTxt->Text = L"Middle Name";
			// 
			// search_lnameTxt
			// 
			this->search_lnameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_lnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->search_lnameTxt->Location = System::Drawing::Point(500, 4);
			this->search_lnameTxt->Margin = System::Windows::Forms::Padding(4);
			this->search_lnameTxt->Name = L"search_lnameTxt";
			this->search_lnameTxt->Size = System::Drawing::Size(240, 32);
			this->search_lnameTxt->TabIndex = 11;
			this->search_lnameTxt->Text = L"Last Name";
			// 
			// search_idLbl
			// 
			this->search_idLbl->AutoSize = true;
			this->search_idLbl->BackColor = System::Drawing::Color::Transparent;
			this->search_idLbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_idLbl->ForeColor = System::Drawing::Color::White;
			this->search_idLbl->Location = System::Drawing::Point(70, 158);
			this->search_idLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->search_idLbl->Name = L"search_idLbl";
			this->search_idLbl->Size = System::Drawing::Size(132, 28);
			this->search_idLbl->TabIndex = 34;
			this->search_idLbl->Text = L"ID NUMBER";
			this->search_idLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// add_idFlwPnl
			// 
			this->add_idFlwPnl->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->add_idFlwPnl->BackColor = System::Drawing::Color::Transparent;
			this->add_idFlwPnl->Controls->Add(this->search_id1Txt);
			this->add_idFlwPnl->Controls->Add(this->search_idDashLbl);
			this->add_idFlwPnl->Controls->Add(this->search_id2Txt);
			this->add_idFlwPnl->Location = System::Drawing::Point(218, 155);
			this->add_idFlwPnl->Margin = System::Windows::Forms::Padding(4);
			this->add_idFlwPnl->Name = L"add_idFlwPnl";
			this->add_idFlwPnl->Size = System::Drawing::Size(204, 42);
			this->add_idFlwPnl->TabIndex = 32;
			// 
			// search_id1Txt
			// 
			this->search_id1Txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_id1Txt->ForeColor = System::Drawing::Color::Silver;
			this->search_id1Txt->Location = System::Drawing::Point(4, 4);
			this->search_id1Txt->Margin = System::Windows::Forms::Padding(4);
			this->search_id1Txt->Name = L"search_id1Txt";
			this->search_id1Txt->Size = System::Drawing::Size(52, 32);
			this->search_id1Txt->TabIndex = 6;
			this->search_id1Txt->Text = L"•••";
			this->search_id1Txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// search_idDashLbl
			// 
			this->search_idDashLbl->AutoSize = true;
			this->search_idDashLbl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->search_idDashLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_idDashLbl->ForeColor = System::Drawing::Color::White;
			this->search_idDashLbl->Location = System::Drawing::Point(64, 0);
			this->search_idDashLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->search_idDashLbl->Name = L"search_idDashLbl";
			this->search_idDashLbl->Size = System::Drawing::Size(18, 40);
			this->search_idDashLbl->TabIndex = 26;
			this->search_idDashLbl->Text = L"-";
			this->search_idDashLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// search_id2Txt
			// 
			this->search_id2Txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_id2Txt->ForeColor = System::Drawing::Color::Silver;
			this->search_id2Txt->Location = System::Drawing::Point(90, 4);
			this->search_id2Txt->Margin = System::Windows::Forms::Padding(4);
			this->search_id2Txt->Name = L"search_id2Txt";
			this->search_id2Txt->Size = System::Drawing::Size(104, 32);
			this->search_id2Txt->TabIndex = 27;
			this->search_id2Txt->Text = L"••••••";
			// 
			// add_studentsDataGrid
			// 
			this->add_studentsDataGrid->AllowUserToAddRows = false;
			this->add_studentsDataGrid->AllowUserToDeleteRows = false;
			this->add_studentsDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->add_studentsDataGrid->Location = System::Drawing::Point(75, 213);
			this->add_studentsDataGrid->Margin = System::Windows::Forms::Padding(4);
			this->add_studentsDataGrid->Name = L"add_studentsDataGrid";
			this->add_studentsDataGrid->ReadOnly = true;
			this->add_studentsDataGrid->RowHeadersWidth = 51;
			this->add_studentsDataGrid->Size = System::Drawing::Size(883, 230);
			this->add_studentsDataGrid->TabIndex = 33;
			// 
			// search_searchBtn
			// 
			this->search_searchBtn->BackColor = System::Drawing::Color::Firebrick;
			this->search_searchBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->search_searchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->search_searchBtn->ForeColor = System::Drawing::Color::White;
			this->search_searchBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_searchBtn.Image")));
			this->search_searchBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->search_searchBtn->Location = System::Drawing::Point(58, 4);
			this->search_searchBtn->Margin = System::Windows::Forms::Padding(4);
			this->search_searchBtn->Name = L"search_searchBtn";
			this->search_searchBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->search_searchBtn->Size = System::Drawing::Size(150, 49);
			this->search_searchBtn->TabIndex = 37;
			this->search_searchBtn->Text = L" Search";
			this->search_searchBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->search_searchBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->search_searchBtn->UseVisualStyleBackColor = false;
			this->search_searchBtn->Click += gcnew System::EventHandler(this, &Search::search_searchBtn_Click);
			// 
			// search_clearBtn
			// 
			this->search_clearBtn->BackColor = System::Drawing::Color::Firebrick;
			this->search_clearBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->search_clearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->search_clearBtn->ForeColor = System::Drawing::Color::White;
			this->search_clearBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_clearBtn.Image")));
			this->search_clearBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->search_clearBtn->Location = System::Drawing::Point(216, 4);
			this->search_clearBtn->Margin = System::Windows::Forms::Padding(4);
			this->search_clearBtn->Name = L"search_clearBtn";
			this->search_clearBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->search_clearBtn->Size = System::Drawing::Size(130, 49);
			this->search_clearBtn->TabIndex = 38;
			this->search_clearBtn->Text = L" Clear";
			this->search_clearBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->search_clearBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->search_clearBtn->UseVisualStyleBackColor = false;
			this->search_clearBtn->Visible = false;
			this->search_clearBtn->Click += gcnew System::EventHandler(this, &Search::search_clearBtn_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->Controls->Add(this->search_clearBtn);
			this->flowLayoutPanel1->Controls->Add(this->search_searchBtn);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(613, 149);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(350, 61);
			this->flowLayoutPanel1->TabIndex = 39;
			// 
			// search_SearchPnl
			// 
			this->search_SearchPnl->BackColor = System::Drawing::Color::Transparent;
			this->search_SearchPnl->Controls->Add(this->search_backBtn);
			this->search_SearchPnl->Controls->Add(this->flowLayoutPanel1);
			this->search_SearchPnl->Controls->Add(this->add_studentsDataGrid);
			this->search_SearchPnl->Controls->Add(this->search_dividerLbl);
			this->search_SearchPnl->Controls->Add(this->add_idFlwPnl);
			this->search_SearchPnl->Controls->Add(this->search_TitleLbl);
			this->search_SearchPnl->Controls->Add(this->search_idLbl);
			this->search_SearchPnl->Controls->Add(this->search_nameFlwPnl);
			this->search_SearchPnl->Controls->Add(this->search_updateBtn);
			this->search_SearchPnl->Controls->Add(this->search_nameLbl);
			this->search_SearchPnl->Location = System::Drawing::Point(94, 150);
			this->search_SearchPnl->Name = L"search_SearchPnl";
			this->search_SearchPnl->Size = System::Drawing::Size(1043, 512);
			this->search_SearchPnl->TabIndex = 40;
			// 
			// Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1232, 753);
			this->Controls->Add(this->search_SearchPnl);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Search";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"School Management System";
			this->search_nameFlwPnl->ResumeLayout(false);
			this->search_nameFlwPnl->PerformLayout();
			this->add_idFlwPnl->ResumeLayout(false);
			this->add_idFlwPnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_studentsDataGrid))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->search_SearchPnl->ResumeLayout(false);
			this->search_SearchPnl->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma region Functions
	private: System::Void clearSearchFields() {
		this->search_fnameTxt->Text = "First Name";
		this->search_fnameTxt->ForeColor = System::Drawing::Color::Silver;
		this->search_mnameTxt->Text = "Middle Name";
		this->search_mnameTxt->ForeColor = System::Drawing::Color::Silver;
		this->search_lnameTxt->Text = "Last Name";
		this->search_lnameTxt->ForeColor = System::Drawing::Color::Silver;
		this->search_id1Txt->Text = "•••";
		this->search_id1Txt->ForeColor = System::Drawing::Color::Silver;
		this->search_id1Txt->Text = "••••••";
		this->search_id1Txt->ForeColor = System::Drawing::Color::Silver;
	}
	private: System::Boolean isAllFieldsEmpty() {
		if (this->search_fnameTxt->Text->Equals("First Name") &&
			this->search_mnameTxt->Text->Equals("Middle Name") &&
			this->search_lnameTxt->Text->Equals("Last Name") &&
			this->search_id1Txt->Text->Equals("•••") &&
			this->search_id1Txt->Text->Equals("••••••")) return true;
		else return false;
	}
	private: System::Boolean isUserExist() {
		return true;
	}

#pragma endregion

#pragma region UI Actions
	public: bool searchBackToHome = false;
	private: System::Void search_backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->searchBackToHome = true;
	}
	private: System::Void search_searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isAllFieldsEmpty()) MessageBox::Show("Fields are empty", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			if (isUserExist()) {
				this->search_updateBtn->Visible = true;
			}
			else {
				MessageBox::Show("Record does not exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				clearSearchFields();
			}
		}
	}
	private: System::Void search_clearBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		clearSearchFields();
		this->search_clearBtn->Visible = false;
		this->search_updateBtn->Visible = false;
	}
#pragma endregion

#pragma region Textbox UI
	private: System::Void search_fnameTxt_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->search_fnameTxt->Text->Equals("First Name")) {
			this->search_fnameTxt->ForeColor = System::Drawing::Color::Black;
			this->search_fnameTxt->Text = "";
		}
	}
	private: System::Void search_fnameTxt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->search_fnameTxt->Text->Equals("")) {
			this->search_fnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->search_fnameTxt->Text = "First Name";
			this->search_clearBtn->Visible = false;
		}
		else { this->search_clearBtn->Visible = true; }
	}
#pragma endregion

	private: System::Void search_updateBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
