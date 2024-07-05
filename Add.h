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
	/// Summary for Add
	/// </summary>
	public ref class Add : public System::Windows::Forms::Form
	{
	public:
		Add(void)
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
		~Add()
		{
			if (components)
			{
				delete components;
			}
		}
	// Buttons

	private: System::Windows::Forms::Button^ add_addBtn;
	
	// Name		
	private: System::Windows::Forms::Label^ add_nameLbl;
	private: System::Windows::Forms::FlowLayoutPanel^ add_nameFlwPnl;
	private: System::Windows::Forms::TextBox^ add_fnameTxt;
	private: System::Windows::Forms::TextBox^ add_mnameTxt;
	private: System::Windows::Forms::TextBox^ add_lnameTxt;
	
	// ID
	private: System::Windows::Forms::Label^ add_idLbl;
	private: System::Windows::Forms::FlowLayoutPanel^ add_idFlwPnl;
	private: System::Windows::Forms::TextBox^ add_id1Txt;
	private: System::Windows::Forms::Label^ add_idDashLbl;
	private: System::Windows::Forms::TextBox^ add_id2Txt;

	// Grades
	private: System::Windows::Forms::Label^ add_gradeLbl;
	private: System::Windows::Forms::FlowLayoutPanel^ add_gradesFlwPnl;
	private: System::Windows::Forms::Label^ add_subLbl;
	private: System::Windows::Forms::ComboBox^ add_subCbx;
	private: System::Windows::Forms::Label^ add_actLbl;
	private: System::Windows::Forms::TextBox^ add_actGrade;
	private: System::Windows::Forms::Label^ add_midLbl;
	private: System::Windows::Forms::TextBox^ add_midGrade;
	private: System::Windows::Forms::Label^ add_finalsLbl;
	private: System::Windows::Forms::TextBox^ add_finalsGrade;
	private: System::Windows::Forms::Label^ add_recitLbl;
	private: System::Windows::Forms::TextBox^ add_recitGrade;
	private: System::Windows::Forms::Label^ add_attnLbl;
	private: System::Windows::Forms::TextBox^ add_attnGrade;

	private: System::Windows::Forms::DataGridView^ add_studentsDataGrid;
	private: System::Windows::Forms::Label^ add_TitleLbl;
	private: System::Windows::Forms::Button^ add_backBtn;
	private: System::Windows::Forms::Label^ add_dividerLbl;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
#pragma endregion

#pragma region Design
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Add::typeid));
			this->add_addBtn = (gcnew System::Windows::Forms::Button());
			this->add_nameLbl = (gcnew System::Windows::Forms::Label());
			this->add_nameFlwPnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->add_fnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->add_mnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->add_lnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->add_idLbl = (gcnew System::Windows::Forms::Label());
			this->add_idFlwPnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->add_id1Txt = (gcnew System::Windows::Forms::TextBox());
			this->add_idDashLbl = (gcnew System::Windows::Forms::Label());
			this->add_id2Txt = (gcnew System::Windows::Forms::TextBox());
			this->add_gradeLbl = (gcnew System::Windows::Forms::Label());
			this->add_gradesFlwPnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->add_subCbx = (gcnew System::Windows::Forms::ComboBox());
			this->add_actGrade = (gcnew System::Windows::Forms::TextBox());
			this->add_midGrade = (gcnew System::Windows::Forms::TextBox());
			this->add_finalsGrade = (gcnew System::Windows::Forms::TextBox());
			this->add_recitGrade = (gcnew System::Windows::Forms::TextBox());
			this->add_attnGrade = (gcnew System::Windows::Forms::TextBox());
			this->add_subLbl = (gcnew System::Windows::Forms::Label());
			this->add_actLbl = (gcnew System::Windows::Forms::Label());
			this->add_midLbl = (gcnew System::Windows::Forms::Label());
			this->add_finalsLbl = (gcnew System::Windows::Forms::Label());
			this->add_recitLbl = (gcnew System::Windows::Forms::Label());
			this->add_attnLbl = (gcnew System::Windows::Forms::Label());
			this->add_studentsDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->add_TitleLbl = (gcnew System::Windows::Forms::Label());
			this->add_backBtn = (gcnew System::Windows::Forms::Button());
			this->add_dividerLbl = (gcnew System::Windows::Forms::Label());
			this->add_nameFlwPnl->SuspendLayout();
			this->add_idFlwPnl->SuspendLayout();
			this->add_gradesFlwPnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_studentsDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// add_addBtn
			// 
			this->add_addBtn->BackColor = System::Drawing::Color::Firebrick;
			this->add_addBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->add_addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->add_addBtn->ForeColor = System::Drawing::Color::White;
			this->add_addBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_addBtn.Image")));
			this->add_addBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->add_addBtn->Location = System::Drawing::Point(1006, 614);
			this->add_addBtn->Margin = System::Windows::Forms::Padding(4);
			this->add_addBtn->Name = L"add_addBtn";
			this->add_addBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->add_addBtn->Size = System::Drawing::Size(130, 49);
			this->add_addBtn->TabIndex = 12;
			this->add_addBtn->Text = L" Add";
			this->add_addBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->add_addBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->add_addBtn->UseVisualStyleBackColor = false;
			this->add_addBtn->Click += gcnew System::EventHandler(this, &Add::add_addBtn_Click);
			// 
			// add_nameLbl
			// 
			this->add_nameLbl->AutoSize = true;
			this->add_nameLbl->BackColor = System::Drawing::Color::Transparent;
			this->add_nameLbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_nameLbl->ForeColor = System::Drawing::Color::White;
			this->add_nameLbl->Location = System::Drawing::Point(164, 261);
			this->add_nameLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_nameLbl->Name = L"add_nameLbl";
			this->add_nameLbl->Size = System::Drawing::Size(75, 28);
			this->add_nameLbl->TabIndex = 9;
			this->add_nameLbl->Text = L"NAME";
			this->add_nameLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// add_nameFlwPnl
			// 
			this->add_nameFlwPnl->BackColor = System::Drawing::Color::Transparent;
			this->add_nameFlwPnl->Controls->Add(this->add_fnameTxt);
			this->add_nameFlwPnl->Controls->Add(this->add_mnameTxt);
			this->add_nameFlwPnl->Controls->Add(this->add_lnameTxt);
			this->add_nameFlwPnl->Location = System::Drawing::Point(312, 257);
			this->add_nameFlwPnl->Margin = System::Windows::Forms::Padding(4);
			this->add_nameFlwPnl->Name = L"add_nameFlwPnl";
			this->add_nameFlwPnl->Size = System::Drawing::Size(751, 42);
			this->add_nameFlwPnl->TabIndex = 14;
			// 
			// add_fnameTxt
			// 
			this->add_fnameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_fnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->add_fnameTxt->Location = System::Drawing::Point(4, 4);
			this->add_fnameTxt->Margin = System::Windows::Forms::Padding(4);
			this->add_fnameTxt->Name = L"add_fnameTxt";
			this->add_fnameTxt->Size = System::Drawing::Size(240, 32);
			this->add_fnameTxt->TabIndex = 8;
			this->add_fnameTxt->Text = L"First Name";
			this->add_fnameTxt->Enter += gcnew System::EventHandler(this, &Add::add_fnameTxt_Enter);
			this->add_fnameTxt->Leave += gcnew System::EventHandler(this, &Add::add_fnameTxt_Leave);
			// 
			// add_mnameTxt
			// 
			this->add_mnameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_mnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->add_mnameTxt->Location = System::Drawing::Point(252, 4);
			this->add_mnameTxt->Margin = System::Windows::Forms::Padding(4);
			this->add_mnameTxt->Name = L"add_mnameTxt";
			this->add_mnameTxt->Size = System::Drawing::Size(240, 32);
			this->add_mnameTxt->TabIndex = 10;
			this->add_mnameTxt->Text = L"Middle Name";
			this->add_mnameTxt->Enter += gcnew System::EventHandler(this, &Add::add_mnameTxt_Enter);
			this->add_mnameTxt->Leave += gcnew System::EventHandler(this, &Add::add_mnameTxt_Leave);
			// 
			// add_lnameTxt
			// 
			this->add_lnameTxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_lnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->add_lnameTxt->Location = System::Drawing::Point(500, 4);
			this->add_lnameTxt->Margin = System::Windows::Forms::Padding(4);
			this->add_lnameTxt->Name = L"add_lnameTxt";
			this->add_lnameTxt->Size = System::Drawing::Size(240, 32);
			this->add_lnameTxt->TabIndex = 11;
			this->add_lnameTxt->Text = L"Last Name";
			this->add_lnameTxt->Enter += gcnew System::EventHandler(this, &Add::add_lnameTxt_Enter);
			this->add_lnameTxt->Leave += gcnew System::EventHandler(this, &Add::add_lnameTxt_Leave);
			// 
			// add_idLbl
			// 
			this->add_idLbl->AutoSize = true;
			this->add_idLbl->BackColor = System::Drawing::Color::Transparent;
			this->add_idLbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_idLbl->ForeColor = System::Drawing::Color::White;
			this->add_idLbl->Location = System::Drawing::Point(164, 310);
			this->add_idLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_idLbl->Name = L"add_idLbl";
			this->add_idLbl->Size = System::Drawing::Size(132, 28);
			this->add_idLbl->TabIndex = 25;
			this->add_idLbl->Text = L"ID NUMBER";
			this->add_idLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// add_idFlwPnl
			// 
			this->add_idFlwPnl->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->add_idFlwPnl->BackColor = System::Drawing::Color::Transparent;
			this->add_idFlwPnl->Controls->Add(this->add_id1Txt);
			this->add_idFlwPnl->Controls->Add(this->add_idDashLbl);
			this->add_idFlwPnl->Controls->Add(this->add_id2Txt);
			this->add_idFlwPnl->Location = System::Drawing::Point(312, 307);
			this->add_idFlwPnl->Margin = System::Windows::Forms::Padding(4);
			this->add_idFlwPnl->Name = L"add_idFlwPnl";
			this->add_idFlwPnl->Size = System::Drawing::Size(204, 42);
			this->add_idFlwPnl->TabIndex = 15;
			// 
			// add_id1Txt
			// 
			this->add_id1Txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_id1Txt->ForeColor = System::Drawing::Color::Silver;
			this->add_id1Txt->Location = System::Drawing::Point(4, 4);
			this->add_id1Txt->Margin = System::Windows::Forms::Padding(4);
			this->add_id1Txt->Name = L"add_id1Txt";
			this->add_id1Txt->Size = System::Drawing::Size(52, 32);
			this->add_id1Txt->TabIndex = 6;
			this->add_id1Txt->Text = L"•••";
			this->add_id1Txt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->add_id1Txt->Enter += gcnew System::EventHandler(this, &Add::add_id1Txt_Enter);
			this->add_id1Txt->Leave += gcnew System::EventHandler(this, &Add::add_id1Txt_Leave);
			// 
			// add_idDashLbl
			// 
			this->add_idDashLbl->AutoSize = true;
			this->add_idDashLbl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add_idDashLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_idDashLbl->ForeColor = System::Drawing::Color::White;
			this->add_idDashLbl->Location = System::Drawing::Point(64, 0);
			this->add_idDashLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_idDashLbl->Name = L"add_idDashLbl";
			this->add_idDashLbl->Size = System::Drawing::Size(18, 40);
			this->add_idDashLbl->TabIndex = 26;
			this->add_idDashLbl->Text = L"-";
			this->add_idDashLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// add_id2Txt
			// 
			this->add_id2Txt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_id2Txt->ForeColor = System::Drawing::Color::Silver;
			this->add_id2Txt->Location = System::Drawing::Point(90, 4);
			this->add_id2Txt->Margin = System::Windows::Forms::Padding(4);
			this->add_id2Txt->Name = L"add_id2Txt";
			this->add_id2Txt->Size = System::Drawing::Size(104, 32);
			this->add_id2Txt->TabIndex = 27;
			this->add_id2Txt->Text = L"••••••";
			this->add_id2Txt->Enter += gcnew System::EventHandler(this, &Add::add_id2Txt_Enter);
			this->add_id2Txt->Leave += gcnew System::EventHandler(this, &Add::add_id2Txt_Leave);
			// 
			// add_gradeLbl
			// 
			this->add_gradeLbl->AutoSize = true;
			this->add_gradeLbl->BackColor = System::Drawing::Color::Transparent;
			this->add_gradeLbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_gradeLbl->ForeColor = System::Drawing::Color::White;
			this->add_gradeLbl->Location = System::Drawing::Point(162, 353);
			this->add_gradeLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_gradeLbl->Name = L"add_gradeLbl";
			this->add_gradeLbl->Size = System::Drawing::Size(99, 28);
			this->add_gradeLbl->TabIndex = 16;
			this->add_gradeLbl->Text = L"GRADES";
			this->add_gradeLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// add_gradesFlwPnl
			// 
			this->add_gradesFlwPnl->BackColor = System::Drawing::Color::Transparent;
			this->add_gradesFlwPnl->Controls->Add(this->add_subCbx);
			this->add_gradesFlwPnl->Controls->Add(this->add_actGrade);
			this->add_gradesFlwPnl->Controls->Add(this->add_midGrade);
			this->add_gradesFlwPnl->Controls->Add(this->add_finalsGrade);
			this->add_gradesFlwPnl->Controls->Add(this->add_recitGrade);
			this->add_gradesFlwPnl->Controls->Add(this->add_attnGrade);
			this->add_gradesFlwPnl->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->add_gradesFlwPnl->Location = System::Drawing::Point(333, 391);
			this->add_gradesFlwPnl->Margin = System::Windows::Forms::Padding(4);
			this->add_gradesFlwPnl->Name = L"add_gradesFlwPnl";
			this->add_gradesFlwPnl->Size = System::Drawing::Size(170, 272);
			this->add_gradesFlwPnl->TabIndex = 17;
			// 
			// add_subCbx
			// 
			this->add_subCbx->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->add_subCbx->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->add_subCbx->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_subCbx->FormattingEnabled = true;
			this->add_subCbx->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"DBMGTLAB", L"DBMGTLEC", L"DISSTRU1", L"GEFILDIS",
					L"GEPANPI", L"GEPEFITE", L"GEPURPCO", L"IPROGLAB", L"IPROGLEC", L"REMMCRAT"
			});
			this->add_subCbx->Location = System::Drawing::Point(4, 4);
			this->add_subCbx->Margin = System::Windows::Forms::Padding(4);
			this->add_subCbx->Name = L"add_subCbx";
			this->add_subCbx->Size = System::Drawing::Size(155, 31);
			this->add_subCbx->Sorted = true;
			this->add_subCbx->TabIndex = 5;
			// 
			// add_actGrade
			// 
			this->add_actGrade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_actGrade->ForeColor = System::Drawing::Color::Silver;
			this->add_actGrade->Location = System::Drawing::Point(4, 43);
			this->add_actGrade->Margin = System::Windows::Forms::Padding(4);
			this->add_actGrade->Name = L"add_actGrade";
			this->add_actGrade->Size = System::Drawing::Size(155, 32);
			this->add_actGrade->TabIndex = 3;
			this->add_actGrade->Text = L"0.00";
			this->add_actGrade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->add_actGrade->Enter += gcnew System::EventHandler(this, &Add::add_actGrade_Enter);
			this->add_actGrade->Leave += gcnew System::EventHandler(this, &Add::add_actGrade_Leave);
			// 
			// add_midGrade
			// 
			this->add_midGrade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_midGrade->ForeColor = System::Drawing::Color::Silver;
			this->add_midGrade->Location = System::Drawing::Point(4, 83);
			this->add_midGrade->Margin = System::Windows::Forms::Padding(4);
			this->add_midGrade->Name = L"add_midGrade";
			this->add_midGrade->Size = System::Drawing::Size(155, 32);
			this->add_midGrade->TabIndex = 0;
			this->add_midGrade->Text = L"0.00";
			this->add_midGrade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->add_midGrade->Enter += gcnew System::EventHandler(this, &Add::add_midGrade_Enter);
			this->add_midGrade->Leave += gcnew System::EventHandler(this, &Add::add_midGrade_Leave);
			// 
			// add_finalsGrade
			// 
			this->add_finalsGrade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_finalsGrade->ForeColor = System::Drawing::Color::Silver;
			this->add_finalsGrade->Location = System::Drawing::Point(4, 123);
			this->add_finalsGrade->Margin = System::Windows::Forms::Padding(4);
			this->add_finalsGrade->Name = L"add_finalsGrade";
			this->add_finalsGrade->Size = System::Drawing::Size(155, 32);
			this->add_finalsGrade->TabIndex = 1;
			this->add_finalsGrade->Text = L"0.00";
			this->add_finalsGrade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->add_finalsGrade->Enter += gcnew System::EventHandler(this, &Add::add_finalsGrade_Enter);
			this->add_finalsGrade->Leave += gcnew System::EventHandler(this, &Add::add_finalsGrade_Leave);
			// 
			// add_recitGrade
			// 
			this->add_recitGrade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_recitGrade->ForeColor = System::Drawing::Color::Silver;
			this->add_recitGrade->Location = System::Drawing::Point(4, 163);
			this->add_recitGrade->Margin = System::Windows::Forms::Padding(4);
			this->add_recitGrade->Name = L"add_recitGrade";
			this->add_recitGrade->Size = System::Drawing::Size(155, 32);
			this->add_recitGrade->TabIndex = 2;
			this->add_recitGrade->Text = L"0.00";
			this->add_recitGrade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->add_recitGrade->Enter += gcnew System::EventHandler(this, &Add::add_recitGrade_Enter);
			this->add_recitGrade->Leave += gcnew System::EventHandler(this, &Add::add_recitGrade_Leave);
			// 
			// add_attnGrade
			// 
			this->add_attnGrade->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_attnGrade->ForeColor = System::Drawing::Color::Silver;
			this->add_attnGrade->Location = System::Drawing::Point(4, 203);
			this->add_attnGrade->Margin = System::Windows::Forms::Padding(4);
			this->add_attnGrade->Name = L"add_attnGrade";
			this->add_attnGrade->Size = System::Drawing::Size(155, 32);
			this->add_attnGrade->TabIndex = 4;
			this->add_attnGrade->Text = L"0.00";
			this->add_attnGrade->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->add_attnGrade->Enter += gcnew System::EventHandler(this, &Add::add_attnGrade_Enter);
			this->add_attnGrade->Leave += gcnew System::EventHandler(this, &Add::add_attnGrade_Leave);
			// 
			// add_subLbl
			// 
			this->add_subLbl->AutoSize = true;
			this->add_subLbl->BackColor = System::Drawing::Color::Transparent;
			this->add_subLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_subLbl->ForeColor = System::Drawing::Color::White;
			this->add_subLbl->Location = System::Drawing::Point(183, 400);
			this->add_subLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_subLbl->Name = L"add_subLbl";
			this->add_subLbl->Size = System::Drawing::Size(82, 23);
			this->add_subLbl->TabIndex = 23;
			this->add_subLbl->Text = L"Subject";
			// 
			// add_actLbl
			// 
			this->add_actLbl->AutoSize = true;
			this->add_actLbl->BackColor = System::Drawing::Color::Transparent;
			this->add_actLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_actLbl->ForeColor = System::Drawing::Color::White;
			this->add_actLbl->Location = System::Drawing::Point(183, 442);
			this->add_actLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_actLbl->Name = L"add_actLbl";
			this->add_actLbl->Size = System::Drawing::Size(95, 23);
			this->add_actLbl->TabIndex = 18;
			this->add_actLbl->Text = L"Activities";
			// 
			// add_midLbl
			// 
			this->add_midLbl->AutoSize = true;
			this->add_midLbl->BackColor = System::Drawing::Color::Transparent;
			this->add_midLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_midLbl->ForeColor = System::Drawing::Color::White;
			this->add_midLbl->Location = System::Drawing::Point(183, 482);
			this->add_midLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_midLbl->Name = L"add_midLbl";
			this->add_midLbl->Size = System::Drawing::Size(97, 23);
			this->add_midLbl->TabIndex = 19;
			this->add_midLbl->Text = L"Midterms";
			// 
			// add_finalsLbl
			// 
			this->add_finalsLbl->AutoSize = true;
			this->add_finalsLbl->BackColor = System::Drawing::Color::Transparent;
			this->add_finalsLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_finalsLbl->ForeColor = System::Drawing::Color::White;
			this->add_finalsLbl->Location = System::Drawing::Point(183, 523);
			this->add_finalsLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_finalsLbl->Name = L"add_finalsLbl";
			this->add_finalsLbl->Size = System::Drawing::Size(62, 23);
			this->add_finalsLbl->TabIndex = 20;
			this->add_finalsLbl->Text = L"Finals";
			// 
			// add_recitLbl
			// 
			this->add_recitLbl->AutoSize = true;
			this->add_recitLbl->BackColor = System::Drawing::Color::Transparent;
			this->add_recitLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_recitLbl->ForeColor = System::Drawing::Color::White;
			this->add_recitLbl->Location = System::Drawing::Point(183, 563);
			this->add_recitLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_recitLbl->Name = L"add_recitLbl";
			this->add_recitLbl->Size = System::Drawing::Size(107, 23);
			this->add_recitLbl->TabIndex = 21;
			this->add_recitLbl->Text = L"Recitation";
			// 
			// add_attnLbl
			// 
			this->add_attnLbl->AutoSize = true;
			this->add_attnLbl->BackColor = System::Drawing::Color::Transparent;
			this->add_attnLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_attnLbl->ForeColor = System::Drawing::Color::White;
			this->add_attnLbl->Location = System::Drawing::Point(183, 603);
			this->add_attnLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_attnLbl->Name = L"add_attnLbl";
			this->add_attnLbl->Size = System::Drawing::Size(130, 23);
			this->add_attnLbl->TabIndex = 22;
			this->add_attnLbl->Text = L"Attendance";
			// 
			// add_studentsDataGrid
			// 
			this->add_studentsDataGrid->AllowUserToAddRows = false;
			this->add_studentsDataGrid->AllowUserToDeleteRows = false;
			this->add_studentsDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->add_studentsDataGrid->Location = System::Drawing::Point(515, 365);
			this->add_studentsDataGrid->Margin = System::Windows::Forms::Padding(4);
			this->add_studentsDataGrid->Name = L"add_studentsDataGrid";
			this->add_studentsDataGrid->ReadOnly = true;
			this->add_studentsDataGrid->RowHeadersWidth = 51;
			this->add_studentsDataGrid->Size = System::Drawing::Size(476, 270);
			this->add_studentsDataGrid->TabIndex = 24;
			// 
			// add_TitleLbl
			// 
			this->add_TitleLbl->AutoSize = true;
			this->add_TitleLbl->BackColor = System::Drawing::Color::Transparent;
			this->add_TitleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
			this->add_TitleLbl->ForeColor = System::Drawing::Color::White;
			this->add_TitleLbl->Location = System::Drawing::Point(481, 169);
			this->add_TitleLbl->Name = L"add_TitleLbl";
			this->add_TitleLbl->Size = System::Drawing::Size(249, 32);
			this->add_TitleLbl->TabIndex = 26;
			this->add_TitleLbl->Text = L"Add New Student";
			// 
			// add_backBtn
			// 
			this->add_backBtn->BackColor = System::Drawing::Color::Firebrick;
			this->add_backBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->add_backBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->add_backBtn->ForeColor = System::Drawing::Color::White;
			this->add_backBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_backBtn.Image")));
			this->add_backBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->add_backBtn->Location = System::Drawing::Point(93, 151);
			this->add_backBtn->Margin = System::Windows::Forms::Padding(4);
			this->add_backBtn->Name = L"add_backBtn";
			this->add_backBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->add_backBtn->Size = System::Drawing::Size(130, 49);
			this->add_backBtn->TabIndex = 7;
			this->add_backBtn->Text = L" Back";
			this->add_backBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->add_backBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->add_backBtn->UseVisualStyleBackColor = false;
			this->add_backBtn->Click += gcnew System::EventHandler(this, &Add::add_backBtn_Click);
			// 
			// add_dividerLbl
			// 
			this->add_dividerLbl->BackColor = System::Drawing::Color::Transparent;
			this->add_dividerLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_dividerLbl->ForeColor = System::Drawing::Color::White;
			this->add_dividerLbl->Location = System::Drawing::Point(79, 201);
			this->add_dividerLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->add_dividerLbl->Name = L"add_dividerLbl";
			this->add_dividerLbl->Size = System::Drawing::Size(1067, 36);
			this->add_dividerLbl->TabIndex = 27;
			this->add_dividerLbl->Text = L"_______________";
			this->add_dividerLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1232, 753);
			this->Controls->Add(this->add_dividerLbl);
			this->Controls->Add(this->add_TitleLbl);
			this->Controls->Add(this->add_backBtn);
			this->Controls->Add(this->add_addBtn);
			this->Controls->Add(this->add_nameLbl);
			this->Controls->Add(this->add_nameFlwPnl);
			this->Controls->Add(this->add_idLbl);
			this->Controls->Add(this->add_idFlwPnl);
			this->Controls->Add(this->add_gradeLbl);
			this->Controls->Add(this->add_gradesFlwPnl);
			this->Controls->Add(this->add_subLbl);
			this->Controls->Add(this->add_attnLbl);
			this->Controls->Add(this->add_recitLbl);
			this->Controls->Add(this->add_finalsLbl);
			this->Controls->Add(this->add_midLbl);
			this->Controls->Add(this->add_actLbl);
			this->Controls->Add(this->add_studentsDataGrid);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Add";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"School Management System";
			this->add_nameFlwPnl->ResumeLayout(false);
			this->add_nameFlwPnl->PerformLayout();
			this->add_idFlwPnl->ResumeLayout(false);
			this->add_idFlwPnl->PerformLayout();
			this->add_gradesFlwPnl->ResumeLayout(false);
			this->add_gradesFlwPnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_studentsDataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

