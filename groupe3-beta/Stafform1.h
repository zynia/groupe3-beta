#pragma once
#include "CreateStafForm1.h"
#include "ReadStafForm.h"
#include "UpdateStafForm1.h"
#include "DeleteStafForm.h"

namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Stafform
	/// </summary>
	public ref class Stafform : public System::Windows::Forms::Form
	{
	public:
		Stafform(void)
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
		~Stafform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Create;
	private: System::Windows::Forms::Button^ Read;
	private: System::Windows::Forms::Button^ Update;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::TextBox^ Staftextbox;
	private: System::Windows::Forms::Panel^ DisplayStafBoxPanel;

	protected:

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
			this->Create = (gcnew System::Windows::Forms::Button());
			this->Read = (gcnew System::Windows::Forms::Button());
			this->Update = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->Staftextbox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayStafBoxPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// Create
			// 
			this->Create->Location = System::Drawing::Point(65, 135);
			this->Create->MaximumSize = System::Drawing::Size(510, 60);
			this->Create->MinimumSize = System::Drawing::Size(510, 60);
			this->Create->Name = L"Create";
			this->Create->Size = System::Drawing::Size(510, 60);
			this->Create->TabIndex = 1;
			this->Create->Text = L"Create";
			this->Create->UseVisualStyleBackColor = true;
			this->Create->Click += gcnew System::EventHandler(this, &Stafform::Create_staf_Click);
			// 
			// Read
			// 
			this->Read->Location = System::Drawing::Point(65, 201);
			this->Read->MaximumSize = System::Drawing::Size(510, 60);
			this->Read->MinimumSize = System::Drawing::Size(510, 60);
			this->Read->Name = L"Read";
			this->Read->Size = System::Drawing::Size(510, 60);
			this->Read->TabIndex = 2;
			this->Read->Text = L"Read";
			this->Read->UseVisualStyleBackColor = true;
			this->Read->Click += gcnew System::EventHandler(this, &Stafform::Read_staf_Click);
			// 
			// Update
			// 
			this->Update->Location = System::Drawing::Point(65, 268);
			this->Update->MaximumSize = System::Drawing::Size(510, 60);
			this->Update->MinimumSize = System::Drawing::Size(510, 60);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(510, 60);
			this->Update->TabIndex = 3;
			this->Update->Text = L"Update";
			this->Update->UseVisualStyleBackColor = true;
			this->Update->Click += gcnew System::EventHandler(this, &Stafform::Update_staf_Click);
			// 
			// Delete
			// 
			this->Delete->Location = System::Drawing::Point(65, 335);
			this->Delete->MaximumSize = System::Drawing::Size(150, 60);
			this->Delete->MinimumSize = System::Drawing::Size(510, 60);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(510, 60);
			this->Delete->TabIndex = 4;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = true;
			this->Delete->Click += gcnew System::EventHandler(this, &Stafform::Delete_staf_Click);
			// 
			// Staftextbox
			// 
			this->Staftextbox->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Staftextbox->BorderStyle = BorderStyle::None;
			this->Staftextbox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->Staftextbox->Location = System::Drawing::Point(10, 20);
			this->Staftextbox->Name = L"Staftextbox";
			this->Staftextbox->Size = System::Drawing::Size(620, 39);
			this->Staftextbox->TabIndex = 5;
			this->Staftextbox->Text = L"Staff";
			// 
			// DisplayStafBoxPanel
			// 
			this->DisplayStafBoxPanel->Location = System::Drawing::Point(0, 80);
			this->DisplayStafBoxPanel->Name = L"DisplayStafBoxPanel";
			this->DisplayStafBoxPanel->BorderStyle = BorderStyle::None;
			this->DisplayStafBoxPanel->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayStafBoxPanel->Size = System::Drawing::Size(640, 380);
			this->DisplayStafBoxPanel->TabIndex = 6;
			this->DisplayStafBoxPanel->Visible = false;
			// 
			// Stafform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 430);
			this->Controls->Add(this->DisplayStafBoxPanel);
			this->Controls->Add(this->Staftextbox);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Update);
			this->Controls->Add(this->Read);
			this->Controls->Add(this->Create);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Stafform";
			this->Text = L"Stafform";
			this->Load += gcnew System::EventHandler(this, &Stafform::Stafform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void Create_staf_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Staftextbox->Text = L"Staff > Create";
		this->DisplayStafBoxPanel->Visible = true;
		DisplayStafBoxPanel->Controls->Clear();
		CreateStafForm^ Form = gcnew CreateStafForm();
		Form->TopLevel = false;
		DisplayStafBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Read_staf_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Staftextbox->Text = L"Staff > Read";
		this->DisplayStafBoxPanel->Visible = true;
		DisplayStafBoxPanel->Controls->Clear();
		ReadStafForm^ Form = gcnew ReadStafForm();
		Form->TopLevel = false;
		DisplayStafBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Update_staf_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Staftextbox->Text = L"Staff > Update";
		this->DisplayStafBoxPanel->Visible = true;
		DisplayStafBoxPanel->Controls->Clear();
		UpdateStaffForm^ Form = gcnew UpdateStaffForm();
		Form->TopLevel = false;
		DisplayStafBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Delete_staf_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Staftextbox->Text = L"Staff > Delete";
		this->DisplayStafBoxPanel->Visible = true;
		DisplayStafBoxPanel->Controls->Clear();
		DeleteStaffForm^ Form = gcnew DeleteStaffForm();
		Form->TopLevel = false;
		DisplayStafBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Stafform_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StafPannel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
