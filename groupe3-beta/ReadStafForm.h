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
	/// Summary for ReadStafForm
	/// </summary>
	public ref class ReadStafForm : public System::Windows::Forms::Form
	{
	public:
		ReadStafForm(void)
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
		~ReadStafForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ StaffIdBox;
	private: System::Windows::Forms::TextBox^ DisplayPersonnalinfoBox;
	private: System::Windows::Forms::TextBox^ DisplayID;
	private: System::Windows::Forms::Button^ SendButton;
	private: System::Windows::Forms::DataGridView^ DatagridStaff;
	private: NS_Comp_Svc_Staf::CLservicestaff^ oStaf;
	private: System::Data::DataSet^ oDs;
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
			this->StaffIdBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPersonnalinfoBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayID = (gcnew System::Windows::Forms::TextBox());
			this->SendButton = (gcnew System::Windows::Forms::Button());
			this->DatagridStaff = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DatagridStaff))->BeginInit();
			this->SuspendLayout();
			// 
			// DatagridStaff
			// 
			this->DatagridStaff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DatagridStaff->Location = System::Drawing::Point(400, 80);
			this->DatagridStaff->Name = L"DatagridStaff";
			this->DatagridStaff->Size = System::Drawing::Size(200, 200);
			this->DatagridStaff->TabIndex = 0;
			this->DatagridStaff->Visible = false;
			// 
			// StaffIdBox
			// 
			this->StaffIdBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StaffIdBox->Location = System::Drawing::Point(215, 150);
			this->StaffIdBox->Name = L"StaffIdBox";
			this->StaffIdBox->Size = System::Drawing::Size(100, 22);
			this->StaffIdBox->TabIndex = 0;
			// 
			// DisplayPersonnalinfoBox
			// 
			this->DisplayPersonnalinfoBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayPersonnalinfoBox->BorderStyle = BorderStyle::None;
			this->DisplayPersonnalinfoBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayPersonnalinfoBox->Location = System::Drawing::Point(150, 71);
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
			this->DisplayID->Location = System::Drawing::Point(130, 150);
			this->DisplayID->Name = L"DisplayID";
			this->DisplayID->ReadOnly = true;
			this->DisplayID->Size = System::Drawing::Size(70, 22);
			this->DisplayID->TabIndex = 15;
			this->DisplayID->Text = L"ID Staff :";
			// 
			// SendButton
			// 
			this->SendButton->Location = System::Drawing::Point(180, 210);
			this->SendButton->Name = L"SendButton";
			this->SendButton->Size = System::Drawing::Size(75, 23);
			this->SendButton->TabIndex = 17;
			this->SendButton->Text = L"Send";
			this->SendButton->UseVisualStyleBackColor = true;
			this->SendButton->Click += gcnew System::EventHandler(this, &ReadStafForm::SendButton_Click);
			// 
			// ReadStafForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 380);
			this->Controls->Add(this->DatagridStaff);
			this->Controls->Add(this->SendButton);
			this->Controls->Add(this->DisplayID);
			this->Controls->Add(this->DisplayPersonnalinfoBox);
			this->Controls->Add(this->StaffIdBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ReadStafForm";
			this->Text = L"ReadStafForm";
			this->Load += gcnew System::EventHandler(this, &ReadStafForm::ReadStafForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DatagridStaff))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void ReadStafForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oStaf = gcnew NS_Comp_Svc_Staf::CLservicestaff();
	}
	private: System::Void SendButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oDs = this->oStaf->SelectStaf("staff", System::Convert::ToInt32(this->StaffIdBox->Text));
		this->DatagridStaff->DataSource = this->oDs;
		this->DatagridStaff->DataMember = "staff";
		this->StaffIdBox->Clear();
		this->DatagridStaff->Visible = true;
		this->DatagridStaff->Refresh();
	}

	};
}
