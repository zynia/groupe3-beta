#pragma once

namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateStafForm
	/// </summary>
	public ref class CreateStafForm : public System::Windows::Forms::Form
	{
	public:
		CreateStafForm(void)
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
		~CreateStafForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ FirstNameBox;
	private: System::Windows::Forms::TextBox^ LastNameBox;
	private: System::Windows::Forms::TextBox^ BirthdateBox;
	private: System::Windows::Forms::TextBox^ HiringDateBox;
	private: System::Windows::Forms::TextBox^ SupervisorBox;
	private: System::Windows::Forms::TextBox^ StreetNameBox;
	private: System::Windows::Forms::TextBox^ StreetNumberBox;
	private: System::Windows::Forms::TextBox^ ResidencyNameBox;
	private: System::Windows::Forms::TextBox^ FloorNumberBox;
	private: System::Windows::Forms::TextBox^ ComplementBox;
	private: System::Windows::Forms::TextBox^ CityNameBox;
	private: System::Windows::Forms::TextBox^ PostCodeBox;
	private: System::Windows::Forms::TextBox^ DisplayAdressBox;
	private: System::Windows::Forms::TextBox^ DisplayPersonnalinfoBox;
	private: System::Windows::Forms::TextBox^ DisplayFirstName;
	private: System::Windows::Forms::TextBox^ DisplayLastname;
	private: System::Windows::Forms::TextBox^ DisplayBirthDate;
	private: System::Windows::Forms::TextBox^ DisplayHiringDate;
	private: System::Windows::Forms::TextBox^ DisplaySupervisorId;
	private: System::Windows::Forms::TextBox^ DisplayStreetName;
	private: System::Windows::Forms::TextBox^ DisplayStreetNumber;
	private: System::Windows::Forms::TextBox^ DisplayResidencyname;
	private: System::Windows::Forms::TextBox^ DisplayBuildingName;
	private: System::Windows::Forms::TextBox^ DisplayFloorNumber;
	private: System::Windows::Forms::TextBox^ DisplayComplement;
	private: System::Windows::Forms::TextBox^ DisplayCityName;

	private: System::Windows::Forms::TextBox^ BuildingNameBox;

	private: System::Windows::Forms::TextBox^ DisplayPostcode;
	private: System::Windows::Forms::Button^ SendButton;




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
			this->FirstNameBox = (gcnew System::Windows::Forms::TextBox());
			this->LastNameBox = (gcnew System::Windows::Forms::TextBox());
			this->BirthdateBox = (gcnew System::Windows::Forms::TextBox());
			this->HiringDateBox = (gcnew System::Windows::Forms::TextBox());
			this->SupervisorBox = (gcnew System::Windows::Forms::TextBox());
			this->StreetNameBox = (gcnew System::Windows::Forms::TextBox());
			this->StreetNumberBox = (gcnew System::Windows::Forms::TextBox());
			this->ResidencyNameBox = (gcnew System::Windows::Forms::TextBox());
			this->FloorNumberBox = (gcnew System::Windows::Forms::TextBox());
			this->ComplementBox = (gcnew System::Windows::Forms::TextBox());
			this->CityNameBox = (gcnew System::Windows::Forms::TextBox());
			this->PostCodeBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayAdressBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPersonnalinfoBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayFirstName = (gcnew System::Windows::Forms::TextBox());
			this->DisplayLastname = (gcnew System::Windows::Forms::TextBox());
			this->DisplayBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->DisplayHiringDate = (gcnew System::Windows::Forms::TextBox());
			this->DisplaySupervisorId = (gcnew System::Windows::Forms::TextBox());
			this->DisplayStreetName = (gcnew System::Windows::Forms::TextBox());
			this->DisplayStreetNumber = (gcnew System::Windows::Forms::TextBox());
			this->DisplayResidencyname = (gcnew System::Windows::Forms::TextBox());
			this->DisplayBuildingName = (gcnew System::Windows::Forms::TextBox());
			this->DisplayFloorNumber = (gcnew System::Windows::Forms::TextBox());
			this->DisplayComplement = (gcnew System::Windows::Forms::TextBox());
			this->DisplayCityName = (gcnew System::Windows::Forms::TextBox());
			this->BuildingNameBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPostcode = (gcnew System::Windows::Forms::TextBox());
			this->SendButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// FirstNameBox
			// 
			this->FirstNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstNameBox->Location = System::Drawing::Point(490, 100);
			this->FirstNameBox->Name = L"FirstNameBox";
			this->FirstNameBox->Size = System::Drawing::Size(100, 22);
			this->FirstNameBox->TabIndex = 0;
			this->FirstNameBox->TextChanged += gcnew System::EventHandler(this, &CreateStafForm::FirstNameBox_TextChanged);
			// 
			// LastNameBox
			// 
			this->LastNameBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastNameBox->Location = System::Drawing::Point(490, 137);
			this->LastNameBox->Name = L"LastNameBox";
			this->LastNameBox->Size = System::Drawing::Size(100, 22);
			this->LastNameBox->TabIndex = 1;
			// 
			// BirthdateBox
			// 
			this->BirthdateBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BirthdateBox->Location = System::Drawing::Point(490, 174);
			this->BirthdateBox->Name = L"BirthdateBox";
			this->BirthdateBox->Size = System::Drawing::Size(100, 22);
			this->BirthdateBox->TabIndex = 2;
			// 
			// HiringDateBox
			// 
			this->HiringDateBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HiringDateBox->Location = System::Drawing::Point(490, 211);
			this->HiringDateBox->Name = L"HiringDateBox";
			this->HiringDateBox->Size = System::Drawing::Size(100, 22);
			this->HiringDateBox->TabIndex = 3;
			// 
			// SupervisorBox
			// 
			this->SupervisorBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SupervisorBox->Location = System::Drawing::Point(490, 246);
			this->SupervisorBox->Name = L"SupervisorBox";
			this->SupervisorBox->Size = System::Drawing::Size(100, 22);
			this->SupervisorBox->TabIndex = 4;
			// 
			// StreetNameBox
			// 
			this->StreetNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetNameBox->Location = System::Drawing::Point(170, 84);
			this->StreetNameBox->Name = L"StreetNameBox";
			this->StreetNameBox->Size = System::Drawing::Size(130, 22);
			this->StreetNameBox->TabIndex = 5;
			// 
			// StreetNumberBox
			// 
			this->StreetNumberBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetNumberBox->Location = System::Drawing::Point(170, 116);
			this->StreetNumberBox->Name = L"StreetNumberBox";
			this->StreetNumberBox->Size = System::Drawing::Size(130, 22);
			this->StreetNumberBox->TabIndex = 6;
			// 
			// ResidencyNameBox
			// 
			this->ResidencyNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResidencyNameBox->Location = System::Drawing::Point(170, 148);
			this->ResidencyNameBox->Name = L"ResidencyNameBox";
			this->ResidencyNameBox->Size = System::Drawing::Size(130, 22);
			this->ResidencyNameBox->TabIndex = 7;
			// 
			// FloorNumberBox
			// 
			this->FloorNumberBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FloorNumberBox->Location = System::Drawing::Point(170, 212);
			this->FloorNumberBox->Name = L"FloorNumberBox";
			this->FloorNumberBox->Size = System::Drawing::Size(130, 22);
			this->FloorNumberBox->TabIndex = 8;
			// 
			// ComplementBox
			// 
			this->ComplementBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComplementBox->Location = System::Drawing::Point(170, 246);
			this->ComplementBox->Name = L"ComplementBox";
			this->ComplementBox->Size = System::Drawing::Size(130, 22);
			this->ComplementBox->TabIndex = 9;
			// 
			// CityNameBox
			// 
			this->CityNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityNameBox->Location = System::Drawing::Point(170, 276);
			this->CityNameBox->Name = L"CityNameBox";
			this->CityNameBox->Size = System::Drawing::Size(130, 22);
			this->CityNameBox->TabIndex = 10;
			// 
			// PostCodeBox
			// 
			this->PostCodeBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PostCodeBox->Location = System::Drawing::Point(170, 308);
			this->PostCodeBox->Name = L"PostCodeBox";
			this->PostCodeBox->Size = System::Drawing::Size(130, 22);
			this->PostCodeBox->TabIndex = 11;
			this->PostCodeBox->TextChanged += gcnew System::EventHandler(this, &CreateStafForm::textBox1_TextChanged);
			// 
			// DisplayAdressBox
			// 
			this->DisplayAdressBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayAdressBox->BorderStyle = BorderStyle::None;
			this->DisplayAdressBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayAdressBox->Location = System::Drawing::Point(125, 40);
			this->DisplayAdressBox->Name = L"DisplayAdressBox";
			this->DisplayAdressBox->ReadOnly = true;
			this->DisplayAdressBox->Size = System::Drawing::Size(100, 29);
			this->DisplayAdressBox->TabIndex = 13;
			this->DisplayAdressBox->Text = L"Address";
			// 
			// DisplayPersonnalinfoBox
			// 
			this->DisplayPersonnalinfoBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayPersonnalinfoBox->BorderStyle = BorderStyle::None;
			this->DisplayPersonnalinfoBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayPersonnalinfoBox->Location = System::Drawing::Point(425, 40);
			this->DisplayPersonnalinfoBox->Name = L"DisplayPersonnalinfoBox";
			this->DisplayPersonnalinfoBox->ReadOnly = true;
			this->DisplayPersonnalinfoBox->Size = System::Drawing::Size(140, 29);
			this->DisplayPersonnalinfoBox->TabIndex = 14;
			this->DisplayPersonnalinfoBox->Text = L"Personal Info";
			// 
			// DisplayFirstName
			// 
			this->DisplayFirstName->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayFirstName->BorderStyle = BorderStyle::None;
			this->DisplayFirstName->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayFirstName->Location = System::Drawing::Point(390, 100);
			this->DisplayFirstName->Name = L"DisplayFirstName";
			this->DisplayFirstName->ReadOnly = true;
			this->DisplayFirstName->Size = System::Drawing::Size(90, 22);
			this->DisplayFirstName->TabIndex = 15;
			this->DisplayFirstName->Text = L"First name :";
			// 
			// DisplayLastname
			// 
			this->DisplayLastname->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayLastname->BorderStyle = BorderStyle::None;
			this->DisplayLastname->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayLastname->Location = System::Drawing::Point(390, 137);
			this->DisplayLastname->Name = L"DisplayLastname";
			this->DisplayLastname->ReadOnly = true;
			this->DisplayLastname->Size = System::Drawing::Size(90, 22);
			this->DisplayLastname->TabIndex = 16;
			this->DisplayLastname->Text = L"Last name :";
			// 
			// DisplayBirthDate
			// 
			this->DisplayBirthDate->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayBirthDate->BorderStyle = BorderStyle::None;
			this->DisplayBirthDate->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayBirthDate->Location = System::Drawing::Point(390, 174);
			this->DisplayBirthDate->Name = L"DisplayBirthDate";
			this->DisplayBirthDate->ReadOnly = true;
			this->DisplayBirthDate->Size = System::Drawing::Size(90, 22);
			this->DisplayBirthDate->TabIndex = 17;
			this->DisplayBirthDate->Text = L"Birth date :";
			// 
			// DisplayHiringDate
			// 
			this->DisplayHiringDate->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayHiringDate->BorderStyle = BorderStyle::None;
			this->DisplayHiringDate->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayHiringDate->Location = System::Drawing::Point(390, 211);
			this->DisplayHiringDate->Name = L"DisplayHiringDate";
			this->DisplayHiringDate->ReadOnly = true;
			this->DisplayHiringDate->Size = System::Drawing::Size(90, 22);
			this->DisplayHiringDate->TabIndex = 18;
			this->DisplayHiringDate->Text = L"Hiring date :";
			// 
			// DisplaySupervisorId
			// 
			this->DisplaySupervisorId->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplaySupervisorId->BorderStyle = BorderStyle::None;
			this->DisplaySupervisorId->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplaySupervisorId->Location = System::Drawing::Point(390, 246);
			this->DisplaySupervisorId->Name = L"DisplaySupervisorId";
			this->DisplaySupervisorId->ReadOnly = true;
			this->DisplaySupervisorId->Size = System::Drawing::Size(90, 22);
			this->DisplaySupervisorId->TabIndex = 19;
			this->DisplaySupervisorId->Text = L"ID supervisor :";
			// 
			// DisplayStreetName
			// 
			this->DisplayStreetName->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayStreetName->BorderStyle = BorderStyle::None;
			this->DisplayStreetName->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayStreetName->Location = System::Drawing::Point(50, 84);
			this->DisplayStreetName->Name = L"DisplayStreetName";
			this->DisplayStreetName->ReadOnly = true;
			this->DisplayStreetName->Size = System::Drawing::Size(110, 22);
			this->DisplayStreetName->TabIndex = 20;
			this->DisplayStreetName->Text = L"Street name :";
			// 
			// DisplayStreetNumber
			// 
			this->DisplayStreetNumber->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayStreetNumber->BorderStyle = BorderStyle::None;
			this->DisplayStreetNumber->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayStreetNumber->Location = System::Drawing::Point(50, 116);
			this->DisplayStreetNumber->Name = L"DisplayStreetNumber";
			this->DisplayStreetNumber->ReadOnly = true;
			this->DisplayStreetNumber->Size = System::Drawing::Size(110, 22);
			this->DisplayStreetNumber->TabIndex = 21;
			this->DisplayStreetNumber->Text = L"Street number :";
			// 
			// DisplayResidencyname
			// 
			this->DisplayResidencyname->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayResidencyname->BorderStyle = BorderStyle::None;
			this->DisplayResidencyname->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayResidencyname->Location = System::Drawing::Point(50, 148);
			this->DisplayResidencyname->Name = L"DisplayResidencyname";
			this->DisplayResidencyname->ReadOnly = true;
			this->DisplayResidencyname->Size = System::Drawing::Size(110, 22);
			this->DisplayResidencyname->TabIndex = 22;
			this->DisplayResidencyname->Text = L"Residency name :";
			// 
			// DisplayBuildingName
			// 
			this->DisplayBuildingName->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayBuildingName->BorderStyle = BorderStyle::None;
			this->DisplayBuildingName->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayBuildingName->Location = System::Drawing::Point(50, 180);
			this->DisplayBuildingName->Name = L"DisplayBuildingName";
			this->DisplayBuildingName->ReadOnly = true;
			this->DisplayBuildingName->Size = System::Drawing::Size(110, 22);
			this->DisplayBuildingName->TabIndex = 23;
			this->DisplayBuildingName->Text = L"Building name :";
			// 
			// DisplayFloorNumber
			// 
			this->DisplayFloorNumber->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayFloorNumber->BorderStyle = BorderStyle::None;
			this->DisplayFloorNumber->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayFloorNumber->Location = System::Drawing::Point(50, 212);
			this->DisplayFloorNumber->Name = L"DisplayFloorNumber";
			this->DisplayFloorNumber->ReadOnly = true;
			this->DisplayFloorNumber->Size = System::Drawing::Size(110, 22);
			this->DisplayFloorNumber->TabIndex = 24;
			this->DisplayFloorNumber->Text = L"Floor number  :";
			// 
			// DisplayComplement
			// 
			this->DisplayComplement->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayComplement->BorderStyle = BorderStyle::None;
			this->DisplayComplement->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayComplement->Location = System::Drawing::Point(50, 246);
			this->DisplayComplement->Name = L"DisplayComplement";
			this->DisplayComplement->ReadOnly = true;
			this->DisplayComplement->Size = System::Drawing::Size(110, 22);
			this->DisplayComplement->TabIndex = 25;
			this->DisplayComplement->Text = L"Complement :";
			// 
			// DisplayCityName
			// 
			this->DisplayCityName->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayCityName->BorderStyle = BorderStyle::None;
			this->DisplayCityName->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayCityName->Location = System::Drawing::Point(50, 276);
			this->DisplayCityName->Name = L"DisplayCityName";
			this->DisplayCityName->ReadOnly = true;
			this->DisplayCityName->Size = System::Drawing::Size(110, 22);
			this->DisplayCityName->TabIndex = 26;
			this->DisplayCityName->Text = L"City name :";
			// 
			// BuildingNameBox
			// 
			this->BuildingNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuildingNameBox->Location = System::Drawing::Point(170, 180);
			this->BuildingNameBox->Name = L"BuildingNameBox";
			this->BuildingNameBox->Size = System::Drawing::Size(130, 22);
			this->BuildingNameBox->TabIndex = 28;
			// 
			// DisplayPostcode
			// 
			this->DisplayPostcode->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayPostcode->BorderStyle = BorderStyle::None;
			this->DisplayPostcode->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayPostcode->Location = System::Drawing::Point(50, 308);
			this->DisplayPostcode->Name = L"DisplayPostcode";
			this->DisplayPostcode->ReadOnly = true;
			this->DisplayPostcode->Size = System::Drawing::Size(110, 22);
			this->DisplayPostcode->TabIndex = 30;
			this->DisplayPostcode->Text = L"Post code  :";
			// 
			// SendButton
			// 
			this->SendButton->Location = System::Drawing::Point(450, 308);
			this->SendButton->Name = L"SendButton";
			this->SendButton->Size = System::Drawing::Size(75, 23);
			this->SendButton->TabIndex = 31;
			this->SendButton->Text = L"Send";
			this->SendButton->UseVisualStyleBackColor = true;
			// 
			// CreateStafForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 380);
			this->Controls->Add(this->SendButton);
			this->Controls->Add(this->DisplayPostcode);
			this->Controls->Add(this->BuildingNameBox);
			this->Controls->Add(this->DisplayCityName);
			this->Controls->Add(this->DisplayComplement);
			this->Controls->Add(this->DisplayFloorNumber);
			this->Controls->Add(this->DisplayBuildingName);
			this->Controls->Add(this->DisplayResidencyname);
			this->Controls->Add(this->DisplayStreetNumber);
			this->Controls->Add(this->DisplayStreetName);
			this->Controls->Add(this->DisplaySupervisorId);
			this->Controls->Add(this->DisplayHiringDate);
			this->Controls->Add(this->DisplayBirthDate);
			this->Controls->Add(this->DisplayLastname);
			this->Controls->Add(this->DisplayFirstName);
			this->Controls->Add(this->DisplayPersonnalinfoBox);
			this->Controls->Add(this->DisplayAdressBox);
			this->Controls->Add(this->PostCodeBox);
			this->Controls->Add(this->CityNameBox);
			this->Controls->Add(this->ComplementBox);
			this->Controls->Add(this->FloorNumberBox);
			this->Controls->Add(this->ResidencyNameBox);
			this->Controls->Add(this->StreetNumberBox);
			this->Controls->Add(this->StreetNameBox);
			this->Controls->Add(this->SupervisorBox);
			this->Controls->Add(this->HiringDateBox);
			this->Controls->Add(this->BirthdateBox);
			this->Controls->Add(this->LastNameBox);
			this->Controls->Add(this->FirstNameBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateStafForm";
			this->Text = L"CreateStafForm";
			this->Load += gcnew System::EventHandler(this, &CreateStafForm::CreateStafForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void CreateStafForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void FirstNameBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
