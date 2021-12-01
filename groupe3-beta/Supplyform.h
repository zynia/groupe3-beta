#pragma once
#include "CreateSupplyForm.h"
#include "ReadSupplyForm.h"
#include "UpdateSupplyForm.h"
#include "DeleteSupplyForm.h"


namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Supplyform
	/// </summary>
	public ref class Supplyform : public System::Windows::Forms::Form
	{
	public:
		Supplyform(void)
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
		~Supplyform()
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
	private: System::Windows::Forms::TextBox^ Suppliestextbox;
	private: System::Windows::Forms::Panel^ DisplaySupplyBoxPanel;
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
			this->Suppliestextbox = (gcnew System::Windows::Forms::TextBox());
			this->DisplaySupplyBoxPanel = (gcnew System::Windows::Forms::Panel());
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
			this->Create->Click += gcnew System::EventHandler(this, &Supplyform::Create_supply_Click);
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
			this->Read->Click += gcnew System::EventHandler(this, &Supplyform::Read_supply_Click);
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
			this->Update->Click += gcnew System::EventHandler(this, &Supplyform::Update_supply_Click);
			// 
			// Delete
			// 
			this->Delete->Location = System::Drawing::Point(65, 335);
			this->Delete->MaximumSize = System::Drawing::Size(510, 60);
			this->Delete->MinimumSize = System::Drawing::Size(510, 60);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(510, 60);
			this->Delete->TabIndex = 4;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = true;
			this->Delete->Click += gcnew System::EventHandler(this, &Supplyform::Delete_supply_Click);
			// 
			// Suppliestextbox
			// 
			this->Suppliestextbox->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Suppliestextbox->BorderStyle = BorderStyle::None;
			this->Suppliestextbox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->Suppliestextbox->Location = System::Drawing::Point(10, 20);
			this->Suppliestextbox->Name = L"Suppliestextbox";
			this->Suppliestextbox->Size = System::Drawing::Size(620, 39);
			this->Suppliestextbox->TabIndex = 5;
			this->Suppliestextbox->Text = L"Supplies";
			this->Suppliestextbox->TextChanged += gcnew System::EventHandler(this, &Supplyform::Suppliestextbox_TextChanged);
			// 
			// DisplaySupplyBoxPanel
			// 
			this->DisplaySupplyBoxPanel->Location = System::Drawing::Point(0, 80);
			this->DisplaySupplyBoxPanel->Name = L"DisplaySupplyBoxPanel";
			this->DisplaySupplyBoxPanel->BorderStyle = BorderStyle::None;
			this->DisplaySupplyBoxPanel->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplaySupplyBoxPanel->Size = System::Drawing::Size(640, 380);
			this->DisplaySupplyBoxPanel->TabIndex = 6;
			this->DisplaySupplyBoxPanel->Visible = false;
			// 
			// Supplyform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 480);
			this->Controls->Add(this->DisplaySupplyBoxPanel);
			this->Controls->Add(this->Suppliestextbox);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Update);
			this->Controls->Add(this->Read);
			this->Controls->Add(this->Create);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Supplyform";
			this->Text = L"Supplyform";
			this->Load += gcnew System::EventHandler(this, &Supplyform::Supplyform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void Create_supply_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Suppliestextbox->Text = L"Supplies > Create";
		this->DisplaySupplyBoxPanel->Visible = true;
		DisplaySupplyBoxPanel->Controls->Clear();
		CreateSupplyForm^ Form = gcnew CreateSupplyForm();
		Form->TopLevel = false;
		DisplaySupplyBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Read_supply_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Suppliestextbox->Text = L"Supplies > Read";
		this->DisplaySupplyBoxPanel->Visible = true;
		DisplaySupplyBoxPanel->Controls->Clear();
		ReadSupplyForm^ Form = gcnew ReadSupplyForm();
		Form->TopLevel = false;
		DisplaySupplyBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Update_supply_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Suppliestextbox->Text = L"Supplies > Update";
		this->DisplaySupplyBoxPanel->Visible = true;
		DisplaySupplyBoxPanel->Controls->Clear();
		UpdateSupplyForm^ Form = gcnew UpdateSupplyForm();
		Form->TopLevel = false;
		DisplaySupplyBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Delete_supply_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Suppliestextbox->Text = L"Supplies > Delete";
		this->DisplaySupplyBoxPanel->Visible = true;
		DisplaySupplyBoxPanel->Controls->Clear();
		DeleteSupplyForm^ Form = gcnew DeleteSupplyForm();
		Form->TopLevel = false;
		DisplaySupplyBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}

	private: System::Void Create_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Supplyform_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Suppliestextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
