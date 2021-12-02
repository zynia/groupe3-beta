#pragma once
#include "Stafform1.h"
#include "Clientform.h"
#include "Ordersform.h"
#include "Supplyform.h"
#include "Statsform.h"

namespace Gstorg {
	using namespace Gstorg;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();

		}

	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Homebutton;
	private: System::Windows::Forms::Button^ Stafbutton;
	private: System::Windows::Forms::Button^ Clientsbutton;
	private: System::Windows::Forms::Button^ Orderbutton;
	private: System::Windows::Forms::Button^ Supplybutton;
	private: System::Windows::Forms::Button^ Statsbutton;
	private: System::Windows::Forms::Panel^ Pannelmain;
	private: System::Windows::Forms::TextBox^ Titlebox;






	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->Homebutton = (gcnew System::Windows::Forms::Button());
			this->Stafbutton = (gcnew System::Windows::Forms::Button());
			this->Clientsbutton = (gcnew System::Windows::Forms::Button());
			this->Orderbutton = (gcnew System::Windows::Forms::Button());
			this->Supplybutton = (gcnew System::Windows::Forms::Button());
			this->Statsbutton = (gcnew System::Windows::Forms::Button());
			this->Pannelmain = (gcnew System::Windows::Forms::Panel());
			this->Titlebox = (gcnew System::Windows::Forms::TextBox());
			this->Pannelmain->SuspendLayout();
			this->SuspendLayout();
			// 
			// Homebutton
			// 
			this->Homebutton->BackColor = System::Drawing::Color::Transparent;
			this->Homebutton->Location = System::Drawing::Point(15, 15);
			this->Homebutton->Name = L"Homebutton";
			this->Homebutton->Size = System::Drawing::Size(200, 80);
			this->Homebutton->TabIndex = 0;
			this->Homebutton->Text = L"Menu";
			this->Homebutton->UseVisualStyleBackColor = false;
			this->Homebutton->Click += gcnew System::EventHandler(this, &Form1::Home_button_Click);
			// 
			// Stafbutton
			// 
			this->Stafbutton->Location = System::Drawing::Point(15, 150);
			this->Stafbutton->Name = L"Stafbutton";
			this->Stafbutton->Size = System::Drawing::Size(200, 50);
			this->Stafbutton->TabIndex = 1;
			this->Stafbutton->Text = L"Staff";
			this->Stafbutton->UseVisualStyleBackColor = true;
			this->Stafbutton->Click += gcnew System::EventHandler(this, &Form1::Staf_button_Click);
			// 
			// Clientsbutton
			// 
			this->Clientsbutton->Location = System::Drawing::Point(15, 215);
			this->Clientsbutton->Name = L"Clientsbutton";
			this->Clientsbutton->Size = System::Drawing::Size(200, 50);
			this->Clientsbutton->TabIndex = 2;
			this->Clientsbutton->Text = L"Clients";
			this->Clientsbutton->UseVisualStyleBackColor = true;
			this->Clientsbutton->Click += gcnew System::EventHandler(this, &Form1::Client_button_Click);
			// 
			// Orderbutton
			// 
			this->Orderbutton->Location = System::Drawing::Point(15, 280);
			this->Orderbutton->Name = L"Orderbutton";
			this->Orderbutton->Size = System::Drawing::Size(200, 50);
			this->Orderbutton->TabIndex = 3;
			this->Orderbutton->Text = L"Orders";
			this->Orderbutton->UseVisualStyleBackColor = true;
			this->Orderbutton->Click += gcnew System::EventHandler(this, &Form1::Order_button_Click);
			// 
			// Supplybutton
			// 
			this->Supplybutton->Location = System::Drawing::Point(15, 345);
			this->Supplybutton->Name = L"Supplybutton";
			this->Supplybutton->Size = System::Drawing::Size(200, 50);
			this->Supplybutton->TabIndex = 4;
			this->Supplybutton->Text = L"Supplies";
			this->Supplybutton->UseVisualStyleBackColor = true;
			this->Supplybutton->Click += gcnew System::EventHandler(this, &Form1::Supply_button_Click);
			// 
			// Statsbutton
			// 
			this->Statsbutton->Location = System::Drawing::Point(15, 410);
			this->Statsbutton->Name = L"Statsbutton";
			this->Statsbutton->Size = System::Drawing::Size(200, 50);
			this->Statsbutton->TabIndex = 5;
			this->Statsbutton->Text = L"Statistics";
			this->Statsbutton->UseVisualStyleBackColor = true;
			this->Statsbutton->Click += gcnew System::EventHandler(this, &Form1::Stats_button_Click);
			// 
			// Pannelmain
			// 
			this->Pannelmain->Controls->Add(this->Titlebox);
			this->Pannelmain->Location = System::Drawing::Point(230, 15);
			this->Pannelmain->Name = L"Pannelmain";
			this->Pannelmain->Size = System::Drawing::Size(640, 480);
			this->Pannelmain->TabIndex = 6;
			this->Pannelmain->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Pannelmain_Paint);
			// 
			// Titlebox
			// 
			this->Titlebox->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Titlebox->ReadOnly = true;
			this->Titlebox->BorderStyle = BorderStyle::None;
			this->Titlebox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->Titlebox->Location = System::Drawing::Point(10, 20);
			this->Titlebox->Name = L"Titlebox";
			this->Titlebox->Size = System::Drawing::Size(620, 40);
			this->Titlebox->TabIndex = 0;
			this->Titlebox->Text = L"Menu";
			this->Titlebox->TextChanged += gcnew System::EventHandler(this, &Form1::Titlebox_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 511);
			this->Controls->Add(this->Pannelmain);
			this->Controls->Add(this->Statsbutton);
			this->Controls->Add(this->Supplybutton);
			this->Controls->Add(this->Orderbutton);
			this->Controls->Add(this->Clientsbutton);
			this->Controls->Add(this->Stafbutton);
			this->Controls->Add(this->Homebutton);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaximumSize = System::Drawing::Size(900, 550);
			this->MinimumSize = System::Drawing::Size(900, 550);
			this->Name = L"Form1";
			this->Text = L"Gstorg";
			this->Pannelmain->ResumeLayout(false);
			this->Pannelmain->PerformLayout();
			this->ResumeLayout(false);
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void Home_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Pannelmain->Controls->Clear();
		this->Titlebox->Text = L"Menu";


	}
	private: System::Void Stats_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Pannelmain->Controls->Clear();
		Statsform^ Form = gcnew Statsform();
		Form->TopLevel = false;
		Pannelmain->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();

	}
	private: System::Void Staf_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Pannelmain->Controls->Clear();
		Stafform^ Form = gcnew Stafform();
		Form->TopLevel = false;
		Pannelmain->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();

	}
	private: System::Void Client_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Pannelmain->Controls->Clear();
		Clientform^ Form = gcnew Clientform();
		Form->TopLevel = false;
		Pannelmain->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();

	}
	private: System::Void Order_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Pannelmain->Controls->Clear();
		Ordersform^ Form = gcnew Ordersform();
		Form->TopLevel = false;
		Pannelmain->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();

	}
	private: System::Void Supply_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Pannelmain->Controls->Clear();
		Supplyform^ Form = gcnew Supplyform();
		Form->TopLevel = false;
		Pannelmain->Controls->Add(Form);
		Form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		Form->Dock = DockStyle::Fill;
		Form->Show();

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Titlebox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Pannelmain_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}
