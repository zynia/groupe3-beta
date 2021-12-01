#pragma once
#include "CreateOrderForm.h"
#include "ReadOrderForm.h"
#include "UpdateOrderForm.h"
#include "DeleteOrderForm.h"

namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ordersform
	/// </summary>
	public ref class Ordersform : public System::Windows::Forms::Form
	{
	public:
		Ordersform(void)
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
		~Ordersform()
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
	private: System::Windows::Forms::TextBox^ Ordertextbox;
	private: System::Windows::Forms::Panel^ DisplayOrderBoxPanel;
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
			this->Ordertextbox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayOrderBoxPanel = (gcnew System::Windows::Forms::Panel());
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
			this->Create->Click += gcnew System::EventHandler(this, &Ordersform::Create_Order_Click);
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
			this->Read->Click += gcnew System::EventHandler(this, &Ordersform::Read_Order_Click);
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
			this->Update->Click += gcnew System::EventHandler(this, &Ordersform::Update_Order_Click);
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
			this->Delete->Click += gcnew System::EventHandler(this, &Ordersform::Delete_Order_Click);
			// 
			// Ordertextbox
			// 
			this->Ordertextbox->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ordertextbox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->Ordertextbox->BorderStyle = BorderStyle::None;
			this->Ordertextbox->Location = System::Drawing::Point(10, 20);
			this->Ordertextbox->Name = L"Ordertextbox";
			this->Ordertextbox->Size = System::Drawing::Size(620, 39);
			this->Ordertextbox->TabIndex = 5;
			this->Ordertextbox->Text = L"Order";
			//
			// DisplayClientBoxPanel
			// 
			this->DisplayOrderBoxPanel->Location = System::Drawing::Point(0, 80);
			this->DisplayOrderBoxPanel->Name = L"DisplayOrderBoxPanel";
			this->DisplayOrderBoxPanel->BorderStyle = BorderStyle::None;
			this->DisplayOrderBoxPanel->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayOrderBoxPanel->Size = System::Drawing::Size(640, 380);
			this->DisplayOrderBoxPanel->TabIndex = 6;
			this->DisplayOrderBoxPanel->Visible = false;
			// 
			// Ordersform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 480);
			this->Controls->Add(this->DisplayOrderBoxPanel);
			this->Controls->Add(this->Ordertextbox);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Update);
			this->Controls->Add(this->Read);
			this->Controls->Add(this->Create);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Ordersform";
			this->Text = L"Ordersform";
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void Create_Order_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Ordertextbox->Text = L"Order > Create";
		this->DisplayOrderBoxPanel->Visible = true;
		DisplayOrderBoxPanel->Controls->Clear();
		CreateOrderForm^ Form = gcnew CreateOrderForm();
		Form->TopLevel = false;
		DisplayOrderBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Read_Order_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Ordertextbox->Text = L"Order > Read";
		this->DisplayOrderBoxPanel->Visible = true;
		DisplayOrderBoxPanel->Controls->Clear();
		ReadOrderForm^ Form = gcnew ReadOrderForm();
		Form->TopLevel = false;
		DisplayOrderBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Update_Order_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Ordertextbox->Text = L"Order > Update";
		this->DisplayOrderBoxPanel->Visible = true;
		DisplayOrderBoxPanel->Controls->Clear();
		UpdateOrderForm^ Form = gcnew UpdateOrderForm();
		Form->TopLevel = false;
		DisplayOrderBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}
	private: System::Void Delete_Order_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Ordertextbox->Text = L"Order > Delete";
		this->DisplayOrderBoxPanel->Visible = true;
		DisplayOrderBoxPanel->Controls->Clear();
		DeleteOrderForm^ Form = gcnew DeleteOrderForm();
		Form->TopLevel = false;
		DisplayOrderBoxPanel->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();
	}

	private: System::Void Create_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
