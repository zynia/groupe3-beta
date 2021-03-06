#pragma once
#include "CLservicestaff.h"

namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteStaffForm
	/// </summary>
	public ref class DeleteStaffForm : public System::Windows::Forms::Form
	{
	public:
		DeleteStaffForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DeleteStaffForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ IDbox;
	private: System::Windows::Forms::TextBox^ DisplayPersonnalinfoBox;
	private: System::Windows::Forms::TextBox^ DisplayID;
	private: System::Windows::Forms::Button^ SendButton;

	private: NS_Comp_Svc_Staf::CLservicestaff^ oStaf;
	protected:

	protected:

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
			this->IDbox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPersonnalinfoBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayID = (gcnew System::Windows::Forms::TextBox());
			this->SendButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// IDbox
			// 
			this->IDbox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDbox->Location = System::Drawing::Point(315, 150);
			this->IDbox->Name = L"IDbox";
			this->IDbox->Size = System::Drawing::Size(100, 22);
			this->IDbox->TabIndex = 0;
			// 
			// DisplayPersonnalinfoBox
			// 
			this->DisplayPersonnalinfoBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayPersonnalinfoBox->BorderStyle = BorderStyle::None;
			this->DisplayPersonnalinfoBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayPersonnalinfoBox->Location = System::Drawing::Point(250, 70);
			this->DisplayPersonnalinfoBox->Name = L"DisplayPersonnalinfoBox";
			this->DisplayPersonnalinfoBox->ReadOnly = true;
			this->DisplayPersonnalinfoBox->Size = System::Drawing::Size(140, 29);
			this->DisplayPersonnalinfoBox->TabIndex = 14;
			this->DisplayPersonnalinfoBox->Text = L"Personal Info";
			// 
			// DisplayID
			// 
			this->DisplayID->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayID->BorderStyle = BorderStyle::None;
			this->DisplayID->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayID->Location = System::Drawing::Point(215, 150);
			this->DisplayID->Name = L"DisplayID";
			this->DisplayID->ReadOnly = true;
			this->DisplayID->Size = System::Drawing::Size(90, 22);
			this->DisplayID->TabIndex = 15;
			this->DisplayID->Text = L"ID Staff :";
			// 
			// SendButton
			// 
			this->SendButton->Location = System::Drawing::Point(275, 225);
			this->SendButton->Name = L"SendButton";
			this->SendButton->Size = System::Drawing::Size(75, 23);
			this->SendButton->TabIndex = 16;
			this->SendButton->Text = L"Send";
			this->SendButton->UseVisualStyleBackColor = true;
			this->SendButton->Click += gcnew System::EventHandler(this, &DeleteStaffForm::DeleteStaffForm_Click);
			// 
			// DeleteStaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 380);
			this->Controls->Add(this->SendButton);
			this->Controls->Add(this->DisplayID);
			this->Controls->Add(this->DisplayPersonnalinfoBox);
			this->Controls->Add(this->IDbox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DeleteStaffForm";
			this->Text = L"DeleteStaffForm";
			this->Load += gcnew System::EventHandler(this, &DeleteStaffForm::DeleteStaffForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void DeleteStaffForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oStaf = gcnew NS_Comp_Svc_Staf::CLservicestaff();
	}
	private: System::Void DeleteStaffForm_Click(System::Object^ sender, System::EventArgs^ e) {
		this->IDbox->Clear();
		this->oStaf->DeleteStaf(System::Convert::ToInt32(this->IDbox->Text));
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}

	};
}
