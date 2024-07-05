#pragma once

namespace School {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ home_addBtn;
	private: System::Windows::Forms::Label^ home_titleLbl;
	private: System::Windows::Forms::Button^ home_viewBtn;
	private: System::Windows::Forms::Button^ home_searchBtn;
	private: System::Windows::Forms::Button^ home_displayBtn;
	private: System::Windows::Forms::Button^ home_exitBtn;
	private: System::Windows::Forms::Label^ home_dividerLbl;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->home_addBtn = (gcnew System::Windows::Forms::Button());
			this->home_titleLbl = (gcnew System::Windows::Forms::Label());
			this->home_viewBtn = (gcnew System::Windows::Forms::Button());
			this->home_searchBtn = (gcnew System::Windows::Forms::Button());
			this->home_displayBtn = (gcnew System::Windows::Forms::Button());
			this->home_exitBtn = (gcnew System::Windows::Forms::Button());
			this->home_dividerLbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// home_addBtn
			// 
			this->home_addBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->home_addBtn->BackColor = System::Drawing::Color::Firebrick;
			this->home_addBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->home_addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_addBtn->ForeColor = System::Drawing::Color::White;
			this->home_addBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home_addBtn.Image")));
			this->home_addBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->home_addBtn->Location = System::Drawing::Point(461, 330);
			this->home_addBtn->Margin = System::Windows::Forms::Padding(4);
			this->home_addBtn->Name = L"home_addBtn";
			this->home_addBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->home_addBtn->Size = System::Drawing::Size(313, 49);
			this->home_addBtn->TabIndex = 0;
			this->home_addBtn->Text = L"Add New Record";
			this->home_addBtn->UseVisualStyleBackColor = false;
			this->home_addBtn->Click += gcnew System::EventHandler(this, &Home::home_addBtn_Click);
			// 
			// home_titleLbl
			// 
			this->home_titleLbl->BackColor = System::Drawing::Color::Transparent;
			this->home_titleLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_titleLbl->ForeColor = System::Drawing::Color::White;
			this->home_titleLbl->Location = System::Drawing::Point(374, 199);
			this->home_titleLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->home_titleLbl->Name = L"home_titleLbl";
			this->home_titleLbl->Size = System::Drawing::Size(484, 87);
			this->home_titleLbl->TabIndex = 1;
			this->home_titleLbl->Text = L"School Management System";
			this->home_titleLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// home_viewBtn
			// 
			this->home_viewBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->home_viewBtn->BackColor = System::Drawing::Color::Firebrick;
			this->home_viewBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->home_viewBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_viewBtn->ForeColor = System::Drawing::Color::White;
			this->home_viewBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home_viewBtn.Image")));
			this->home_viewBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->home_viewBtn->Location = System::Drawing::Point(461, 387);
			this->home_viewBtn->Margin = System::Windows::Forms::Padding(4);
			this->home_viewBtn->Name = L"home_viewBtn";
			this->home_viewBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->home_viewBtn->Size = System::Drawing::Size(313, 49);
			this->home_viewBtn->TabIndex = 2;
			this->home_viewBtn->Text = L"View All Records";
			this->home_viewBtn->UseVisualStyleBackColor = false;
			this->home_viewBtn->Click += gcnew System::EventHandler(this, &Home::home_recordsBtn_Click);
			// 
			// home_searchBtn
			// 
			this->home_searchBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->home_searchBtn->BackColor = System::Drawing::Color::Firebrick;
			this->home_searchBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->home_searchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_searchBtn->ForeColor = System::Drawing::Color::White;
			this->home_searchBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home_searchBtn.Image")));
			this->home_searchBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->home_searchBtn->Location = System::Drawing::Point(461, 444);
			this->home_searchBtn->Margin = System::Windows::Forms::Padding(4);
			this->home_searchBtn->Name = L"home_searchBtn";
			this->home_searchBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->home_searchBtn->Size = System::Drawing::Size(313, 49);
			this->home_searchBtn->TabIndex = 3;
			this->home_searchBtn->Text = L"Search Student";
			this->home_searchBtn->UseVisualStyleBackColor = false;
			this->home_searchBtn->Click += gcnew System::EventHandler(this, &Home::home_searchBtn_Click);
			// 
			// home_displayBtn
			// 
			this->home_displayBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->home_displayBtn->BackColor = System::Drawing::Color::Firebrick;
			this->home_displayBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->home_displayBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_displayBtn->ForeColor = System::Drawing::Color::White;
			this->home_displayBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home_displayBtn.Image")));
			this->home_displayBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->home_displayBtn->Location = System::Drawing::Point(461, 501);
			this->home_displayBtn->Margin = System::Windows::Forms::Padding(4);
			this->home_displayBtn->Name = L"home_displayBtn";
			this->home_displayBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->home_displayBtn->Size = System::Drawing::Size(313, 49);
			this->home_displayBtn->TabIndex = 4;
			this->home_displayBtn->Text = L"Display Class Results";
			this->home_displayBtn->UseVisualStyleBackColor = false;
			// 
			// home_exitBtn
			// 
			this->home_exitBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->home_exitBtn->BackColor = System::Drawing::Color::Firebrick;
			this->home_exitBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->home_exitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_exitBtn->ForeColor = System::Drawing::Color::White;
			this->home_exitBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home_exitBtn.Image")));
			this->home_exitBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->home_exitBtn->Location = System::Drawing::Point(461, 558);
			this->home_exitBtn->Margin = System::Windows::Forms::Padding(4);
			this->home_exitBtn->Name = L"home_exitBtn";
			this->home_exitBtn->Padding = System::Windows::Forms::Padding(15, 0, 0, 0);
			this->home_exitBtn->Size = System::Drawing::Size(313, 49);
			this->home_exitBtn->TabIndex = 5;
			this->home_exitBtn->Text = L"Exit";
			this->home_exitBtn->UseVisualStyleBackColor = false;
			this->home_exitBtn->Click += gcnew System::EventHandler(this, &Home::home_exitBtn_Click);
			// 
			// home_dividerLbl
			// 
			this->home_dividerLbl->BackColor = System::Drawing::Color::Transparent;
			this->home_dividerLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_dividerLbl->ForeColor = System::Drawing::Color::White;
			this->home_dividerLbl->Location = System::Drawing::Point(375, 260);
			this->home_dividerLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->home_dividerLbl->Name = L"home_dividerLbl";
			this->home_dividerLbl->Size = System::Drawing::Size(484, 36);
			this->home_dividerLbl->TabIndex = 6;
			this->home_dividerLbl->Text = L"_______________________";
			this->home_dividerLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1232, 753);
			this->Controls->Add(this->home_dividerLbl);
			this->Controls->Add(this->home_titleLbl);
			this->Controls->Add(this->home_addBtn);
			this->Controls->Add(this->home_exitBtn);
			this->Controls->Add(this->home_viewBtn);
			this->Controls->Add(this->home_searchBtn);
			this->Controls->Add(this->home_displayBtn);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"School Management System";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void home_exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool switchToAdd = false;
	private: System::Void home_addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->switchToAdd = true;
	}

	public: bool switchToRecords = false;
	private: System::Void home_recordsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->switchToRecords = true;
	}

	public: bool switchToSearch = false;
	private: System::Void home_searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->switchToSearch = true;
	}

};
}
