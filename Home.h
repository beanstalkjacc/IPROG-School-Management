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
	protected:

	protected:

	private: System::Windows::Forms::Button^ home_viewBtn;
	private: System::Windows::Forms::Button^ home_searchBtn;
	private: System::Windows::Forms::Button^ home_displayBtn;
	private: System::Windows::Forms::Button^ home_exitBtn;







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
			this->SuspendLayout();
			// 
			// home_addBtn
			// 
			this->home_addBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->home_addBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->home_addBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_addBtn->Location = System::Drawing::Point(345, 192);
			this->home_addBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->home_addBtn->Name = L"home_addBtn";
			this->home_addBtn->Size = System::Drawing::Size(216, 38);
			this->home_addBtn->TabIndex = 0;
			this->home_addBtn->Text = L"Add New Record";
			this->home_addBtn->UseVisualStyleBackColor = true;
			this->home_addBtn->Click += gcnew System::EventHandler(this, &Home::home_addBtn_Click);
			// 
			// home_titleLbl
			// 
			this->home_titleLbl->AutoSize = true;
			this->home_titleLbl->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 32));
			this->home_titleLbl->Location = System::Drawing::Point(89, 98);
			this->home_titleLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->home_titleLbl->Name = L"home_titleLbl";
			this->home_titleLbl->Size = System::Drawing::Size(713, 65);
			this->home_titleLbl->TabIndex = 1;
			this->home_titleLbl->Text = L"School Management System";
			// 
			// home_viewBtn
			// 
			this->home_viewBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->home_viewBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->home_viewBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_viewBtn->Location = System::Drawing::Point(345, 236);
			this->home_viewBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->home_viewBtn->Name = L"home_viewBtn";
			this->home_viewBtn->Size = System::Drawing::Size(216, 38);
			this->home_viewBtn->TabIndex = 2;
			this->home_viewBtn->Text = L"View Students List";
			this->home_viewBtn->UseVisualStyleBackColor = true;
			// 
			// home_searchBtn
			// 
			this->home_searchBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->home_searchBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->home_searchBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_searchBtn->Location = System::Drawing::Point(345, 280);
			this->home_searchBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->home_searchBtn->Name = L"home_searchBtn";
			this->home_searchBtn->Size = System::Drawing::Size(216, 38);
			this->home_searchBtn->TabIndex = 3;
			this->home_searchBtn->Text = L"Search Student";
			this->home_searchBtn->UseVisualStyleBackColor = true;
			// 
			// home_displayBtn
			// 
			this->home_displayBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->home_displayBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->home_displayBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_displayBtn->Location = System::Drawing::Point(345, 324);
			this->home_displayBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->home_displayBtn->Name = L"home_displayBtn";
			this->home_displayBtn->Size = System::Drawing::Size(216, 38);
			this->home_displayBtn->TabIndex = 4;
			this->home_displayBtn->Text = L"Display Class Results";
			this->home_displayBtn->UseVisualStyleBackColor = true;
			// 
			// home_exitBtn
			// 
			this->home_exitBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->home_exitBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->home_exitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_exitBtn->Location = System::Drawing::Point(345, 369);
			this->home_exitBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->home_exitBtn->Name = L"home_exitBtn";
			this->home_exitBtn->Size = System::Drawing::Size(216, 38);
			this->home_exitBtn->TabIndex = 5;
			this->home_exitBtn->Text = L"Exit";
			this->home_exitBtn->UseVisualStyleBackColor = true;
			this->home_exitBtn->Click += gcnew System::EventHandler(this, &Home::home_exitBtn_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->ClientSize = System::Drawing::Size(912, 506);
			this->Controls->Add(this->home_titleLbl);
			this->Controls->Add(this->home_addBtn);
			this->Controls->Add(this->home_exitBtn);
			this->Controls->Add(this->home_viewBtn);
			this->Controls->Add(this->home_searchBtn);
			this->Controls->Add(this->home_displayBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"School Management System";
			this->ResumeLayout(false);
			this->PerformLayout();

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
};
}
