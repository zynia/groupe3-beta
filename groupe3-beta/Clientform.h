#pragma once
#include "CreateClientForm.h"
#include "DeleteClientForm.h"
#include "ReadClientForm.h"
#include "UpdateClientForm.h"

namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Clientform
	/// </summary>
	public ref class Clientform : public System::Windows::Forms::Form
	{
	public:
		Clientform(void)
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
		~Clientform()
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
	private: System::Windows::Forms::TextBox^ Clienttextbox;
	private: System::Windows::Forms::Panel^ DisplayClientBoxPanel;

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
			this->Clienttextbox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayClientBoxPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// Create
			// 
			this->Create->Location = System::Drawing::Point(65, 135);
			this->Create->MaximumSize = System::Drawing::Size(510, 60);
			this->Create->MinimumSize = System::Drawing::Size(510, 60);
			this->Create->Name = L"Create";
			this->Create->Size = System::Drawing::Size(510, 60);
			this->Create->TabIndex = 0;
			this->Create->Text = L"Create";
			this->Create->UseVisualStyleBackColor = true;
			this->Create->Click += gcnew System::EventHandler(this, &Clientform::Create_client_Click);
			// 
			// Read
			// 
			this->Read->Location = System::Drawing::Point(65, 201);
			this->Read->MaximumSize = System::Drawing::Size(510, 60);
			this->Read->MinimumSize = System::Drawing::Size(510, 60);
			this->Read->Name = L"Read";
			this->Read->Size = System::Drawing::Size(510, 60);
			this->Read->TabIndex = 1;
			this->Read->Text = L"Read";
			this->Read->UseVisualStyleBackColor = true;
			this->Read->Click += gcnew System::EventHandler(this, &Clientform::Read_client_Click);
			// 
			// Update
			// 
			this->Update->Location = System::Drawing::Point(65, 268);
			this->Update->MaximumSize = System::Drawing::Size(510, 60);
			this->Update->MinimumSize = System::Drawing::Size(510, 60);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(510, 60);
			this->Update->TabIndex = 2;
			this->Update->Text = L"Update";
			this->Update->UseVisualStyleBackColor = true;
			this->Update->Click += gcnew System::EventHandler(this, &Clientform::Update_client_Click);
			// 
			// Delete
			// 
			this->Delete->Location = System::Drawing::Point(65, 335);
			this->Delete->MaximumSize = System::Drawing::Size(510, 60);
			this->Delete->MinimumSize = System::Drawing::Size(510, 60);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(510, 60);
			this->Delete->TabIndex = 3;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = true;
			this->Delete->Click += gcnew System::EventHandler(this, &Clientform::Delete_client_Click);
			// 
			// Clienttextbox
			// 
			this->Clienttextbox->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clienttextbox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->Clienttextbox->BorderStyle = BorderStyle::None;
			this->Clienttextbox->Location = System::Drawing::Point(10, 20);
			this->Clienttextbox->Name = L"Clienttextbox";
			this->Clienttextbox->Size = System::Drawing::Size(620, 39);
			this->Clienttextbox->TabIndex = 4;
			this->Clienttextbox->Text = L"Client";
			this->Clienttextbox->TextChanged += gcnew System::EventHandler(this, &Clientform::textBox1_TextChanged);
			//
			// DisplayClientBoxPanel
			// 
			this->DisplayClientBoxPanel->Location = System::Drawing::Point(0, 80);
			this->DisplayClientBoxPanel->Name = L"DisplayStafBoxPanel";
			this->DisplayClientBoxPanel->BorderStyle = BorderStyle::None;
			this->DisplayClientBoxPanel->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayClientBoxPanel->Size = System::Drawing::Size(640, 380);
			this->DisplayClientBoxPanel->TabIndex = 6;
			this->DisplayClientBoxPanel->Visible = false;
			// 
			// Clientform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 480);
			this->Controls->Add(this->DisplayClientBoxPanel);
			this->Controls->Add(this->Clienttextbox);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Update);
			this->Controls->Add(this->Read);
			this->Controls->Add(this->Create);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Clientform";
			this->Text = L"Clientform";
			this->Load += gcnew System::EventHandler(this, &Clientform::Clientform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void Create_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Clienttextbox->Text = L"Client > Create";
		this->DisplayClientBoxPanel->Visible = true;
		DisplayClientBoxPanel->Controls->Clear();
		CreateClientForm^ Form = gcnew CreateClientForm();
		Form->TopLevel = false;
		DisplayClientBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Read_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Clienttextbox->Text = L"Client > Read";
		this->DisplayClientBoxPanel->Visible = true;
		DisplayClientBoxPanel->Controls->Clear();
		ReadClientForm^ Form = gcnew ReadClientForm();
		Form->TopLevel = false;
		DisplayClientBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Update_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Clienttextbox->Text = L"Client > Update";
		this->DisplayClientBoxPanel->Visible = true;
		DisplayClientBoxPanel->Controls->Clear();
		UpdateClientForm^ Form = gcnew UpdateClientForm();
		Form->TopLevel = false;
		DisplayClientBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Delete_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Clienttextbox->Text = L"Client > Delete";
		this->DisplayClientBoxPanel->Visible = true;
		DisplayClientBoxPanel->Controls->Clear();
		DeleteClientForm^ Form = gcnew DeleteClientForm();
		Form->TopLevel = false;
		DisplayClientBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Clientform_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
