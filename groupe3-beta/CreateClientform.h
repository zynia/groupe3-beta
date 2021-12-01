#pragma once
#include "CLservicesclient.h"

namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateClientForm
	/// </summary>
	public ref class CreateClientForm : public System::Windows::Forms::Form
	{
	public:
		CreateClientForm(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateClientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ FirstNameBox;
	private: System::Windows::Forms::TextBox^ LastNameBox;
	private: System::Windows::Forms::TextBox^ BirthdateBox;
	private: System::Windows::Forms::TextBox^ StreetNameBoxBilling;
	private: System::Windows::Forms::TextBox^ StreetNumberBoxBilling;
	private: System::Windows::Forms::TextBox^ ResidencyNameBoxBilling;
	private: System::Windows::Forms::TextBox^ FloorNumberBoxBilling;
	private: System::Windows::Forms::TextBox^ ComplementBoxBilling;
	private: System::Windows::Forms::TextBox^ CityNameBoxBilling;
	private: System::Windows::Forms::TextBox^ PostCodeBoxBilling;
	private: System::Windows::Forms::TextBox^ DisplayAdressBox;
	private: System::Windows::Forms::TextBox^ DisplayPersonnalinfoBox;
	private: System::Windows::Forms::TextBox^ DisplayFirstName;
	private: System::Windows::Forms::TextBox^ DisplayLastname;
	private: System::Windows::Forms::TextBox^ DisplayBirthDate;
	private: System::Windows::Forms::TextBox^ DisplayStreetName;
	private: System::Windows::Forms::TextBox^ DisplayStreetNumber;
	private: System::Windows::Forms::TextBox^ DisplayResidencyname;
	private: System::Windows::Forms::TextBox^ DisplayBuildingName;
	private: System::Windows::Forms::TextBox^ DisplayFloorNumber;
	private: System::Windows::Forms::TextBox^ DisplayComplement;
	private: System::Windows::Forms::TextBox^ DisplayCityName;
	private: System::Windows::Forms::TextBox^ BuildingNameBoxBilling;
	private: System::Windows::Forms::TextBox^ DisplayPostcode;
	private: System::Windows::Forms::TextBox^ StreetNameBoxShipping;
	private: System::Windows::Forms::TextBox^ StreetNumberBoxShipping;
	private: System::Windows::Forms::TextBox^ ResidencyNameBoxShipping;
	private: System::Windows::Forms::TextBox^ BuildingNameBoxShipping;
	private: System::Windows::Forms::TextBox^ FloorNumberBoxShipping;
	private: System::Windows::Forms::TextBox^ ComplementBoxShipping;
	private: System::Windows::Forms::TextBox^ CityNameBoxShipping;
	private: System::Windows::Forms::TextBox^ PostCodeBoxShipping;
	private: System::Windows::Forms::Button^ SendButton;

	private: NS_Comp_Svc_Cli::CLservicesClient^ oCli;

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
			this->StreetNameBoxBilling = (gcnew System::Windows::Forms::TextBox());
			this->StreetNumberBoxBilling = (gcnew System::Windows::Forms::TextBox());
			this->ResidencyNameBoxBilling = (gcnew System::Windows::Forms::TextBox());
			this->FloorNumberBoxBilling = (gcnew System::Windows::Forms::TextBox());
			this->ComplementBoxBilling = (gcnew System::Windows::Forms::TextBox());
			this->CityNameBoxBilling = (gcnew System::Windows::Forms::TextBox());
			this->PostCodeBoxBilling = (gcnew System::Windows::Forms::TextBox());
			this->DisplayAdressBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPersonnalinfoBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayFirstName = (gcnew System::Windows::Forms::TextBox());
			this->DisplayLastname = (gcnew System::Windows::Forms::TextBox());
			this->DisplayBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->DisplayStreetName = (gcnew System::Windows::Forms::TextBox());
			this->DisplayStreetNumber = (gcnew System::Windows::Forms::TextBox());
			this->DisplayResidencyname = (gcnew System::Windows::Forms::TextBox());
			this->DisplayBuildingName = (gcnew System::Windows::Forms::TextBox());
			this->DisplayFloorNumber = (gcnew System::Windows::Forms::TextBox());
			this->DisplayComplement = (gcnew System::Windows::Forms::TextBox());
			this->DisplayCityName = (gcnew System::Windows::Forms::TextBox());
			this->BuildingNameBoxBilling = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPostcode = (gcnew System::Windows::Forms::TextBox());
			this->StreetNameBoxShipping = (gcnew System::Windows::Forms::TextBox());
			this->StreetNumberBoxShipping = (gcnew System::Windows::Forms::TextBox());
			this->ResidencyNameBoxShipping = (gcnew System::Windows::Forms::TextBox());
			this->BuildingNameBoxShipping = (gcnew System::Windows::Forms::TextBox());
			this->FloorNumberBoxShipping = (gcnew System::Windows::Forms::TextBox());
			this->ComplementBoxShipping = (gcnew System::Windows::Forms::TextBox());
			this->CityNameBoxShipping = (gcnew System::Windows::Forms::TextBox());
			this->PostCodeBoxShipping = (gcnew System::Windows::Forms::TextBox());
			this->SendButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// FirstNameBox
			// 
			this->FirstNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstNameBox->Location = System::Drawing::Point(520, 106);
			this->FirstNameBox->Name = L"FirstNameBox";
			this->FirstNameBox->Size = System::Drawing::Size(100, 22);
			this->FirstNameBox->TabIndex = 0;
			this->FirstNameBox->TextChanged += gcnew System::EventHandler(this, &CreateClientForm::FirstNameBox_TextChanged);
			// 
			// LastNameBox
			// 
			this->LastNameBox->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastNameBox->Location = System::Drawing::Point(520, 143);
			this->LastNameBox->Name = L"LastNameBox";
			this->LastNameBox->Size = System::Drawing::Size(100, 22);
			this->LastNameBox->TabIndex = 1;
			// 
			// BirthdateBox
			// 
			this->BirthdateBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BirthdateBox->Location = System::Drawing::Point(520, 180);
			this->BirthdateBox->Name = L"BirthdateBox";
			this->BirthdateBox->Size = System::Drawing::Size(100, 22);
			this->BirthdateBox->TabIndex = 2;
			// 
			// StreetNameBoxBilling
			// 
			this->StreetNameBoxBilling->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetNameBoxBilling->Location = System::Drawing::Point(140, 84);
			this->StreetNameBoxBilling->Name = L"StreetNameBoxBilling";
			this->StreetNameBoxBilling->Size = System::Drawing::Size(130, 22);
			this->StreetNameBoxBilling->TabIndex = 5;
			// 
			// StreetNumberBoxBilling
			// 
			this->StreetNumberBoxBilling->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetNumberBoxBilling->Location = System::Drawing::Point(140, 116);
			this->StreetNumberBoxBilling->Name = L"StreetNumberBoxBilling";
			this->StreetNumberBoxBilling->Size = System::Drawing::Size(130, 22);
			this->StreetNumberBoxBilling->TabIndex = 6;
			// 
			// ResidencyNameBoxBilling
			// 
			this->ResidencyNameBoxBilling->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResidencyNameBoxBilling->Location = System::Drawing::Point(140, 148);
			this->ResidencyNameBoxBilling->Name = L"ResidencyNameBoxBilling";
			this->ResidencyNameBoxBilling->Size = System::Drawing::Size(130, 22);
			this->ResidencyNameBoxBilling->TabIndex = 7;
			// 
			// FloorNumberBoxBilling
			// 
			this->FloorNumberBoxBilling->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FloorNumberBoxBilling->Location = System::Drawing::Point(140, 212);
			this->FloorNumberBoxBilling->Name = L"FloorNumberBoxBilling";
			this->FloorNumberBoxBilling->Size = System::Drawing::Size(130, 22);
			this->FloorNumberBoxBilling->TabIndex = 8;
			// 
			// ComplementBoxBilling
			// 
			this->ComplementBoxBilling->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComplementBoxBilling->Location = System::Drawing::Point(140, 246);
			this->ComplementBoxBilling->Name = L"ComplementBoxBilling";
			this->ComplementBoxBilling->Size = System::Drawing::Size(130, 22);
			this->ComplementBoxBilling->TabIndex = 9;
			// 
			// CityNameBoxBilling
			// 
			this->CityNameBoxBilling->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityNameBoxBilling->Location = System::Drawing::Point(140, 276);
			this->CityNameBoxBilling->Name = L"CityNameBoxBilling";
			this->CityNameBoxBilling->Size = System::Drawing::Size(130, 22);
			this->CityNameBoxBilling->TabIndex = 10;
			// 
			// PostCodeBoxBilling
			// 
			this->PostCodeBoxBilling->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PostCodeBoxBilling->Location = System::Drawing::Point(140, 308);
			this->PostCodeBoxBilling->Name = L"PostCodeBoxBilling";
			this->PostCodeBoxBilling->Size = System::Drawing::Size(130, 22);
			this->PostCodeBoxBilling->TabIndex = 11;
			this->PostCodeBoxBilling->TextChanged += gcnew System::EventHandler(this, &CreateClientForm::textBox1_TextChanged);
			// 
			// DisplayAdressBox
			// 
			this->DisplayAdressBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayAdressBox->BorderStyle = BorderStyle::None;
			this->DisplayAdressBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayAdressBox->Location = System::Drawing::Point(25, 40);
			this->DisplayAdressBox->Name = L"DisplayAdressBox";
			this->DisplayAdressBox->ReadOnly = true;
			this->DisplayAdressBox->Size = System::Drawing::Size(381, 29);
			this->DisplayAdressBox->TabIndex = 13;
			this->DisplayAdressBox->Text = L"Addresses :        Billing      /     Shipping";
			// 
			// DisplayPersonnalinfoBox
			// 
			this->DisplayPersonnalinfoBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayPersonnalinfoBox->BorderStyle = BorderStyle::None;
			this->DisplayPersonnalinfoBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayPersonnalinfoBox->Location = System::Drawing::Point(455, 40);
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
			this->DisplayFirstName->Location = System::Drawing::Point(420, 106);
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
			this->DisplayLastname->Location = System::Drawing::Point(420, 143);
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
			this->DisplayBirthDate->Location = System::Drawing::Point(420, 180);
			this->DisplayBirthDate->Name = L"DisplayBirthDate";
			this->DisplayBirthDate->ReadOnly = true;
			this->DisplayBirthDate->Size = System::Drawing::Size(90, 22);
			this->DisplayBirthDate->TabIndex = 17;
			this->DisplayBirthDate->Text = L"Birth date :";
			// 
			// DisplayStreetName
			// 
			this->DisplayStreetName->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayStreetName->BorderStyle = BorderStyle::None;
			this->DisplayStreetName->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayStreetName->Location = System::Drawing::Point(20, 84);
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
			this->DisplayStreetNumber->Location = System::Drawing::Point(20, 116);
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
			this->DisplayResidencyname->Location = System::Drawing::Point(20, 148);
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
			this->DisplayBuildingName->Location = System::Drawing::Point(20, 180);
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
			this->DisplayFloorNumber->Location = System::Drawing::Point(20, 212);
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
			this->DisplayComplement->Location = System::Drawing::Point(20, 246);
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
			this->DisplayCityName->Location = System::Drawing::Point(20, 276);
			this->DisplayCityName->Name = L"DisplayCityName";
			this->DisplayCityName->ReadOnly = true;
			this->DisplayCityName->Size = System::Drawing::Size(110, 22);
			this->DisplayCityName->TabIndex = 26;
			this->DisplayCityName->Text = L"City name :";
			// 
			// BuildingNameBoxBilling
			// 
			this->BuildingNameBoxBilling->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuildingNameBoxBilling->Location = System::Drawing::Point(140, 180);
			this->BuildingNameBoxBilling->Name = L"BuildingNameBoxBilling";
			this->BuildingNameBoxBilling->Size = System::Drawing::Size(130, 22);
			this->BuildingNameBoxBilling->TabIndex = 28;
			// 
			// DisplayPostcode
			// 
			this->DisplayPostcode->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayPostcode->BorderStyle = BorderStyle::None;
			this->DisplayPostcode->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayPostcode->Location = System::Drawing::Point(20, 308);
			this->DisplayPostcode->Name = L"DisplayPostcode";
			this->DisplayPostcode->ReadOnly = true;
			this->DisplayPostcode->Size = System::Drawing::Size(110, 22);
			this->DisplayPostcode->TabIndex = 30;
			this->DisplayPostcode->Text = L"Post code  :";
			// 
			// StreetNameBoxShipping
			// 
			this->StreetNameBoxShipping->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetNameBoxShipping->Location = System::Drawing::Point(276, 84);
			this->StreetNameBoxShipping->Name = L"StreetNameBoxShipping";
			this->StreetNameBoxShipping->Size = System::Drawing::Size(130, 22);
			this->StreetNameBoxShipping->TabIndex = 31;
			// 
			// StreetNumberBoxShipping
			// 
			this->StreetNumberBoxShipping->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetNumberBoxShipping->Location = System::Drawing::Point(276, 116);
			this->StreetNumberBoxShipping->Name = L"StreetNumberBoxShipping";
			this->StreetNumberBoxShipping->Size = System::Drawing::Size(130, 22);
			this->StreetNumberBoxShipping->TabIndex = 32;
			// 
			// ResidencyNameBoxShipping
			// 
			this->ResidencyNameBoxShipping->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResidencyNameBoxShipping->Location = System::Drawing::Point(276, 148);
			this->ResidencyNameBoxShipping->Name = L"ResidencyNameBoxShipping";
			this->ResidencyNameBoxShipping->Size = System::Drawing::Size(130, 22);
			this->ResidencyNameBoxShipping->TabIndex = 33;
			// 
			// BuildingNameBoxShipping
			// 
			this->BuildingNameBoxShipping->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuildingNameBoxShipping->Location = System::Drawing::Point(276, 180);
			this->BuildingNameBoxShipping->Name = L"BuildingNameBoxShipping";
			this->BuildingNameBoxShipping->Size = System::Drawing::Size(130, 22);
			this->BuildingNameBoxShipping->TabIndex = 34;
			// 
			// FloorNumberBoxShipping
			// 
			this->FloorNumberBoxShipping->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FloorNumberBoxShipping->Location = System::Drawing::Point(276, 212);
			this->FloorNumberBoxShipping->Name = L"FloorNumberBoxShipping";
			this->FloorNumberBoxShipping->Size = System::Drawing::Size(130, 22);
			this->FloorNumberBoxShipping->TabIndex = 35;
			// 
			// ComplementBoxShipping
			// 
			this->ComplementBoxShipping->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComplementBoxShipping->Location = System::Drawing::Point(276, 246);
			this->ComplementBoxShipping->Name = L"ComplementBoxShipping";
			this->ComplementBoxShipping->Size = System::Drawing::Size(130, 22);
			this->ComplementBoxShipping->TabIndex = 36;
			// 
			// CityNameBoxShipping
			// 
			this->CityNameBoxShipping->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityNameBoxShipping->Location = System::Drawing::Point(276, 276);
			this->CityNameBoxShipping->Name = L"CityNameBoxShipping";
			this->CityNameBoxShipping->Size = System::Drawing::Size(130, 22);
			this->CityNameBoxShipping->TabIndex = 37;
			// 
			// PostCodeBoxShipping
			// 
			this->PostCodeBoxShipping->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PostCodeBoxShipping->Location = System::Drawing::Point(276, 308);
			this->PostCodeBoxShipping->Name = L"PostCodeBoxShipping";
			this->PostCodeBoxShipping->Size = System::Drawing::Size(130, 22);
			this->PostCodeBoxShipping->TabIndex = 38;
			// 
			// SendButton
			// 
			this->SendButton->Location = System::Drawing::Point(480, 275);
			this->SendButton->Name = L"SendButton";
			this->SendButton->Size = System::Drawing::Size(75, 23);
			this->SendButton->TabIndex = 39;
			this->SendButton->Text = L"Send";
			this->SendButton->UseVisualStyleBackColor = true;
			this->SendButton->Click += gcnew System::EventHandler(this, &CreateClientForm::CreateClientForm_Click);
			// 
			// CreateClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 380);
			this->Controls->Add(this->SendButton);
			this->Controls->Add(this->PostCodeBoxShipping);
			this->Controls->Add(this->CityNameBoxShipping);
			this->Controls->Add(this->ComplementBoxShipping);
			this->Controls->Add(this->FloorNumberBoxShipping);
			this->Controls->Add(this->BuildingNameBoxShipping);
			this->Controls->Add(this->ResidencyNameBoxShipping);
			this->Controls->Add(this->StreetNumberBoxShipping);
			this->Controls->Add(this->StreetNameBoxShipping);
			this->Controls->Add(this->DisplayPostcode);
			this->Controls->Add(this->BuildingNameBoxBilling);
			this->Controls->Add(this->DisplayCityName);
			this->Controls->Add(this->DisplayComplement);
			this->Controls->Add(this->DisplayFloorNumber);
			this->Controls->Add(this->DisplayBuildingName);
			this->Controls->Add(this->DisplayResidencyname);
			this->Controls->Add(this->DisplayStreetNumber);
			this->Controls->Add(this->DisplayStreetName);
			this->Controls->Add(this->DisplayBirthDate);
			this->Controls->Add(this->DisplayLastname);
			this->Controls->Add(this->DisplayFirstName);
			this->Controls->Add(this->DisplayPersonnalinfoBox);
			this->Controls->Add(this->DisplayAdressBox);
			this->Controls->Add(this->PostCodeBoxBilling);
			this->Controls->Add(this->CityNameBoxBilling);
			this->Controls->Add(this->ComplementBoxBilling);
			this->Controls->Add(this->FloorNumberBoxBilling);
			this->Controls->Add(this->ResidencyNameBoxBilling);
			this->Controls->Add(this->StreetNumberBoxBilling);
			this->Controls->Add(this->StreetNameBoxBilling);
			this->Controls->Add(this->BirthdateBox);
			this->Controls->Add(this->LastNameBox);
			this->Controls->Add(this->FirstNameBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateClientForm";
			this->Text = L"CreateClientForm";
			this->Load += gcnew System::EventHandler(this, &CreateClientForm::CreateClientForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void CreateClientForm_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oCli->InsertClient(this->StreetNameBoxShipping->Text, System::Convert::ToInt32(this->StreetNumberBoxShipping->Text), this->ResidencyNameBoxShipping->Text, this->BuildingNameBoxShipping->Text, System::Convert::ToInt32(this->FloorNumberBoxShipping->Text), this->ComplementBoxShipping->Text, this->CityNameBoxShipping->Text, System::Convert::ToInt32(this->PostCodeBoxShipping->Text), this->StreetNameBoxBilling->Text, System::Convert::ToInt32(this->StreetNumberBoxBilling->Text), this->ResidencyNameBoxBilling->Text, this->BuildingNameBoxBilling->Text, System::Convert::ToInt32(this->FloorNumberBoxBilling->Text), this->ComplementBoxBilling->Text, this->CityNameBoxBilling->Text, System::Convert::ToInt32(this->PostCodeBoxBilling->Text), this->FirstNameBox->Text, this->LastNameBox->Text, this->BirthdateBox->Text);
	}
	private: System::Void CreateClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oCli = gcnew NS_Comp_Svc_Cli::CLservicesClient();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void FirstNameBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
