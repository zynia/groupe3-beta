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
	private: System::Windows::Forms::TextBox^ DisplayBillingAdress;
	private: System::Windows::Forms::TextBox^ DisplayShippingAdress;
	private: System::Windows::Forms::TextBox^ DisplayBillingAddress;
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
	private: System::Windows::Forms::TextBox^ DisplayClientId;
	private: System::Windows::Forms::TextBox^ ClientIdBox;
	private: System::Windows::Forms::TextBox^ StreetNameBoxShipping;
	private: System::Windows::Forms::TextBox^ StreetNumberBoxShipping;
	private: System::Windows::Forms::TextBox^ ResidencyNameBoxShipping;
	private: System::Windows::Forms::TextBox^ BuildingNameBoxShipping;
	private: System::Windows::Forms::TextBox^ FloorNumberBoxShipping;
	private: System::Windows::Forms::TextBox^ ComplementBoxShipping;
	private: System::Windows::Forms::TextBox^ CityNameBoxShipping;
	private: System::Windows::Forms::TextBox^ PostCodeBoxShipping;
	private: System::Windows::Forms::Button^ SendButton;
	private: System::Windows::Forms::Button^ AddBillingAddressButton;
	private: System::Windows::Forms::Button^ AddShippingAddressButton;
	private: System::Windows::Forms::Button^ SendBillingAddressButton;
	private: System::Windows::Forms::Button^ SendShippingAddressButton;
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
			this->DisplayClientId = (gcnew System::Windows::Forms::TextBox());
			this->ClientIdBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayAdressBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayBillingAdress = (gcnew System::Windows::Forms::TextBox());
			this->DisplayShippingAdress = (gcnew System::Windows::Forms::TextBox());
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
			this->AddBillingAddressButton = (gcnew System::Windows::Forms::Button());
			this->AddShippingAddressButton = (gcnew System::Windows::Forms::Button());
			this->SendBillingAddressButton = (gcnew System::Windows::Forms::Button());
			this->SendShippingAddressButton = (gcnew System::Windows::Forms::Button());
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
			// DisplayBillingAdress
			// 
			this->DisplayBillingAdress->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayBillingAdress->Visible = false;
			this->DisplayBillingAdress->BorderStyle = BorderStyle::None;
			this->DisplayBillingAdress->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayBillingAdress->Location = System::Drawing::Point(25, 40);
			this->DisplayBillingAdress->Name = L"DisplayBillingAdress";
			this->DisplayBillingAdress->ReadOnly = true;
			this->DisplayBillingAdress->Size = System::Drawing::Size(381, 29);
			this->DisplayBillingAdress->TabIndex = 13;
			this->DisplayBillingAdress->Text = L"Billing Address";
			// 
			// DisplayShippingAdress
			// 
			this->DisplayShippingAdress->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayShippingAdress->Visible = false;
			this->DisplayShippingAdress->BorderStyle = BorderStyle::None;
			this->DisplayShippingAdress->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayShippingAdress->Location = System::Drawing::Point(25, 40);
			this->DisplayShippingAdress->Name = L"DisplayShippingAdress";
			this->DisplayShippingAdress->ReadOnly = true;
			this->DisplayShippingAdress->Size = System::Drawing::Size(381, 29);
			this->DisplayShippingAdress->TabIndex = 13;
			this->DisplayShippingAdress->Text = L"Shipping Address";
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
			// DisplayClientId
			// 
			this->DisplayClientId->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayClientId->Visible = false;
			this->DisplayClientId->BorderStyle = BorderStyle::None;
			this->DisplayClientId->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayClientId->Location = System::Drawing::Point(20, 340);
			this->DisplayClientId->Name = L"DisplayClientId";
			this->DisplayClientId->ReadOnly = true;
			this->DisplayClientId->Size = System::Drawing::Size(110, 22);
			this->DisplayClientId->TabIndex = 30;
			this->DisplayClientId->Text = L"Client ID  :";
			// 
			// ClientIdBox
			// 
			this->ClientIdBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClientIdBox->Location = System::Drawing::Point(140, 340);
			this->ClientIdBox->Name = L"ClientIdBox";
			this->ClientIdBox->Size = System::Drawing::Size(130, 22);
			this->ClientIdBox->TabIndex = 31;
			this->ClientIdBox->Visible = false;
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
			this->SendButton->Location = System::Drawing::Point(460, 234);
			this->SendButton->Name = L"SendButton";
			this->SendButton->Size = System::Drawing::Size(120, 35);
			this->SendButton->TabIndex = 39;
			this->SendButton->Text = L"Send";
			this->SendButton->UseVisualStyleBackColor = true;
			this->SendButton->Click += gcnew System::EventHandler(this, &CreateClientForm::CreateClientForm_Click);
			// 
			// AddBillingAddressButton
			// 
			this->AddBillingAddressButton->Location = System::Drawing::Point(460, 276);
			this->AddBillingAddressButton->Name = L"AddBillingAddressButton";
			this->AddBillingAddressButton->Size = System::Drawing::Size(120, 23);
			this->AddBillingAddressButton->TabIndex = 39;
			this->AddBillingAddressButton->Text = L"Add billing address";
			this->AddBillingAddressButton->UseVisualStyleBackColor = true;
			this->AddBillingAddressButton->Click += gcnew System::EventHandler(this, &CreateClientForm::AddBilling_Click);
			// 
			// AddShippingAddressButton
			// 
			this->AddShippingAddressButton->Location = System::Drawing::Point(460,308);
			this->AddShippingAddressButton->Name = L"AddShippingAddressButton";
			this->AddShippingAddressButton->Size = System::Drawing::Size(120, 23);
			this->AddShippingAddressButton->TabIndex = 39;
			this->AddShippingAddressButton->Text = L"Add shipping address";
			this->AddShippingAddressButton->UseVisualStyleBackColor = true;
			this->AddShippingAddressButton->Click += gcnew System::EventHandler(this, &CreateClientForm::AddShipping_Click);
			// 
			// SendBillingAddressButton
			// 
			this->SendBillingAddressButton->Location = System::Drawing::Point(460, 330);
			this->SendBillingAddressButton->Name = L"SendBillingAddressButton";
			this->SendBillingAddressButton->Size = System::Drawing::Size(120, 40);
			this->SendBillingAddressButton->TabIndex = 39;
			this->SendBillingAddressButton->Text = L"Send additionnal address";
			this->SendBillingAddressButton->UseVisualStyleBackColor = true;
			this->SendBillingAddressButton->Click += gcnew System::EventHandler(this, &CreateClientForm::SendBillingAddress_Click);
			this->SendBillingAddressButton->Visible = false;
			// 
			// SendShippingAddressButton
			// 
			this->SendShippingAddressButton->Location = System::Drawing::Point(460, 330);
			this->SendShippingAddressButton->Name = L"SendShippingAddressButton";
			this->SendShippingAddressButton->Size = System::Drawing::Size(120, 40);
			this->SendShippingAddressButton->TabIndex = 39;
			this->SendShippingAddressButton->Text = L"Send additionnal address";
			this->SendShippingAddressButton->UseVisualStyleBackColor = true;
			this->SendShippingAddressButton->Click += gcnew System::EventHandler(this, &CreateClientForm::SendShippingAddress_Click);
			this->SendShippingAddressButton->Visible = false;
			// 
			// CreateClientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 380);
			this->Controls->Add(this->SendButton);
			this->Controls->Add(this->AddBillingAddressButton);
			this->Controls->Add(this->AddShippingAddressButton);
			this->Controls->Add(this->SendBillingAddressButton);
			this->Controls->Add(this->SendShippingAddressButton);
			this->Controls->Add(this->PostCodeBoxShipping);
			this->Controls->Add(this->CityNameBoxShipping);
			this->Controls->Add(this->ComplementBoxShipping);
			this->Controls->Add(this->FloorNumberBoxShipping);
			this->Controls->Add(this->BuildingNameBoxShipping);
			this->Controls->Add(this->ResidencyNameBoxShipping);
			this->Controls->Add(this->StreetNumberBoxShipping);
			this->Controls->Add(this->StreetNameBoxShipping);
			this->Controls->Add(this->DisplayPostcode);
			this->Controls->Add(this->DisplayClientId);
			this->Controls->Add(this->ClientIdBox);
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
			this->Controls->Add(this->DisplayBillingAdress);
			this->Controls->Add(this->DisplayShippingAdress);
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
		this->StreetNameBoxBilling->Clear();
		this->StreetNumberBoxBilling->Clear();
		this->ResidencyNameBoxBilling->Clear();
		this->BuildingNameBoxBilling->Clear();
		this->FloorNumberBoxBilling->Clear();
		this->ComplementBoxBilling->Clear();
		this->CityNameBoxBilling->Clear();
		this->PostCodeBoxBilling->Clear();
		this->StreetNameBoxShipping->Clear();
		this->StreetNumberBoxShipping->Clear();
		this->ResidencyNameBoxShipping->Clear();
		this->BuildingNameBoxShipping->Clear();
		this->FloorNumberBoxShipping->Clear();
		this->ComplementBoxShipping->Clear();
		this->CityNameBoxShipping->Clear();
		this->PostCodeBoxShipping->Clear();
		this->FirstNameBox->Clear();
		this->LastNameBox->Clear();
		this->BirthdateBox->Clear();


	}
	private: System::Void CreateClientForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oCli = gcnew NS_Comp_Svc_Cli::CLservicesClient();
	}
	private: System::Void AddBilling_Click(System::Object^ sender, System::EventArgs^ e) {
		this->StreetNameBoxShipping->Visible = false;
		this->StreetNumberBoxShipping->Visible = false;
		this->ResidencyNameBoxShipping->Visible = false;
		this->BuildingNameBoxShipping->Visible = false;
		this->FloorNumberBoxShipping->Visible = false;
		this->ComplementBoxShipping->Visible = false;
		this->CityNameBoxShipping->Visible = false;
		this->PostCodeBoxShipping->Visible = false;
		this->DisplayClientId->Visible = true;
		this->ClientIdBox->Visible = true;
		this->FirstNameBox->Visible = false;
		this->LastNameBox->Visible = false;
		this->BirthdateBox->Visible = false;
		this->DisplayFirstName->Visible = false;
		this->DisplayLastname->Visible = false;
		this->DisplayBirthDate->Visible = false;
		this->DisplayPersonnalinfoBox->Visible = false;
		this->DisplayAdressBox->Visible = false;
		this->DisplayBillingAdress->Visible = true;
		this->DisplayBillingAdress->Visible = false;
		this->AddBillingAddressButton->Visible = false;
		this->AddShippingAddressButton->Visible = false;
		this->SendButton->Visible = false;
		this->SendBillingAddressButton->Visible = true;
		this->SendShippingAddressButton->Visible = true;
	}
	private: System::Void AddShipping_Click(System::Object^ sender, System::EventArgs^ e) {
		this->StreetNameBoxShipping->Visible = true;
		this->StreetNumberBoxShipping->Visible = true;
		this->ResidencyNameBoxShipping->Visible = true;
		this->BuildingNameBoxShipping->Visible = true;
		this->FloorNumberBoxShipping->Visible = true;
		this->ComplementBoxShipping->Visible = true;
		this->CityNameBoxShipping->Visible = true;
		this->PostCodeBoxShipping->Visible = true;
		this->DisplayClientId->Visible = true;
		this->StreetNameBoxBilling->Visible = false;
		this->StreetNumberBoxBilling->Visible = false;
		this->ResidencyNameBoxBilling->Visible = false;
		this->BuildingNameBoxBilling->Visible = false;
		this->FloorNumberBoxBilling->Visible = false;
		this->ComplementBoxBilling->Visible = false;
		this->CityNameBoxBilling->Visible = false;
		this->PostCodeBoxBilling->Visible = false;
		this->StreetNameBoxShipping->Location = System::Drawing::Point(140, 84);
		this->StreetNumberBoxShipping->Location = System::Drawing::Point(140, 116);
		this->ResidencyNameBoxShipping->Location = System::Drawing::Point(140, 148);
		this->BuildingNameBoxShipping->Location = System::Drawing::Point(140, 180);
		this->FloorNumberBoxShipping->Location = System::Drawing::Point(140, 212);
		this->ComplementBoxShipping->Location = System::Drawing::Point(140, 246);
		this->CityNameBoxShipping->Location = System::Drawing::Point(140, 276);
		this->PostCodeBoxShipping->Location = System::Drawing::Point(140, 308);
		this->ClientIdBox->Visible = true;
		this->FirstNameBox->Visible = false;
		this->LastNameBox->Visible = false;
		this->BirthdateBox->Visible = false;
		this->DisplayFirstName->Visible = false;
		this->DisplayLastname->Visible = false;
		this->DisplayBirthDate->Visible = false;
		this->DisplayPersonnalinfoBox->Visible = false;
		this->DisplayAdressBox->Visible = false;
		this->DisplayBillingAdress->Visible = false;
		this->DisplayShippingAdress->Visible = true;
		this->AddBillingAddressButton->Visible = false;
		this->AddShippingAddressButton->Visible = false;
		this->SendButton->Visible = false;
		this->SendBillingAddressButton->Visible = false;
		this->SendShippingAddressButton->Visible = true;
	}
	private: System::Void SendBillingAddress_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oCli->AddnewbillingClient(System::Convert::ToInt32(this->ClientIdBox->Text), System::Convert::ToInt32(this->PostCodeBoxBilling->Text), this->CityNameBoxBilling->Text, this->StreetNameBoxBilling->Text, System::Convert::ToInt32(this->StreetNumberBoxBilling->Text), this->ResidencyNameBoxBilling->Text, this->BuildingNameBoxBilling->Text, System::Convert::ToInt32(this->FloorNumberBoxBilling->Text), this->ComplementBoxBilling->Text);
		this->StreetNameBoxBilling->Clear();
		this->StreetNumberBoxBilling->Clear();
		this->ResidencyNameBoxBilling->Clear();
		this->BuildingNameBoxBilling->Clear();
		this->FloorNumberBoxBilling->Clear();
		this->ComplementBoxBilling->Clear();
		this->CityNameBoxBilling->Clear();
		this->PostCodeBoxBilling->Clear();
		this->ClientIdBox->Clear();
	}
	private: System::Void SendShippingAddress_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oCli->AddnewshippingClient(System::Convert::ToInt32(this->ClientIdBox->Text), System::Convert::ToInt32(this->PostCodeBoxShipping->Text), this->CityNameBoxShipping->Text, this->StreetNameBoxShipping->Text, System::Convert::ToInt32(this->StreetNumberBoxShipping->Text), this->ResidencyNameBoxShipping->Text, this->BuildingNameBoxShipping->Text, System::Convert::ToInt32(this->FloorNumberBoxShipping->Text), this->ComplementBoxShipping->Text);
		this->StreetNameBoxShipping->Clear();
		this->StreetNumberBoxShipping->Clear();
		this->ResidencyNameBoxShipping->Clear();
		this->BuildingNameBoxShipping->Clear();
		this->FloorNumberBoxShipping->Clear();
		this->ComplementBoxShipping->Clear();
		this->CityNameBoxShipping->Clear();
		this->PostCodeBoxShipping->Clear();
		this->ClientIdBox->Clear();
	}
	};
}