#pragma region Functions
		// TODO: Add to db
	private: System::Void addNewRecord() {
		
		// DO NOT MODIFY
		MessageBox::Show("New Record Added", "Success", MessageBoxButtons::OK, 
			MessageBoxIcon::Information);
		this->add_fnameTxt->Text = "First Name"; this->add_fnameTxt->ForeColor = System::Drawing::Color::Silver;
		this->add_mnameTxt->Text = "Middle Name"; this->add_mnameTxt->ForeColor = System::Drawing::Color::Silver;
		this->add_lnameTxt->Text = "Last Name"; this->add_lnameTxt->ForeColor = System::Drawing::Color::Silver;
		this->add_id1Txt->Text = "•••"; this->add_id1Txt->ForeColor = System::Drawing::Color::Silver;
		this->add_id2Txt->Text = "••••••"; this->add_id2Txt->ForeColor = System::Drawing::Color::Silver;
		this->add_subCbx->SelectedIndex = -1;
		this->add_actGrade->Text = "0.00"; this->add_actGrade->ForeColor = System::Drawing::Color::Silver;
		this->add_midGrade->Text = "0.00"; this->add_midGrade->ForeColor = System::Drawing::Color::Silver;
		this->add_finalsGrade->Text = "0.00"; this->add_finalsGrade->ForeColor = System::Drawing::Color::Silver;
		this->add_recitGrade->Text = "0.00"; this->add_recitGrade->ForeColor = System::Drawing::Color::Silver;
		this->add_attnGrade->Text = "0.00"; this->add_attnGrade->ForeColor = System::Drawing::Color::Silver;
	}

	private: System::String^ printData() {
		String^ name = "";

		if(this->add_mnameTxt->Text->Equals("Middle Name"))
			name = "[NAME] " + this->add_fnameTxt->Text + " " + this->add_lnameTxt->Text;
		else
			name = "[NAME] " + this->add_fnameTxt->Text + " " + this->add_mnameTxt->Text + " " +
			this->add_lnameTxt->Text;

		String^ id = "\n[ID] " + this->add_id1Txt->Text + "-" + this->add_id2Txt->Text;
		String^ grades = "\n[GRADES]\n\tSubject: " + this->add_subCbx->Text + "\n\tActivities: " +
			this->add_actGrade->Text + "\n\tMidterms: " + this->add_midGrade->Text + "\n\tFinals: " +
			this->add_finalsGrade->Text + "\n\tRecitation: " + this->add_recitGrade->Text +
			"\n\tAttendance: " + this->add_attnGrade->Text;
		String^ newstudent = "Is the following data correct?\n\n" + name + id + grades;

		return newstudent;
	}

	// TODO: Check if record for selected subject already exists for student
	private: System::Boolean checkIfExists() {
		return false;
		//MessageBox::Show("Record Already Exists", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	private: System::Boolean checkEmpty() {
		if (this->add_fnameTxt->Text->Equals("First Name") ||
			this->add_lnameTxt->Text->Equals("Last Name") ||
			this->add_id1Txt->Text->Equals("•••") ||
			this->add_id2Txt->Text->Equals("••••••") ||
			this->add_subCbx->Text->Equals("") ||
			this->add_actGrade->ForeColor == System::Drawing::Color::Silver ||
			this->add_midGrade->ForeColor == System::Drawing::Color::Silver ||
			this->add_finalsGrade->ForeColor == System::Drawing::Color::Silver ||
			this->add_recitGrade->ForeColor == System::Drawing::Color::Silver ||
			this->add_attnGrade->ForeColor == System::Drawing::Color::Silver) {
			MessageBox::Show("A Field is Empty", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return true;
		} else {
			return false;
		}
	}

	// TODO: Validate that all grade input is a valid double number
	private: System::Boolean checkGrades() {
		//MessageBox::Show("Grade Input is not a Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		return true;
	}
#pragma endregion

#pragma region UI Actions
	// Buttons Action
	public: bool addBackToHome = false;
	private: System::Void add_backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->addBackToHome = true;
	}
	private: System::Void add_addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if(!checkEmpty()) {
			if (checkGrades()) {
				if (!checkIfExists()) {
					if (MessageBox::Show(printData(), "Confirm", MessageBoxButtons::YesNo,
						MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
						addNewRecord();
					}
				}
				else {
					MessageBox::Show("Record Already Exists", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
		}
	}
#pragma endregion

#pragma region Textbox UI
	private: System::Void add_fnameTxt_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_fnameTxt->Text->Equals("First Name")) {
			this->add_fnameTxt->ForeColor = System::Drawing::Color::Black;
			this->add_fnameTxt->Text = "";
		}
	}
	private: System::Void add_fnameTxt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_fnameTxt->Text->Equals("")) {
			this->add_fnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->add_fnameTxt->Text = "First Name";
		}
	}
	private: System::Void add_mnameTxt_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_mnameTxt->Text->Equals("Middle Name")) {
			this->add_mnameTxt->ForeColor = System::Drawing::Color::Black;
			this->add_mnameTxt->Text = "";
		}
	}
	private: System::Void add_mnameTxt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_mnameTxt->Text->Equals("")) {
			this->add_mnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->add_mnameTxt->Text = "Middle Name";
		}
	}
	private: System::Void add_lnameTxt_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_lnameTxt->Text->Equals("Last Name")) {
			this->add_lnameTxt->ForeColor = System::Drawing::Color::Black;
			this->add_lnameTxt->Text = "";
		}
	}
	private: System::Void add_lnameTxt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_lnameTxt->Text->Equals("")) {
			this->add_lnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->add_lnameTxt->Text = "Last Name";
		}
	}
	private: System::Void add_id1Txt_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_id1Txt->Text->Equals("•••")) {
			this->add_id1Txt->ForeColor = System::Drawing::Color::Black;
			this->add_id1Txt->Text = "";
		}
	}
	private: System::Void add_id1Txt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_id1Txt->Text->Equals("")) {
			this->add_id1Txt->ForeColor = System::Drawing::Color::Silver;
			this->add_id1Txt->Text = "•••";
		}
	}
	private: System::Void add_id2Txt_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_id2Txt->Text->Equals("••••••")) {
			this->add_id2Txt->ForeColor = System::Drawing::Color::Black;
			this->add_id2Txt->Text = "";
		}
	}
	private: System::Void add_id2Txt_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_id2Txt->Text->Equals("")) {
			this->add_id2Txt->ForeColor = System::Drawing::Color::Silver;
			this->add_id2Txt->Text = "••••••";
		}
	}
	private: System::Void add_actGrade_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_actGrade->ForeColor == System::Drawing::Color::Silver) {
			this->add_actGrade->ForeColor = System::Drawing::Color::Black;
			this->add_actGrade->Text = "";
		}
	}
	private: System::Void add_actGrade_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_actGrade->Text->Equals("")) {
			this->add_actGrade->ForeColor = System::Drawing::Color::Silver;
			this->add_actGrade->Text = "0.00";
		}
	}
	private: System::Void add_midGrade_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_midGrade->ForeColor == System::Drawing::Color::Silver) {
			this->add_midGrade->ForeColor = System::Drawing::Color::Black;
			this->add_midGrade->Text = "";
		}
	}
	private: System::Void add_midGrade_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_midGrade->Text->Equals("")) {
			this->add_midGrade->ForeColor = System::Drawing::Color::Silver;
			this->add_midGrade->Text = "0.00";
		}
	}
	private: System::Void add_finalsGrade_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_finalsGrade->ForeColor == System::Drawing::Color::Silver) {
			this->add_finalsGrade->ForeColor = System::Drawing::Color::Black;
			this->add_finalsGrade->Text = "";
		}
	}
	private: System::Void add_finalsGrade_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_finalsGrade->Text->Equals("")) {
			this->add_finalsGrade->ForeColor = System::Drawing::Color::Silver;
			this->add_finalsGrade->Text = "0.00";
		}
	}
	private: System::Void add_recitGrade_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_recitGrade->ForeColor == System::Drawing::Color::Silver) {
			this->add_recitGrade->ForeColor = System::Drawing::Color::Black;
			this->add_recitGrade->Text = "";
		}
	}
	private: System::Void add_recitGrade_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_recitGrade->Text->Equals("")) {
			this->add_recitGrade->ForeColor = System::Drawing::Color::Silver;
			this->add_recitGrade->Text = "0.00";
		}
	}
	private: System::Void add_attnGrade_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_attnGrade->ForeColor == System::Drawing::Color::Silver) {
			this->add_attnGrade->ForeColor = System::Drawing::Color::Black;
			this->add_attnGrade->Text = "";
		}
	}
	private: System::Void add_attnGrade_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (this->add_attnGrade->Text->Equals("")) {
			this->add_attnGrade->ForeColor = System::Drawing::Color::Silver;
			this->add_attnGrade->Text = "0.00";
		}
	}
#pragma endregion
	};
}
