#pragma once

namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ReadClientForm
	/// </summary>
	public ref class ReadClientForm : public System::Windows::Forms::Form
	{
	public:
		ReadClientForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReadClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ FirstNameBox;
	private: System::Windows::Forms::TextBox^ DisplayPersonnalinfoBox;
	private: System::Windows::Forms::TextBox^ DisplayID;
	private: System::Windows::Forms::Button^ SendButton;
	private: System::Windows::Forms::DataGridView^ DatagridClient;

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
			this->FirstNameBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPersonnalinfoBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayID = (gcnew System::Windows::Forms::TextBox());
			this->SendButton = (gcnew System::Windows::Forms::Button());
			this->DatagridClient = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DatagridClient))->BeginInit();
			this->SuspendLayout();
			// 
			// DatagridClient
			// 
			this->DatagridClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DatagridClient->Location = System::Drawing::Point(400, 80);
			this->DatagridClient->Name = L"dgv_enr";
			this->DatagridClient->Size = System::Drawing::Size(200, 200);
			this->DatagridClient->TabIndex = 0;
			this->DatagridClient->Visible = false;
			// 
			// FirstNameBox
			// 
			this->FirstNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstNameBox->Location = System::Drawing::Point(215, 150);
			this->FirstNameBox->Name = L"FirstNameBox";
			this->FirstNameBox->Size = System::Drawing::Size(100, 22);
			this->FirstNameBox->TabIndex = 0;
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
			this->DisplayID->Text = L"ID client :";
			// 
			// SendButton
			// 
			this->SendButton->Location = System::Drawing::Point(180, 210);
			this->SendButton->Name = L"SendButton";
			this->SendButton->Size = System::Drawing::Size(75, 23);
			this->SendButton->TabIndex = 41;
			this->SendButton->Text = L"Send";
			this->SendButton->UseVisualStyleBackColor = true;
			this->SendButton->Click += gcnew System::EventHandler(this, &ReadClientForm::SendButton_Click);

			// 
			// ReadClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 380);
			this->Controls->Add(this->DatagridClient);
			this->Controls->Add(this->SendButton);
			this->Controls->Add(this->DisplayID);
			this->Controls->Add(this->DisplayPersonnalinfoBox);
			this->Controls->Add(this->FirstNameBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ReadClientForm";
			this->Text = L"ReadClientForm";
			this->Load += gcnew System::EventHandler(this, &ReadClientForm::ReadClientForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DatagridClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void ReadClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SendButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DatagridClient->Visible = true;
		this->DatagridClient->Refresh();
	}
	};
}
