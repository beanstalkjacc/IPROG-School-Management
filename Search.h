#pragma once

namespace School {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

#pragma region Initialize
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
	private: System::Windows::Forms::Label^ search_TitleLbl;
	private: System::Windows::Forms::Button^ search_backBtn;
	private: System::Windows::Forms::Button^ search_updateBtn;
	private: System::Windows::Forms::Label^ search_nameLbl;
	private: System::Windows::Forms::FlowLayoutPanel^ search_nameFlwPnl;
	private: System::Windows::Forms::TextBox^ search_fnameTxt;
	private: System::Windows::Forms::TextBox^ search_mnameTxt;
	private: System::Windows::Forms::TextBox^ search_lnameTxt;
	private: System::Windows::Forms::Label^ search_idLbl;
	private: System::Windows::Forms::FlowLayoutPanel^ search_idFlwPnl;
	private: System::Windows::Forms::TextBox^ search_id1Txt;
	private: System::Windows::Forms::Label^ search_idDashLbl;
	private: System::Windows::Forms::TextBox^ search_id2Txt;
	private: System::Windows::Forms::DataGridView^ search_studentDataGrid;
	private: System::Windows::Forms::Button^ search_searchBtn;
	private: System::Windows::Forms::Button^ search_clearBtn;
	private: System::Windows::Forms::FlowLayoutPanel^ search_btnFlwPnl;
	private: System::Windows::Forms::Panel^ search_SearchPnl;
	private: System::Windows::Forms::Panel^ search_UpdatePnl;
	private: System::Windows::Forms::Button^ update_backBtn;
	private: System::Windows::Forms::Label^ update_dividerLbl;
	private: System::Windows::Forms::Label^ update_TitleLbl;
	private: System::Windows::Forms::Button^ update_saveBtn;
	private: System::Windows::Forms::Label^ update_nameLbl;
	private: System::Windows::Forms::FlowLayoutPanel^ update_nameFlwPnl;
	private: System::Windows::Forms::TextBox^ update_fnameTxt;
	private: System::Windows::Forms::TextBox^ update_mnameTxt;
	private: System::Windows::Forms::TextBox^ update_lnameTxt;
	private: System::Windows::Forms::Label^ update_idLbl;
	private: System::Windows::Forms::FlowLayoutPanel^ update_idFlwPnl;
	private: System::Windows::Forms::TextBox^ update_id1Txt;
	private: System::Windows::Forms::Label^ update_idDashLbl;
	private: System::Windows::Forms::TextBox^ update_id2Txt;
	private: System::Windows::Forms::Label^ update_gradeLbl;
	private: System::Windows::Forms::FlowLayoutPanel^ update_gradesFlwPnl;
	private: System::Windows::Forms::ComboBox^ update_subCbx;
	private: System::Windows::Forms::TextBox^ update_actGrade;
	private: System::Windows::Forms::TextBox^ update_midGrade;
	private: System::Windows::Forms::TextBox^ update_finalsGrade;
	private: System::Windows::Forms::TextBox^ update_recitGrade;
	private: System::Windows::Forms::TextBox^ update_attnGrade;
	private: System::Windows::Forms::Label^ update_subLbl;
	private: System::Windows::Forms::Label^ update_attnLbl;
	private: System::Windows::Forms::Label^ update_recitLbl;
	private: System::Windows::Forms::Label^ update_finalsLbl;
	private: System::Windows::Forms::Label^ update_midLbl;
	private: System::Windows::Forms::Label^ update_actLbl;
	private: System::Windows::Forms::DataGridView^ update_studentDataGrid;
	private: System::Windows::Forms::Button^ search_deleteBtn;
	private: System::Windows::Forms::Button^ update_deleteBtn;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma endregion

#pragma region Design
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
			this->search_idFlwPnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->search_id1Txt = (gcnew System::Windows::Forms::TextBox());
			this->search_idDashLbl = (gcnew System::Windows::Forms::Label());
			this->search_id2Txt = (gcnew System::Windows::Forms::TextBox());
			this->search_studentDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->search_searchBtn = (gcnew System::Windows::Forms::Button());
			this->search_clearBtn = (gcnew System::Windows::Forms::Button());
			this->search_btnFlwPnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->search_SearchPnl = (gcnew System::Windows::Forms::Panel());
			this->search_deleteBtn = (gcnew System::Windows::Forms::Button());
			this->search_UpdatePnl = (gcnew System::Windows::Forms::Panel());
			this->update_deleteBtn = (gcnew System::Windows::Forms::Button());
			this->update_nameLbl = (gcnew System::Windows::Forms::Label());
			this->update_nameFlwPnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->update_fnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->update_mnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->update_lnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->update_idLbl = (gcnew System::Windows::Forms::Label());
			this->update_idFlwPnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->update_id1Txt = (gcnew System::Windows::Forms::TextBox());
			this->update_idDashLbl = (gcnew System::Windows::Forms::Label());
			this->update_id2Txt = (gcnew System::Windows::Forms::TextBox());
			this->update_gradeLbl = (gcnew System::Windows::Forms::Label());
			this->update_gradesFlwPnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->update_subCbx = (gcnew System::Windows::Forms::ComboBox());
			this->update_actGrade = (gcnew System::Windows::Forms::TextBox());
			this->update_midGrade = (gcnew System::Windows::Forms::TextBox());
			this->update_finalsGrade = (gcnew System::Windows::Forms::TextBox());
			this->update_recitGrade = (gcnew System::Windows::Forms::TextBox());
			this->update_attnGrade = (gcnew System::Windows::Forms::TextBox());
			this->update_subLbl = (gcnew System::Windows::Forms::Label());
			this->update_attnLbl = (gcnew System::Windows::Forms::Label());
			this->update_recitLbl = (gcnew System::Windows::Forms::Label());
			this->update_finalsLbl = (gcnew System::Windows::Forms::Label());
			this->update_midLbl = (gcnew System::Windows::Forms::Label());
			this->update_actLbl = (gcnew System::Windows::Forms::Label());
			this->update_studentDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->update_backBtn = (gcnew System::Windows::Forms::Button());
			this->update_dividerLbl = (gcnew System::Windows::Forms::Label());
			this->update_TitleLbl = (gcnew System::Windows::Forms::Label());
			this->update_saveBtn = (gcnew System::Windows::Forms::Button());
			this->search_nameFlwPnl->SuspendLayout();
			this->search_idFlwPnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_studentDataGrid))->BeginInit();
			this->search_btnFlwPnl->SuspendLayout();
			this->search_SearchPnl->SuspendLayout();
			this->search_UpdatePnl->SuspendLayout();
			this->update_nameFlwPnl->SuspendLayout();
			this->update_idFlwPnl->SuspendLayout();
			this->update_gradesFlwPnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->update_studentDataGrid))->BeginInit();
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
			this->search_mnameTxt->Enter += gcnew System::EventHandler(this, &Search::search_mnameTxt_Enter);
			this->search_mnameTxt->Leave += gcnew System::EventHandler(this, &Search::search_mnameTxt_Leave);
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
			this->search_lnameTxt->Enter += gcnew System::EventHandler(this, &Search::search_lnameTxt_Enter);
			this->search_lnameTxt->Leave += gcnew System::EventHandler(this, &Search::search_lnameTxt_Leave);
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
			// search_idFlwPnl
			// 
			this->search_idFlwPnl->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->search_idFlwPnl->BackColor = System::Drawing::Color::Transparent;
			this->search_idFlwPnl->Controls->Add(this->search_id1Txt);
			this->search_idFlwPnl->Controls->Add(this->search_idDashLbl);
			this->search_idFlwPnl->Controls->Add(this->search_id2Txt);
			this->search_idFlwPnl->Location = System::Drawing::Point(218, 155);
			this->search_idFlwPnl->Margin = System::Windows::Forms::Padding(4);
			this->search_idFlwPnl->Name = L"search_idFlwPnl";
			this->search_idFlwPnl->Size = System::Drawing::Size(204, 42);
			this->search_idFlwPnl->TabIndex = 32;
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
			this->search_id1Txt->Enter += gcnew System::EventHandler(this, &Search::search_id1Txt_Enter);
			this->search_id1Txt->Leave += gcnew System::EventHandler(this, &Search::search_id1Txt_Leave);
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
			this->search_id2Txt->Enter += gcnew System::EventHandler(this, &Search::search_id2Txt_Enter);
			this->search_id2Txt->Leave += gcnew System::EventHandler(this, &Search::search_id2Txt_Leave);
			// 
			// search_studentDataGrid
			// 
			this->search_studentDataGrid->AllowUserToAddRows = false;
			this->search_studentDataGrid->AllowUserToDeleteRows = false;
			this->search_studentDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->search_studentDataGrid->Location = System::Drawing::Point(75, 213);
			this->search_studentDataGrid->Margin = System::Windows::Forms::Padding(4);
			this->search_studentDataGrid->Name = L"search_studentDataGrid";
			this->search_studentDataGrid->ReadOnly = true;
			this->search_studentDataGrid->RowHeadersWidth = 51;
			this->search_studentDataGrid->Size = System::Drawing::Size(883, 230);
			this->search_studentDataGrid->TabIndex = 33;
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
			// search_btnFlwPnl
			// 
			this->search_btnFlwPnl->BackColor = System::Drawing::Color::Transparent;
			this->search_btnFlwPnl->Controls->Add(this->search_clearBtn);
			this->search_btnFlwPnl->Controls->Add(this->search_searchBtn);
			this->search_btnFlwPnl->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->search_btnFlwPnl->Location = System::Drawing::Point(613, 149);
			this->search_btnFlwPnl->Margin = System::Windows::Forms::Padding(4);
			this->search_btnFlwPnl->Name = L"search_btnFlwPnl";
			this->search_btnFlwPnl->Size = System::Drawing::Size(350, 61);
			this->search_btnFlwPnl->TabIndex = 39;
			// 
			// search_SearchPnl
			// 
			this->search_SearchPnl->BackColor = System::Drawing::Color::Transparent;
			this->search_SearchPnl->Controls->Add(this->search_deleteBtn);
			this->search_SearchPnl->Controls->Add(this->search_backBtn);
			this->search_SearchPnl->Controls->Add(this->search_btnFlwPnl);
			this->search_SearchPnl->Controls->Add(this->search_studentDataGrid);
			this->search_SearchPnl->Controls->Add(this->search_dividerLbl);
			this->search_SearchPnl->Controls->Add(this->search_idFlwPnl);
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
			// search_deleteBtn
			// 
			this->search_deleteBtn->BackColor = System::Drawing::Color::Firebrick;
			this->search_deleteBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->search_deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->search_deleteBtn->ForeColor = System::Drawing::Color::White;
			this->search_deleteBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search_deleteBtn.Image")));
			this->search_deleteBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->search_deleteBtn->Location = System::Drawing::Point(736, 463);
			this->search_deleteBtn->Margin = System::Windows::Forms::Padding(4);
			this->search_deleteBtn->Name = L"search_deleteBtn";
			this->search_deleteBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->search_deleteBtn->Size = System::Drawing::Size(150, 49);
			this->search_deleteBtn->TabIndex = 40;
			this->search_deleteBtn->Text = L" Delete";
			this->search_deleteBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->search_deleteBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->search_deleteBtn->UseVisualStyleBackColor = false;
			this->search_deleteBtn->Visible = false;
			this->search_deleteBtn->Click += gcnew System::EventHandler(this, &Search::search_deleteBtn_Click);
			// 
			// search_UpdatePnl
			// 
			this->search_UpdatePnl->BackColor = System::Drawing::Color::Transparent;
			this->search_UpdatePnl->Controls->Add(this->update_deleteBtn);
			this->search_UpdatePnl->Controls->Add(this->update_nameLbl);
			this->search_UpdatePnl->Controls->Add(this->update_nameFlwPnl);
			this->search_UpdatePnl->Controls->Add(this->update_idLbl);
			this->search_UpdatePnl->Controls->Add(this->update_idFlwPnl);
			this->search_UpdatePnl->Controls->Add(this->update_gradeLbl);
			this->search_UpdatePnl->Controls->Add(this->update_gradesFlwPnl);
			this->search_UpdatePnl->Controls->Add(this->update_subLbl);
			this->search_UpdatePnl->Controls->Add(this->update_attnLbl);
			this->search_UpdatePnl->Controls->Add(this->update_recitLbl);
			this->search_UpdatePnl->Controls->Add(this->update_finalsLbl);
			this->search_UpdatePnl->Controls->Add(this->update_midLbl);
			this->search_UpdatePnl->Controls->Add(this->update_actLbl);
			this->search_UpdatePnl->Controls->Add(this->update_studentDataGrid);
			this->search_UpdatePnl->Controls->Add(this->update_backBtn);
			this->search_UpdatePnl->Controls->Add(this->update_dividerLbl);
			this->search_UpdatePnl->Controls->Add(this->update_TitleLbl);
			this->search_UpdatePnl->Controls->Add(this->update_saveBtn);
			this->search_UpdatePnl->Location = System::Drawing::Point(94, 150);
			this->search_UpdatePnl->Name = L"search_UpdatePnl";
			this->search_UpdatePnl->Size = System::Drawing::Size(1043, 512);
			this->search_UpdatePnl->TabIndex = 41;
			this->search_UpdatePnl->Visible = false;
			// 
			// update_deleteBtn
			// 
			this->update_deleteBtn->BackColor = System::Drawing::Color::Firebrick;
			this->update_deleteBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->update_deleteBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->update_deleteBtn->ForeColor = System::Drawing::Color::White;
			this->update_deleteBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update_deleteBtn.Image")));
			this->update_deleteBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->update_deleteBtn->Location = System::Drawing::Point(756, 463);
			this->update_deleteBtn->Margin = System::Windows::Forms::Padding(4);
			this->update_deleteBtn->Name = L"update_deleteBtn";
			this->update_deleteBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->update_deleteBtn->Size = System::Drawing::Size(150, 49);
			this->update_deleteBtn->TabIndex = 50;
			this->update_deleteBtn->Text = L" Delete";
			this->update_deleteBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->update_deleteBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->update_deleteBtn->UseVisualStyleBackColor = false;
			this->update_deleteBtn->Visible = false;
			this->update_deleteBtn->Click += gcnew System::EventHandler(this, &Search::update_deleteBtn_Click);
			// 
			// update_nameLbl
			// 
			this->update_nameLbl->AutoSize = true;
			this->update_nameLbl->BackColor = System::Drawing::Color::Transparent;
			this->update_nameLbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_nameLbl->ForeColor = System::Drawing::Color::White;
			this->update_nameLbl->Location = System::Drawing::Point(69, 101);
			this->update_nameLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->update_nameLbl->Name = L"update_nameLbl";
			this->update_nameLbl->Size = System::Drawing::Size(75, 28);
			this->update_nameLbl->TabIndex = 37;
			this->update_nameLbl->Text = L"NAME";
			this->update_nameLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// update_nameFlwPnl
			// 
			this->update_nameFlwPnl->BackColor = System::Drawing::Color::Transparent;
			this->update_nameFlwPnl->Controls->Add(this->update_fnameTxt);
			this->update_nameFlwPnl->Controls->Add(this->update_mnameTxt);
			this->update_nameFlwPnl->Controls->Add(this->update_lnameTxt);
			this->update_nameFlwPnl->Location = System::Drawing::Point(217, 97);
			this->update_nameFlwPnl->Margin = System::Windows::Forms::Padding(4);
			this->update_nameFlwPnl->Name = L"update_nameFlwPnl";
			this->update_nameFlwPnl->Size = System::Drawing::Size(751, 42);
			this->update_nameFlwPnl->TabIndex = 38;
			// 
			// update_fnameTxt
			// 
			this->update_fnameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_fnameTxt->ForeColor = System::Drawing::Color::Black;
			this->update_fnameTxt->Location = System::Drawing::Point(4, 4);
			this->update_fnameTxt->Margin = System::Windows::Forms::Padding(4);
			this->update_fnameTxt->Name = L"update_fnameTxt";
			this->update_fnameTxt->ReadOnly = true;
			this->update_fnameTxt->Size = System::Drawing::Size(240, 32);
			this->update_fnameTxt->TabIndex = 8;
			this->update_fnameTxt->Text = L"First Name";
			/*this->update_fnameTxt->Enter += gcnew System::EventHandler(this, &Search::update_fnameTxt_Enter);
			this->update_fnameTxt->Leave += gcnew System::EventHandler(this, &Search::update_fnameTxt_Leave);*/
			// 
			// update_mnameTxt
			// 
			this->update_mnameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_mnameTxt->ForeColor = System::Drawing::Color::Black;
			this->update_mnameTxt->Location = System::Drawing::Point(252, 4);
			this->update_mnameTxt->Margin = System::Windows::Forms::Padding(4);
			this->update_mnameTxt->Name = L"update_mnameTxt";
			this->update_mnameTxt->ReadOnly = true;
			this->update_mnameTxt->Size = System::Drawing::Size(240, 32);
			this->update_mnameTxt->TabIndex = 10;
			this->update_mnameTxt->Text = L"Middle Name";
			/*this->update_mnameTxt->Enter += gcnew System::EventHandler(this, &Search::update_mnameTxt_Enter);
			this->update_mnameTxt->Leave += gcnew System::EventHandler(this, &Search::update_mnameTxt_Leave);*/
			// 
			// update_lnameTxt
			// 
			this->update_lnameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_lnameTxt->ForeColor = System::Drawing::Color::Black;
			this->update_lnameTxt->Location = System::Drawing::Point(500, 4);
			this->update_lnameTxt->Margin = System::Windows::Forms::Padding(4);
			this->update_lnameTxt->Name = L"update_lnameTxt";
			this->update_lnameTxt->ReadOnly = true;
			this->update_lnameTxt->Size = System::Drawing::Size(240, 32);
			this->update_lnameTxt->TabIndex = 11;
			this->update_lnameTxt->Text = L"Last Name";
			/*this->update_lnameTxt->Enter += gcnew System::EventHandler(this, &Search::update_lnameTxt_Enter);
			this->update_lnameTxt->Leave += gcnew System::EventHandler(this, &Search::update_lnameTxt_Leave);*/
			// 
			// update_idLbl
			// 
			this->update_idLbl->AutoSize = true;
			this->update_idLbl->BackColor = System::Drawing::Color::Transparent;
			this->update_idLbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_idLbl->ForeColor = System::Drawing::Color::White;
			this->update_idLbl->Location = System::Drawing::Point(69, 150);
			this->update_idLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->update_idLbl->Name = L"update_idLbl";
			this->update_idLbl->Size = System::Drawing::Size(132, 28);
			this->update_idLbl->TabIndex = 49;
			this->update_idLbl->Text = L"ID NUMBER";
			this->update_idLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// update_idFlwPnl
			// 
			this->update_idFlwPnl->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->update_idFlwPnl->BackColor = System::Drawing::Color::Transparent;
			this->update_idFlwPnl->Controls->Add(this->update_id1Txt);
			this->update_idFlwPnl->Controls->Add(this->update_idDashLbl);
			this->update_idFlwPnl->Controls->Add(this->update_id2Txt);
			this->update_idFlwPnl->Location = System::Drawing::Point(217, 147);
			this->update_idFlwPnl->Margin = System::Windows::Forms::Padding(4);
			this->update_idFlwPnl->Name = L"update_idFlwPnl";
			this->update_idFlwPnl->Size = System::Drawing::Size(204, 42);
			this->update_idFlwPnl->TabIndex = 39;
			// 
			// update_id1Txt
			// 
			this->update_id1Txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_id1Txt->ForeColor = System::Drawing::Color::Black;
			this->update_id1Txt->Location = System::Drawing::Point(4, 4);
			this->update_id1Txt->Margin = System::Windows::Forms::Padding(4);
			this->update_id1Txt->Name = L"update_id1Txt";
			this->update_id1Txt->ReadOnly = true;
			this->update_id1Txt->Size = System::Drawing::Size(52, 32);
			this->update_id1Txt->TabIndex = 6;
			this->update_id1Txt->Text = L"•••";
			this->update_id1Txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			/*this->update_id1Txt->Enter += gcnew System::EventHandler(this, &Search::update_id1Txt_Enter);
			this->update_id1Txt->Leave += gcnew System::EventHandler(this, &Search::update_id1Txt_Leave);*/
			// 
			// update_idDashLbl
			// 
			this->update_idDashLbl->AutoSize = true;
			this->update_idDashLbl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->update_idDashLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_idDashLbl->ForeColor = System::Drawing::Color::White;
			this->update_idDashLbl->Location = System::Drawing::Point(64, 0);
			this->update_idDashLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->update_idDashLbl->Name = L"update_idDashLbl";
			this->update_idDashLbl->Size = System::Drawing::Size(18, 40);
			this->update_idDashLbl->TabIndex = 26;
			this->update_idDashLbl->Text = L"-";
			this->update_idDashLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// update_id2Txt
			// 
			this->update_id2Txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_id2Txt->ForeColor = System::Drawing::Color::Black;
			this->update_id2Txt->Location = System::Drawing::Point(90, 4);
			this->update_id2Txt->Margin = System::Windows::Forms::Padding(4);
			this->update_id2Txt->Name = L"update_id2Txt";
			this->update_id2Txt->ReadOnly = true;
			this->update_id2Txt->Size = System::Drawing::Size(104, 32);
			this->update_id2Txt->TabIndex = 27;
			this->update_id2Txt->Text = L"••••••";
			/*this->update_id2Txt->Enter += gcnew System::EventHandler(this, &Search::update_id2Txt_Enter);
			this->update_id2Txt->Leave += gcnew System::EventHandler(this, &Search::update_id2Txt_Leave);*/
			// 
			// update_gradeLbl
			// 
			this->update_gradeLbl->AutoSize = true;
			this->update_gradeLbl->BackColor = System::Drawing::Color::Transparent;
			this->update_gradeLbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_gradeLbl->ForeColor = System::Drawing::Color::White;
			this->update_gradeLbl->Location = System::Drawing::Point(67, 193);
			this->update_gradeLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->update_gradeLbl->Name = L"update_gradeLbl";
			this->update_gradeLbl->Size = System::Drawing::Size(99, 28);
			this->update_gradeLbl->TabIndex = 40;
			this->update_gradeLbl->Text = L"GRADES";
			this->update_gradeLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// update_gradesFlwPnl
			// 
			this->update_gradesFlwPnl->BackColor = System::Drawing::Color::Transparent;
			this->update_gradesFlwPnl->Controls->Add(this->update_subCbx);
			this->update_gradesFlwPnl->Controls->Add(this->update_actGrade);
			this->update_gradesFlwPnl->Controls->Add(this->update_midGrade);
			this->update_gradesFlwPnl->Controls->Add(this->update_finalsGrade);
			this->update_gradesFlwPnl->Controls->Add(this->update_recitGrade);
			this->update_gradesFlwPnl->Controls->Add(this->update_attnGrade);
			this->update_gradesFlwPnl->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->update_gradesFlwPnl->Location = System::Drawing::Point(238, 231);
			this->update_gradesFlwPnl->Margin = System::Windows::Forms::Padding(4);
			this->update_gradesFlwPnl->Name = L"update_gradesFlwPnl";
			this->update_gradesFlwPnl->Size = System::Drawing::Size(170, 272);
			this->update_gradesFlwPnl->TabIndex = 41;
			// 
			// update_subCbx
			// 
			this->update_subCbx->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->update_subCbx->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->update_subCbx->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_subCbx->ForeColor = System::Drawing::Color::Black;
			this->update_subCbx->FormattingEnabled = true;
			this->update_subCbx->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"DBMGTLAB", L"DBMGTLEC", L"DISSTRU1", L"GEFILDIS",
					L"GEPANPI", L"GEPEFITE", L"GEPURPCO", L"IPROGLAB", L"IPROGLEC", L"REMMCRAT"
			});
			this->update_subCbx->Location = System::Drawing::Point(4, 4);
			this->update_subCbx->Margin = System::Windows::Forms::Padding(4);
			this->update_subCbx->Name = L"update_subCbx";
			this->update_subCbx->Size = System::Drawing::Size(155, 31);
			this->update_subCbx->Sorted = true;
			this->update_subCbx->TabIndex = 5;
			this->update_subCbx->SelectedIndexChanged += gcnew System::EventHandler(this, &Search::update_subCbx_SelectedIndexChanged);
			// 
			// update_actGrade
			// 
			this->update_actGrade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_actGrade->ForeColor = System::Drawing::Color::Black;
			this->update_actGrade->Location = System::Drawing::Point(4, 43);
			this->update_actGrade->Margin = System::Windows::Forms::Padding(4);
			this->update_actGrade->Name = L"update_actGrade";
			this->update_actGrade->Size = System::Drawing::Size(155, 32);
			this->update_actGrade->TabIndex = 3;
			this->update_actGrade->Text = L"0.00";
			this->update_actGrade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->update_actGrade->Enter += gcnew System::EventHandler(this, &Search::update_actGrade_Enter);
			this->update_actGrade->Leave += gcnew System::EventHandler(this, &Search::update_actGrade_Leave);
			// 
			// update_midGrade
			// 
			this->update_midGrade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_midGrade->ForeColor = System::Drawing::Color::Black;
			this->update_midGrade->Location = System::Drawing::Point(4, 83);
			this->update_midGrade->Margin = System::Windows::Forms::Padding(4);
			this->update_midGrade->Name = L"update_midGrade";
			this->update_midGrade->Size = System::Drawing::Size(155, 32);
			this->update_midGrade->TabIndex = 0;
			this->update_midGrade->Text = L"0.00";
			this->update_midGrade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->update_midGrade->Enter += gcnew System::EventHandler(this, &Search::update_midGrade_Enter);
			this->update_midGrade->Leave += gcnew System::EventHandler(this, &Search::update_midGrade_Leave);
			// 
			// update_finalsGrade
			// 
			this->update_finalsGrade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_finalsGrade->ForeColor = System::Drawing::Color::Black;
			this->update_finalsGrade->Location = System::Drawing::Point(4, 123);
			this->update_finalsGrade->Margin = System::Windows::Forms::Padding(4);
			this->update_finalsGrade->Name = L"update_finalsGrade";
			this->update_finalsGrade->Size = System::Drawing::Size(155, 32);
			this->update_finalsGrade->TabIndex = 1;
			this->update_finalsGrade->Text = L"0.00";
			this->update_finalsGrade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->update_finalsGrade->Enter += gcnew System::EventHandler(this, &Search::update_finalsGrade_Enter);
			this->update_finalsGrade->Leave += gcnew System::EventHandler(this, &Search::update_finalsGrade_Leave);
			// 
			// update_recitGrade
			// 
			this->update_recitGrade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_recitGrade->ForeColor = System::Drawing::Color::Black;
			this->update_recitGrade->Location = System::Drawing::Point(4, 163);
			this->update_recitGrade->Margin = System::Windows::Forms::Padding(4);
			this->update_recitGrade->Name = L"update_recitGrade";
			this->update_recitGrade->Size = System::Drawing::Size(155, 32);
			this->update_recitGrade->TabIndex = 2;
			this->update_recitGrade->Text = L"0.00";
			this->update_recitGrade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->update_recitGrade->Enter += gcnew System::EventHandler(this, &Search::update_recitGrade_Enter);
			this->update_recitGrade->Leave += gcnew System::EventHandler(this, &Search::update_recitGrade_Leave);
			// 
			// update_attnGrade
			// 
			this->update_attnGrade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_attnGrade->ForeColor = System::Drawing::Color::Black;
			this->update_attnGrade->Location = System::Drawing::Point(4, 203);
			this->update_attnGrade->Margin = System::Windows::Forms::Padding(4);
			this->update_attnGrade->Name = L"update_attnGrade";
			this->update_attnGrade->Size = System::Drawing::Size(155, 32);
			this->update_attnGrade->TabIndex = 4;
			this->update_attnGrade->Text = L"0.00";
			this->update_attnGrade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->update_attnGrade->Enter += gcnew System::EventHandler(this, &Search::update_attnGrade_Enter);
			this->update_attnGrade->Leave += gcnew System::EventHandler(this, &Search::update_attnGrade_Leave);
			// 
			// update_subLbl
			// 
			this->update_subLbl->AutoSize = true;
			this->update_subLbl->BackColor = System::Drawing::Color::Transparent;
			this->update_subLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_subLbl->ForeColor = System::Drawing::Color::White;
			this->update_subLbl->Location = System::Drawing::Point(88, 240);
			this->update_subLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->update_subLbl->Name = L"update_subLbl";
			this->update_subLbl->Size = System::Drawing::Size(82, 23);
			this->update_subLbl->TabIndex = 47;
			this->update_subLbl->Text = L"Subject";
			// 
			// update_attnLbl
			// 
			this->update_attnLbl->AutoSize = true;
			this->update_attnLbl->BackColor = System::Drawing::Color::Transparent;
			this->update_attnLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_attnLbl->ForeColor = System::Drawing::Color::White;
			this->update_attnLbl->Location = System::Drawing::Point(88, 443);
			this->update_attnLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->update_attnLbl->Name = L"update_attnLbl";
			this->update_attnLbl->Size = System::Drawing::Size(130, 23);
			this->update_attnLbl->TabIndex = 46;
			this->update_attnLbl->Text = L"Attendance";
			// 
			// update_recitLbl
			// 
			this->update_recitLbl->AutoSize = true;
			this->update_recitLbl->BackColor = System::Drawing::Color::Transparent;
			this->update_recitLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_recitLbl->ForeColor = System::Drawing::Color::White;
			this->update_recitLbl->Location = System::Drawing::Point(88, 403);
			this->update_recitLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->update_recitLbl->Name = L"update_recitLbl";
			this->update_recitLbl->Size = System::Drawing::Size(107, 23);
			this->update_recitLbl->TabIndex = 45;
			this->update_recitLbl->Text = L"Recitation";
			// 
			// update_finalsLbl
			// 
			this->update_finalsLbl->AutoSize = true;
			this->update_finalsLbl->BackColor = System::Drawing::Color::Transparent;
			this->update_finalsLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_finalsLbl->ForeColor = System::Drawing::Color::White;
			this->update_finalsLbl->Location = System::Drawing::Point(88, 363);
			this->update_finalsLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->update_finalsLbl->Name = L"update_finalsLbl";
			this->update_finalsLbl->Size = System::Drawing::Size(62, 23);
			this->update_finalsLbl->TabIndex = 44;
			this->update_finalsLbl->Text = L"Finals";
			// 
			// update_midLbl
			// 
			this->update_midLbl->AutoSize = true;
			this->update_midLbl->BackColor = System::Drawing::Color::Transparent;
			this->update_midLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_midLbl->ForeColor = System::Drawing::Color::White;
			this->update_midLbl->Location = System::Drawing::Point(88, 322);
			this->update_midLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->update_midLbl->Name = L"update_midLbl";
			this->update_midLbl->Size = System::Drawing::Size(97, 23);
			this->update_midLbl->TabIndex = 43;
			this->update_midLbl->Text = L"Midterms";
			// 
			// update_actLbl
			// 
			this->update_actLbl->AutoSize = true;
			this->update_actLbl->BackColor = System::Drawing::Color::Transparent;
			this->update_actLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_actLbl->ForeColor = System::Drawing::Color::White;
			this->update_actLbl->Location = System::Drawing::Point(88, 282);
			this->update_actLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->update_actLbl->Name = L"update_actLbl";
			this->update_actLbl->Size = System::Drawing::Size(95, 23);
			this->update_actLbl->TabIndex = 42;
			this->update_actLbl->Text = L"Activities";
			// 
			// update_studentDataGrid
			// 
			this->update_studentDataGrid->AllowUserToAddRows = false;
			this->update_studentDataGrid->AllowUserToDeleteRows = false;
			this->update_studentDataGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->update_studentDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->update_studentDataGrid->Location = System::Drawing::Point(421, 205);
			this->update_studentDataGrid->Margin = System::Windows::Forms::Padding(4);
			this->update_studentDataGrid->Name = L"update_studentDataGrid";
			this->update_studentDataGrid->ReadOnly = true;
			this->update_studentDataGrid->RowHeadersWidth = 51;
			this->update_studentDataGrid->Size = System::Drawing::Size(595, 249);
			this->update_studentDataGrid->TabIndex = 48;
			// 
			// update_backBtn
			// 
			this->update_backBtn->BackColor = System::Drawing::Color::Firebrick;
			this->update_backBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->update_backBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->update_backBtn->ForeColor = System::Drawing::Color::White;
			this->update_backBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update_backBtn.Image")));
			this->update_backBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->update_backBtn->Location = System::Drawing::Point(-1, -1);
			this->update_backBtn->Margin = System::Windows::Forms::Padding(4);
			this->update_backBtn->Name = L"update_backBtn";
			this->update_backBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->update_backBtn->Size = System::Drawing::Size(130, 49);
			this->update_backBtn->TabIndex = 28;
			this->update_backBtn->Text = L" Back";
			this->update_backBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->update_backBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->update_backBtn->UseVisualStyleBackColor = false;
			this->update_backBtn->Click += gcnew System::EventHandler(this, &Search::update_backBtn_Click);
			// 
			// update_dividerLbl
			// 
			this->update_dividerLbl->BackColor = System::Drawing::Color::Transparent;
			this->update_dividerLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_dividerLbl->ForeColor = System::Drawing::Color::White;
			this->update_dividerLbl->Location = System::Drawing::Point(-15, 49);
			this->update_dividerLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->update_dividerLbl->Name = L"update_dividerLbl";
			this->update_dividerLbl->Size = System::Drawing::Size(1067, 36);
			this->update_dividerLbl->TabIndex = 36;
			this->update_dividerLbl->Text = L"_____________";
			this->update_dividerLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// update_TitleLbl
			// 
			this->update_TitleLbl->AutoSize = true;
			this->update_TitleLbl->BackColor = System::Drawing::Color::Transparent;
			this->update_TitleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->update_TitleLbl->ForeColor = System::Drawing::Color::White;
			this->update_TitleLbl->Location = System::Drawing::Point(357, 17);
			this->update_TitleLbl->Name = L"update_TitleLbl";
			this->update_TitleLbl->Size = System::Drawing::Size(329, 32);
			this->update_TitleLbl->TabIndex = 35;
			this->update_TitleLbl->Text = L"Update Student Details";
			// 
			// update_saveBtn
			// 
			this->update_saveBtn->BackColor = System::Drawing::Color::Firebrick;
			this->update_saveBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->update_saveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->update_saveBtn->ForeColor = System::Drawing::Color::White;
			this->update_saveBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"update_saveBtn.Image")));
			this->update_saveBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->update_saveBtn->Location = System::Drawing::Point(914, 462);
			this->update_saveBtn->Margin = System::Windows::Forms::Padding(4);
			this->update_saveBtn->Name = L"update_saveBtn";
			this->update_saveBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->update_saveBtn->Size = System::Drawing::Size(130, 49);
			this->update_saveBtn->TabIndex = 30;
			this->update_saveBtn->Text = L" Save";
			this->update_saveBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->update_saveBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->update_saveBtn->UseVisualStyleBackColor = false;
			this->update_saveBtn->Visible = false;
			this->update_saveBtn->Click += gcnew System::EventHandler(this, &Search::update_saveBtn_Click);
			// 
			// Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1232, 753);
			this->Controls->Add(this->search_UpdatePnl);
			this->Controls->Add(this->search_SearchPnl);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Search";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"School Management System";
			this->search_nameFlwPnl->ResumeLayout(false);
			this->search_nameFlwPnl->PerformLayout();
			this->search_idFlwPnl->ResumeLayout(false);
			this->search_idFlwPnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->search_studentDataGrid))->EndInit();
			this->search_btnFlwPnl->ResumeLayout(false);
			this->search_SearchPnl->ResumeLayout(false);
			this->search_SearchPnl->PerformLayout();
			this->search_UpdatePnl->ResumeLayout(false);
			this->search_UpdatePnl->PerformLayout();
			this->update_nameFlwPnl->ResumeLayout(false);
			this->update_nameFlwPnl->PerformLayout();
			this->update_idFlwPnl->ResumeLayout(false);
			this->update_idFlwPnl->PerformLayout();
			this->update_gradesFlwPnl->ResumeLayout(false);
			this->update_gradesFlwPnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->update_studentDataGrid))->EndInit();
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
		this->search_id2Txt->Text = "••••••";
		this->search_id2Txt->ForeColor = System::Drawing::Color::Silver;
	}
	private: System::Void resetUpdateFields() {
		this->update_fnameTxt->ForeColor = System::Drawing::Color::Black;
		this->update_mnameTxt->ForeColor = System::Drawing::Color::Black;
		this->update_lnameTxt->ForeColor = System::Drawing::Color::Black;
		this->update_id1Txt->ForeColor = System::Drawing::Color::Black;
		this->update_id2Txt->ForeColor = System::Drawing::Color::Black;
		this->update_saveBtn->Visible = false;
		this->update_deleteBtn->Visible = false;
	}
	private: System::Boolean isAllFieldsEmpty() {
		if (!this->search_fnameTxt->Text->Equals("First Name")) return false;
		if (!this->search_mnameTxt->Text->Equals("Middle Name")) return false;
		if (!this->search_lnameTxt->Text->Equals("Last Name")) return false;

		if (!this->search_id1Txt->Text->Equals("•••") && !this->search_id1Txt->Text->Equals("••••••"))
			return false;

		return true;
	}
	private: System::Boolean checkEmpty() {
		if (!this->update_fnameTxt->Text->Equals("First Name")) return false;
		if (!this->update_mnameTxt->Text->Equals("Middle Name")) return false;
		if (!this->update_lnameTxt->Text->Equals("Last Name")) return false;
		if (!this->update_id1Txt->Text->Equals("•••")) return false;
		if (!this->update_id2Txt->Text->Equals("••••••")) return false;

		return true;
	}
	private: System::Void transferDataToUpdate(String^ id) {
		String^ connString = "Server=localhost;database='group3_schooldb';username='root';password=''";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);

		conn->Open();
		String^ adpString = "SELECT * FROM students_table WHERE ID_NUMBER='" + id + "'";
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(adpString, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		this->update_studentDataGrid->DataSource = dt;

		this->update_fnameTxt->Text = update_studentDataGrid->Rows[0]->Cells[2]->Value->ToString();
		this->update_mnameTxt->Text = update_studentDataGrid->Rows[0]->Cells[3]->Value->ToString();
		this->update_lnameTxt->Text = update_studentDataGrid->Rows[0]->Cells[4]->Value->ToString();
		this->update_id1Txt->Text = this->search_id1Txt->Text;
		this->update_id2Txt->Text = this->search_id2Txt->Text;
		this->update_actGrade->Text = "0.00";
		this->update_midGrade->Text = "0.00";
		this->update_finalsGrade->Text = "0.00";
		this->update_recitGrade->Text = "0.00";
		this->update_attnGrade->Text = "0.00";

		adpString = "SELECT SUBJECT_CODE,ACTIVITIES,MIDTERMS,FINALS,RECITATION,ATTENDANCE FROM records_table WHERE ID_NUMBER='" + id + "'";
		adapter = gcnew MySqlDataAdapter(adpString, conn);
		dt = gcnew DataTable();
		adapter->Fill(dt);
		this->update_studentDataGrid->DataSource = dt;

		conn->Close();
	}
	private: System::Boolean isUserExist() {
		String^ connString = "Server=localhost;database='group3_schooldb';username='root';password=''";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);
		String^ whereSQL = "";

		String^ name = "";
		String^ id = this->search_id1Txt->Text + "-" + this->search_id2Txt->Text;

		if (!this->search_fnameTxt->Text->Equals("First Name")) {
			name += this->search_fnameTxt->Text;
		}
		if (!this->search_mnameTxt->Text->Equals("Middle Name")) {
			name += " " + this->search_mnameTxt->Text;
		}
		if (!this->search_lnameTxt->Text->Equals("Last Name")) {
			name += " " + this->search_lnameTxt->Text;
		}

		whereSQL += "FULL_NAME LIKE '%" + name + "%'";

		if (!this->search_id1Txt->Text->Equals("•••") && !this->search_id2Txt->Text->Equals("••••••")) {
			whereSQL += "AND ID_NUMBER LIKE '%" + id + "%'";
		}

		conn->Open();
		String^ adpString = "SELECT * FROM records_table WHERE " + whereSQL + "";
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(adpString, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		if (dt->Rows->Count == 0) {	return false; }
		else {
			this->search_studentDataGrid->DataSource = dt;
			conn->Close();
		}

		return true;
	}
	private: System::String^ printUpdate() {
		String^ name = "";

		if (this->update_mnameTxt->Text->Equals("Middle Name"))
			name = "[NAME] " + this->update_fnameTxt->Text + " " + this->update_lnameTxt->Text;
		else
			name = "[NAME] " + this->update_fnameTxt->Text + " " + this->update_mnameTxt->Text + " " +
			this->update_lnameTxt->Text;

		String^ id = "\n[ID] " + this->update_id1Txt->Text + "-" + this->update_id2Txt->Text;
		String^ grades = "\n[GRADES]\n\tSubject: " + this->update_subCbx->Text + "\n\tActivities: " +
			this->update_actGrade->Text + "\n\tMidterms: " + this->update_midGrade->Text + "\n\tFinals: " +
			this->update_finalsGrade->Text + "\n\tRecitation: " + this->update_recitGrade->Text +
			"\n\tAttendance: " + this->update_attnGrade->Text;
		String^ newstudent = "Is the following data correct?\n\n" + name + id + grades;

		return newstudent;
	}
	private: System::Double getGWA(Double average) {
		if (average >= 97) return 1.00;
		else if (average >= 94) return 1.25;
		else if (average >= 91) return 1.50;
		else if (average >= 88) return 1.75;
		else if (average >= 85) return 2.00;
		else if (average >= 82) return 2.25;
		else if (average >= 79) return 2.50;
		else if (average >= 76) return 2.75;
		else if (average == 75) return 3.00;
		else return 5.00;
	}

	private: System::Double computeAverage() {
		return (Double::Parse(this->update_actGrade->Text) + Double::Parse(this->update_midGrade->Text) +
			Double::Parse(this->update_finalsGrade->Text) + Double::Parse(this->update_recitGrade->Text) +
			Double::Parse(this->update_attnGrade->Text)) / 5;
	}
	private: System::Void updateRecord() {
		String^ connString = "Server=localhost;database='group3_schooldb';username='root';password=''";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);

		String^ id = this->update_id1Txt->Text + "-" + this->update_id2Txt->Text;
		String^ name = "";

		if (this->update_mnameTxt->Text->Equals("Middle Name"))
			name = this->update_fnameTxt->Text + " " + this->update_lnameTxt->Text;
		else
			name = this->update_fnameTxt->Text + " " + this->update_mnameTxt->Text + " " +
			this->update_lnameTxt->Text;

		conn->Open();
		String^ adpString = "SELECT * FROM records_table WHERE ID_NUMBER ='" + id + "' AND " +
			"SUBJECT_CODE='" + this->update_subCbx->Text + "'";
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(adpString, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		if (dt->Rows->Count == 0) {
			MessageBox::Show("No Record for this Subject Code", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			if (MessageBox::Show(printUpdate(), "Confirm", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ cmdString = "UPDATE records_table SET ID_NUMBER ='" + id + "',FULL_NAME='" + name +
					"',ACTIVITIES='" + this->update_actGrade->Text + "',MIDTERMS='" + this->update_midGrade->Text +
					"',FINALS='" + this->update_finalsGrade->Text + "',RECITATION='" + this->update_recitGrade->Text +
					"',ATTENDANCE='" + this->update_attnGrade->Text + "',AVERAGE='" + computeAverage() +
					"',GWA='" + getGWA(computeAverage()) + "' WHERE ID_NUMBER='" + id + "' AND " +
					"SUBJECT_CODE='" + this->update_subCbx->Text + "'";
				MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

				try {
					cmd->ExecuteNonQuery();
					MessageBox::Show("Existing Subject Record Updated Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ e) { MessageBox::Show("Failed to UPDATE record", "SQL Error", MessageBoxButtons::OK, MessageBoxIcon::Error); }

				//adpString = "SELECT * FROM students_table WHERE ID_NUMBER ='" + id + "'";
				//adapter = gcnew MySqlDataAdapter(adpString, conn);
				//dt = gcnew DataTable();
				//adapter->Fill(dt);
				//update_studentDataGrid->DataSource = dt;

				//cmdString = "UPDATE students_table SET ID_NUMBER='" + id + "',FIRST NAME='" +
				//	update_studentDataGrid->Rows[0]->Cells[2]->Value->ToString() + "',MIDDLE_NAME='" + 
				//	update_studentDataGrid->Rows[0]->Cells[3]->Value->ToString() + "',LAST_NAME='" + 
				//	update_studentDataGrid->Rows[0]->Cells[4]->Value->ToString() + "'  WHERE ID_NUMBER='" + 
				//	update_studentDataGrid->Rows[0]->Cells[1]->Value->ToString() + "'";
				//cmd = gcnew MySqlCommand(cmdString, conn);

				//try {
				//	cmd->ExecuteNonQuery();
				//	MessageBox::Show("Existing Student Record Updated Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				//}
				//catch (Exception^ e) { MessageBox::Show(e->ToString()); /*MessageBox::Show("Failed to UPDATE student record", "SQL Error", MessageBoxButtons::OK, MessageBoxIcon::Error);*/ }

				adpString = "SELECT * FROM records_table";
				adapter = gcnew MySqlDataAdapter(adpString, conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				search_studentDataGrid->DataSource = dt;

				conn->Close();
				resetUpdateFields();
				search_SearchPnl->Visible = true;
				search_UpdatePnl->Visible = false;
			}
		}
	}
	private: System::Void deleteStudent() {
		String^ connString = "Server=localhost;database='group3_schooldb';username='root';password=''";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);

		String^ id = this->search_id1Txt->Text + "-" + this->search_id2Txt->Text;

		conn->Open();
		String^ adpString = "SELECT * FROM records_table WHERE ID_NUMBER ='" + id +"'";
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(adpString, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		if (dt->Rows->Count == 0) {
			MessageBox::Show("Enter Valid/Complete ID Number to Delete Student and Existing Records", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		} else {
			String^ info = "Yes to Proceed Deletion of Student with [ID] " + id;

			if (MessageBox::Show(info, "Confirm", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ cmdString = "DELETE FROM records_table WHERE ID_NUMBER='" + id + "'";
				MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

				try {
					cmd->ExecuteNonQuery();
					MessageBox::Show("Existing Records Deleted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ e) { MessageBox::Show("Failed to DELETE records", "SQL Error", MessageBoxButtons::OK, MessageBoxIcon::Error); }
				conn->Close();

				conn->Open();
				cmdString = "DELETE FROM students_table WHERE ID_NUMBER='" + id + "'";
				cmd = gcnew MySqlCommand(cmdString, conn);

				try {
					cmd->ExecuteNonQuery();
					MessageBox::Show("Student Removed from System Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ e) { MessageBox::Show("Failed to DELETE student", "SQL Error", MessageBoxButtons::OK, MessageBoxIcon::Error); }
				adpString = "SELECT * FROM records_table";
				adapter = gcnew MySqlDataAdapter(adpString, conn);
				dt = gcnew DataTable();
				adapter->Fill(dt);
				this->search_studentDataGrid->DataSource = dt;
				
				conn->Close();

				this->search_clearBtn->Visible = false;
				this->search_updateBtn->Visible = false;
				this->search_deleteBtn->Visible = false;
				clearSearchFields();
			}
		}
	}
	private: System::Void deleteRecord() {
		String^ connString = "Server=localhost;database='group3_schooldb';username='root';password=''";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);

		String^ id = this->update_id1Txt->Text + "-" + this->update_id2Txt->Text;

		conn->Open();
		String^ adpString = "SELECT * FROM records_table WHERE ID_NUMBER ='" + id + "' AND " +
			"SUBJECT_CODE='" + this->update_subCbx->Text + "'";
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(adpString, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		if (dt->Rows->Count == 0) {
			MessageBox::Show("No Record for this Subject Code", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			String^ info = "Yes to Proceed Deletion of " + this->update_subCbx->Text +  " Record of Student [ID] " + id;

			if (MessageBox::Show(info, "Confirm", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				String^ cmdString = "DELETE FROM records_table WHERE ID_NUMBER='" + id + "' AND " +
					"SUBJECT_CODE='" + this->update_subCbx->Text + "'";
				MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

				try {
					cmd->ExecuteNonQuery();
					MessageBox::Show("Existing Subject Record Deleted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ e) { MessageBox::Show("Failed to DELETE record", "SQL Error", MessageBoxButtons::OK, MessageBoxIcon::Error); }

				adpString = "SELECT * FROM records_table";
				adapter = gcnew MySqlDataAdapter(adpString, conn);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				search_studentDataGrid->DataSource = dt;

				conn->Close();
				resetUpdateFields();
				search_SearchPnl->Visible = true;
				search_UpdatePnl->Visible = false;
			}
		}
	}

#pragma endregion

#pragma region UI Actions
	// Search Panel
	public: bool searchBackToHome = false;
	private: System::Void search_backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->searchBackToHome = true;
	}
	private: System::Void search_searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isAllFieldsEmpty())
			if (this->search_id1Txt->Text->Equals("•••") && !this->search_id2Txt->Text->Equals("••••••"))
				MessageBox::Show("Invalid ID Number", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			else
				MessageBox::Show("Fields are empty", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else {
			if (!this->search_id1Txt->Text->Equals("•••") && this->search_id2Txt->Text->Equals("••••••"))
				MessageBox::Show("Invalid ID Number", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			else if (isUserExist()) {
				this->search_updateBtn->Visible = true;
				this->search_clearBtn->Visible = true;
				this->search_deleteBtn->Visible = true;
			} else {
				MessageBox::Show("Record does not exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				clearSearchFields();
			}
		}
	}
	private: System::Void search_clearBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		clearSearchFields();
		this->search_clearBtn->Visible = false;
		this->search_updateBtn->Visible = false;
		this->search_deleteBtn->Visible = false;
	}
	private: System::Void search_updateBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = "Server=localhost;database='group3_schooldb';username='root';password=''";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);

		String^ id = this->search_id1Txt->Text + "-" + this->search_id2Txt->Text;

		conn->Open();
		String^ adpString = "SELECT * FROM records_table WHERE ID_NUMBER ='" + id + "'";
		MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(adpString, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		if (dt->Rows->Count == 0) {
			MessageBox::Show("Enter Valid/Complete ID Number to Update Student Records", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		} else {
			transferDataToUpdate(id);
			clearSearchFields();
			this->search_SearchPnl->Visible = false;
			this->search_clearBtn->Visible = false;
			this->search_updateBtn->Visible = false;
			this->search_deleteBtn->Visible = false;
			this->search_UpdatePnl->Visible = true;
		}
	}
	private: System::Void search_deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteStudent();
	}
	// Update Panel
	private: System::Void update_backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->search_UpdatePnl->Visible = false;
		this->search_SearchPnl->Visible = true;
		this->search_deleteBtn->Visible = false;
		resetUpdateFields();
	}
	private: System::Void update_saveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkEmpty()) {
			MessageBox::Show("A Field is Empty", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		} else {
			updateRecord();
			this->search_UpdatePnl->Visible = false;
			this->search_SearchPnl->Visible = true;
			resetUpdateFields();
		}
	}
	private: System::Void update_subCbx_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->update_saveBtn->Visible = true;
		this->update_deleteBtn->Visible = true;
	}
	private: System::Void update_deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteRecord();
	}
#pragma endregion

#pragma region Textbox UI
	// Search Panel
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
			this->search_updateBtn->Visible = false;
		}
	}
	private: System::Void search_mnameTxt_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->search_mnameTxt->Text->Equals("Middle Name")) {
			this->search_mnameTxt->ForeColor = System::Drawing::Color::Black;
			this->search_mnameTxt->Text = "";
		}
	}
	private: System::Void search_mnameTxt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->search_mnameTxt->Text->Equals("")) {
			this->search_mnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->search_mnameTxt->Text = "Middle Name";
			this->search_clearBtn->Visible = false;
			this->search_updateBtn->Visible = false;
		}
	}
	private: System::Void search_lnameTxt_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->search_lnameTxt->Text->Equals("Last Name")) {
			this->search_lnameTxt->ForeColor = System::Drawing::Color::Black;
			this->search_lnameTxt->Text = "";
		}
	}
	private: System::Void search_lnameTxt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->search_lnameTxt->Text->Equals("")) {
			this->search_lnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->search_lnameTxt->Text = "Last Name";
			this->search_clearBtn->Visible = false;
			this->search_updateBtn->Visible = false;
		}
	}
	private: System::Void search_id1Txt_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->search_id1Txt->Text->Equals("•••")) {
			this->search_id1Txt->ForeColor = System::Drawing::Color::Black;
			this->search_id1Txt->Text = "";
		}
	}
	private: System::Void search_id1Txt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->search_id1Txt->Text->Equals("")) {
			this->search_id1Txt->ForeColor = System::Drawing::Color::Silver;
			this->search_id1Txt->Text = "•••";
			this->search_clearBtn->Visible = false;
			this->search_updateBtn->Visible = false;
		}
	}
	private: System::Void search_id2Txt_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->search_id2Txt->Text->Equals("••••••")) {
			this->search_id2Txt->ForeColor = System::Drawing::Color::Black;
			this->search_id2Txt->Text = "";
		}
	}
	private: System::Void search_id2Txt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->search_id2Txt->Text->Equals("")) {
			this->search_id2Txt->ForeColor = System::Drawing::Color::Silver;
			this->search_id2Txt->Text = "••••••";
			this->search_clearBtn->Visible = false;
			this->search_updateBtn->Visible = false;
		}
	}

	// Update Panel
	/*private: System::Void update_fnameTxt_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->update_fnameTxt->Text = "";
		this->update_fnameTxt->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void update_fnameTxt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->update_fnameTxt->Text->Equals("") || this->update_fnameTxt->Text->Equals("First Name")) {
			MessageBox::Show("Field Cannot be Empty", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_fnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->update_fnameTxt->Text = "First Name";
			this->update_saveBtn->Visible = false;
		} else update_saveBtn->Visible = true;
	}
	private: System::Void update_mnameTxt_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->update_mnameTxt->Text = "";
		this->update_mnameTxt->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void update_mnameTxt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->update_mnameTxt->Text->Equals("") || this->update_mnameTxt->Text->Equals("Middle Name")) {
			MessageBox::Show("Field Cannot be Empty", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_mnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->update_mnameTxt->Text = "Middle Name";
			this->update_saveBtn->Visible = false;
		} else update_saveBtn->Visible = true;
	}
	private: System::Void update_lnameTxt_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->update_lnameTxt->Text = "";
		this->update_lnameTxt->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void update_lnameTxt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->update_lnameTxt->Text->Equals("") || this->update_lnameTxt->Text->Equals("Last Name")) {
			MessageBox::Show("Field Cannot be Empty", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_lnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->update_lnameTxt->Text = "Last Name";
			this->update_saveBtn->Visible = false;
		} else update_saveBtn->Visible = true;
	}
	private: System::Void update_id1Txt_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->update_id1Txt->Text = "";
		this->update_id1Txt->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void update_id1Txt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->update_id1Txt->Text->Equals("") || this->update_id1Txt->Text->Equals("•••")) {
			MessageBox::Show("Field Cannot be Empty", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_id1Txt->ForeColor = System::Drawing::Color::Silver;
			this->update_id1Txt->Text = "•••";
			this->update_saveBtn->Visible = false;
		} else {
			if (!this->update_id2Txt->Text->Equals("••••••")) update_saveBtn->Visible = true;
		}
	}
	private: System::Void update_id2Txt_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->update_id2Txt->Text = "";
		this->update_id2Txt->ForeColor = System::Drawing::Color::Black;
	}
	private: System::Void update_id2Txt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->update_id2Txt->Text->Equals("") || this->update_id2Txt->Text->Equals("••••••")) {
			MessageBox::Show("Field Cannot be Empty", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_id2Txt->ForeColor = System::Drawing::Color::Silver;
			this->update_id2Txt->Text = "••••••";
			this->update_saveBtn->Visible = false;
		} else {
			if (!this->update_id1Txt->Text->Equals("•••")) update_saveBtn->Visible = true;
		}
	}*/
	private: System::Void update_actGrade_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->update_actGrade->Text = "";
	}
	private: System::Void update_actGrade_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->update_actGrade->Text->Equals("")) {
			MessageBox::Show("Field Cannot be Empty, Grade Defaulted to 0.00", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_actGrade->Text = "0.00";
		} else if (Int32::Parse(update_actGrade->Text) < 0) {
			MessageBox::Show("Grade Cannot be Negative, Grade Defaulted to 0.00", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_actGrade->Text = "0.00";
		}
	}
	private: System::Void update_midGrade_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->update_midGrade->Text = "";
	}
	private: System::Void update_midGrade_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->update_midGrade->Text->Equals("")) {
			MessageBox::Show("Field Cannot be Empty, Grade Defaulted to 0.00", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_midGrade->Text = "0.00";
		} else if (Int32::Parse(update_midGrade->Text) < 0) {
			MessageBox::Show("Grade Cannot be Negative, Grade Defaulted to 0.00", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_midGrade->Text = "0.00";
		}
	}
	private: System::Void update_finalsGrade_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->update_finalsGrade->Text = "";
	}
	private: System::Void update_finalsGrade_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->update_finalsGrade->Text->Equals("")) {
			MessageBox::Show("Field Cannot be Empty, Grade Defaulted to 0.00", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_finalsGrade->Text = "0.00";
		} else if (Int32::Parse(update_finalsGrade->Text) < 0) {
			MessageBox::Show("Grade Cannot be Negative, Grade Defaulted to 0.00", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_finalsGrade->Text = "0.00";
		}
	}
	private: System::Void update_recitGrade_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->update_recitGrade->Text = "";
	}
	private: System::Void update_recitGrade_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->update_recitGrade->Text->Equals("")) {
			MessageBox::Show("Field Cannot be Empty, Grade Defaulted to 0.00", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_recitGrade->Text = "0.00";
		} else if (Int32::Parse(update_recitGrade->Text) < 0) {
			MessageBox::Show("Grade Cannot be Negative, Grade Defaulted to 0.00", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_recitGrade->Text = "0.00";
		}
	}
	private: System::Void update_attnGrade_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->update_attnGrade->Text = "";
	}
	private: System::Void update_attnGrade_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->update_attnGrade->Text->Equals("")) {
			MessageBox::Show("Field Cannot be Empty, Grade Defaulted to 0.00", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_attnGrade->Text = "0.00";
		} else if (Int32::Parse(update_attnGrade->Text) < 0) {
			MessageBox::Show("Grade Cannot be Negative, Grade Defaulted to 0.00", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->update_attnGrade->Text = "0.00";
		}
	}

#pragma endregion

};
}
