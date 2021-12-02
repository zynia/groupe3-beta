#pragma once
#include "CLservicesupply.h"

namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteSupplyForm
	/// </summary>
	public ref class DeleteSupplyForm : public System::Windows::Forms::Form
	{
	public:
		DeleteSupplyForm(void)
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
		~DeleteSupplyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ IDbox;
	private: System::Windows::Forms::TextBox^ DisplaySupplyinfoBox;
	private: System::Windows::Forms::TextBox^ DisplayID;
	private: System::Windows::Forms::Button^ SendButton;


	private: NS_Comp_Svc_Supply::CLservicesupply^ oSup;

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
			this->IDbox = (gcnew System::Windows::Forms::TextBox());
			this->DisplaySupplyinfoBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayID = (gcnew System::Windows::Forms::TextBox());
			this->SendButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// IDbox
			// 
			this->IDbox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDbox->Location = System::Drawing::Point(315, 151);
			this->IDbox->Name = L"IDbox";
			this->IDbox->Size = System::Drawing::Size(100, 22);
			this->IDbox->TabIndex = 0;
			// 
			// DisplaySupplyinfoBox
			// 
			this->DisplaySupplyinfoBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplaySupplyinfoBox->BorderStyle = BorderStyle::None;
			this->DisplaySupplyinfoBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplaySupplyinfoBox->Location = System::Drawing::Point(250, 71);
			this->DisplaySupplyinfoBox->Name = L"DisplaySupplyinfoBox";
			this->DisplaySupplyinfoBox->ReadOnly = true;
			this->DisplaySupplyinfoBox->Size = System::Drawing::Size(140, 29);
			this->DisplaySupplyinfoBox->TabIndex = 14;
			this->DisplaySupplyinfoBox->Text = L"Supply Info";
			// 
			// DisplayID
			// 
			this->DisplayID->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayID->BorderStyle = BorderStyle::None;
			this->DisplayID->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayID->Location = System::Drawing::Point(215, 151);
			this->DisplayID->Name = L"DisplayID";
			this->DisplayID->ReadOnly = true;
			this->DisplayID->Size = System::Drawing::Size(90, 22);
			this->DisplayID->TabIndex = 15;
			this->DisplayID->Text = L"ID Order :";
			// 
			// SendButton
			// 
			this->SendButton->Location = System::Drawing::Point(280, 215);
			this->SendButton->Name = L"SendButton";
			this->SendButton->Size = System::Drawing::Size(75, 23);
			this->SendButton->TabIndex = 41;
			this->SendButton->Text = L"Send";
			this->SendButton->UseVisualStyleBackColor = true;
			this->SendButton->Click += gcnew System::EventHandler(this, &DeleteSupplyForm::DeleteSupplyForm_Click);
			// 
			// DeleteSupplyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 380);
			this->Controls->Add(this->SendButton);
			this->Controls->Add(this->DisplayID);
			this->Controls->Add(this->DisplaySupplyinfoBox);
			this->Controls->Add(this->IDbox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DeleteSupplyForm";
			this->Text = L"DeleteSupplyForm";
			this->Load += gcnew System::EventHandler(this, &DeleteSupplyForm::DeleteSupplyForm_load);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void DeleteSupplyForm_load(System::Object^ sender, System::EventArgs^ e) {
		this->oSup = gcnew NS_Comp_Svc_Supply::CLservicesupply();
	}
	private: System::Void DeleteSupplyForm_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSup->DeleteSupply(System::Convert::ToInt32(this->IDbox->Text));
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	};
}
