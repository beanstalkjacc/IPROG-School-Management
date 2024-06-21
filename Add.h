#pragma once

namespace School {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ add_backBtn;
	private: System::Windows::Forms::TextBox^ add_fnameTxt;

	private: System::Windows::Forms::Label^ add_nameLbl;



	private: System::Windows::Forms::TextBox^ add_mnameTxt;
	private: System::Windows::Forms::TextBox^ add_lnameTxt;
	private: System::Windows::Forms::Button^ add_submitBtn;



	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;













	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Add::typeid));
			this->add_backBtn = (gcnew System::Windows::Forms::Button());
			this->add_fnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->add_nameLbl = (gcnew System::Windows::Forms::Label());
			this->add_mnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->add_lnameTxt = (gcnew System::Windows::Forms::TextBox());
			this->add_submitBtn = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// add_backBtn
			// 
			this->add_backBtn->BackColor = System::Drawing::Color::Transparent;
			this->add_backBtn->FlatAppearance->BorderSize = 0;
			this->add_backBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Firebrick;
			this->add_backBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightCoral;
			this->add_backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_backBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_backBtn->Location = System::Drawing::Point(1, 1);
			this->add_backBtn->Name = L"add_backBtn";
			this->add_backBtn->Size = System::Drawing::Size(57, 28);
			this->add_backBtn->TabIndex = 7;
			this->add_backBtn->Text = L"BACK";
			this->add_backBtn->UseVisualStyleBackColor = false;
			this->add_backBtn->Click += gcnew System::EventHandler(this, &Add::add_backBtn_Click);
			// 
			// add_fnameTxt
			// 
			this->add_fnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->add_fnameTxt->Location = System::Drawing::Point(3, 3);
			this->add_fnameTxt->Name = L"add_fnameTxt";
			this->add_fnameTxt->Size = System::Drawing::Size(100, 20);
			this->add_fnameTxt->TabIndex = 8;
			this->add_fnameTxt->Text = L"First Name";
			this->add_fnameTxt->Enter += gcnew System::EventHandler(this, &Add::add_fnameTxt_Enter);
			this->add_fnameTxt->Leave += gcnew System::EventHandler(this, &Add::add_fnameTxt_Leave);
			// 
			// add_nameLbl
			// 
			this->add_nameLbl->AutoSize = true;
			this->add_nameLbl->Location = System::Drawing::Point(33, 54);
			this->add_nameLbl->Name = L"add_nameLbl";
			this->add_nameLbl->Size = System::Drawing::Size(38, 13);
			this->add_nameLbl->TabIndex = 9;
			this->add_nameLbl->Text = L"NAME";
			this->add_nameLbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// add_mnameTxt
			// 
			this->add_mnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->add_mnameTxt->Location = System::Drawing::Point(109, 3);
			this->add_mnameTxt->Name = L"add_mnameTxt";
			this->add_mnameTxt->Size = System::Drawing::Size(100, 20);
			this->add_mnameTxt->TabIndex = 10;
			this->add_mnameTxt->Text = L"Middle Name";
			// 
			// add_lnameTxt
			// 
			this->add_lnameTxt->ForeColor = System::Drawing::Color::Silver;
			this->add_lnameTxt->Location = System::Drawing::Point(215, 3);
			this->add_lnameTxt->Name = L"add_lnameTxt";
			this->add_lnameTxt->Size = System::Drawing::Size(100, 20);
			this->add_lnameTxt->TabIndex = 11;
			this->add_lnameTxt->Text = L"Last Name";
			// 
			// add_submitBtn
			// 
			this->add_submitBtn->Location = System::Drawing::Point(597, 376);
			this->add_submitBtn->Name = L"add_submitBtn";
			this->add_submitBtn->Size = System::Drawing::Size(75, 23);
			this->add_submitBtn->TabIndex = 12;
			this->add_submitBtn->Text = L"Submit";
			this->add_submitBtn->UseVisualStyleBackColor = true;
			this->add_submitBtn->Click += gcnew System::EventHandler(this, &Add::add_submitBtn_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->add_fnameTxt);
			this->flowLayoutPanel2->Controls->Add(this->add_mnameTxt);
			this->flowLayoutPanel2->Controls->Add(this->add_lnameTxt);
			this->flowLayoutPanel2->Location = System::Drawing::Point(77, 47);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(565, 26);
			this->flowLayoutPanel2->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"GRADES";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->comboBox1);
			this->flowLayoutPanel1->Controls->Add(this->textBox4);
			this->flowLayoutPanel1->Controls->Add(this->textBox1);
			this->flowLayoutPanel1->Controls->Add(this->textBox2);
			this->flowLayoutPanel1->Controls->Add(this->textBox3);
			this->flowLayoutPanel1->Controls->Add(this->textBox5);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(146, 113);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(108, 157);
			this->flowLayoutPanel1->TabIndex = 17;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"DBMGTLAB", L"DBMGTLEC", L"DISSTRU1", L"IPROGLAB",
					L"IPROGLEC"
			});
			this->comboBox1->Location = System::Drawing::Point(3, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(3, 30);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(3, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(3, 108);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(3, 134);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(74, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Activities";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(74, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Midterms";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(74, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Finals";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(74, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Recitation";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(74, 250);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Attendance";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(74, 119);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Subject";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(292, 92);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(350, 178);
			this->dataGridView1->TabIndex = 24;
			// 
			// Add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MistyRose;
			this->ClientSize = System::Drawing::Size(684, 411);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->add_nameLbl);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->add_submitBtn);
			this->Controls->Add(this->add_backBtn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Add";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"School Management System";
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Buttons Action
	public: bool addBackToHome = false;
	private: System::Void add_backBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->addBackToHome = true;
	}
	private: System::Void add_submitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = this->add_fnameTxt->Text + " " + this->add_mnameTxt->Text + " " +
			this->add_lnameTxt->Text;
		MessageBox::Show(name, "Log", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	// Textbox UI
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
		;
	}
	
};
}
