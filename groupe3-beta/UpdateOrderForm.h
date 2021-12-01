#pragma once

namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateOrderForm
	/// </summary>
	public ref class UpdateOrderForm : public System::Windows::Forms::Form
	{
	public:
		UpdateOrderForm(void)
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
		~UpdateOrderForm()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::TextBox^ StreetNameBox;
	private: System::Windows::Forms::TextBox^ StreetNumberBox;
	private: System::Windows::Forms::TextBox^ ResidencyNameBox;
	private: System::Windows::Forms::TextBox^ FloorNumberBox;
	private: System::Windows::Forms::TextBox^ ComplementBox;
	private: System::Windows::Forms::TextBox^ CityNameBox;
	private: System::Windows::Forms::TextBox^ PostCodeBox;
	private: System::Windows::Forms::TextBox^ DisplayAdressBox;
	private: System::Windows::Forms::TextBox^ DisplayOrderinfoBox;
	private: System::Windows::Forms::TextBox^ DisplayStreetName;
	private: System::Windows::Forms::TextBox^ DisplayStreetNumber;
	private: System::Windows::Forms::TextBox^ DisplayResidencyname;
	private: System::Windows::Forms::TextBox^ DisplayBuildingName;
	private: System::Windows::Forms::TextBox^ DisplayFloorNumber;
	private: System::Windows::Forms::TextBox^ DisplayComplement;
	private: System::Windows::Forms::TextBox^ DisplayCityName;
	private: System::Windows::Forms::TextBox^ BuildingNameBox;
	private: System::Windows::Forms::TextBox^ DisplayPostcode;
	private: System::Windows::Forms::TextBox^ DisplayMarginBox;
	private: System::Windows::Forms::TextBox^ SendDateBox;
	private: System::Windows::Forms::TextBox^ DisplayTVABox;
	private: System::Windows::Forms::TextBox^ DisplayHTBox;
	private: System::Windows::Forms::TextBox^ DisplayDeliveryDateBox;
	private: System::Windows::Forms::TextBox^ DisplaySendDateBox;
	private: System::Windows::Forms::TextBox^ DisplayNbitemsBox;
	private: System::Windows::Forms::TextBox^ DisplayIDCustomerBox;
	private: System::Windows::Forms::TextBox^ DisplayOldIdItembox;

	private: System::Windows::Forms::TextBox^ MarginBox;
	private: System::Windows::Forms::TextBox^ TVABox;
	private: System::Windows::Forms::TextBox^ HTCostBox;
	private: System::Windows::Forms::TextBox^ DeliveryDateBox;
	private: System::Windows::Forms::TextBox^ NbItemsBox;
	private: System::Windows::Forms::TextBox^ IDCustomerBox;
	private: System::Windows::Forms::TextBox^ OldIditemBox;

	private: System::Windows::Forms::TextBox^ DisplayDiscountBox;
	private: System::Windows::Forms::TextBox^ DiscountBox;

	private: System::Windows::Forms::TextBox^ DisplayIDOrderBox;
	private: System::Windows::Forms::TextBox^ IDOrderbox;
	private: System::Windows::Forms::Button^ SendButton;
	private: System::Windows::Forms::TextBox^ DisplayPaymentType;
	private: System::Windows::Forms::TextBox^ PaymentTypeBox;
	private: System::Windows::Forms::TextBox^ DisplayPaymentDate;
	private: System::Windows::Forms::TextBox^ PaymentDateBox;
	private: System::Windows::Forms::TextBox^ DisplayPaymentNumber;
	private: System::Windows::Forms::TextBox^ PaymentNumberBox;
	private: System::Windows::Forms::TextBox^ DisplayNewIdItem;
	private: System::Windows::Forms::TextBox^ NewIdItemBox;
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
			this->StreetNameBox = (gcnew System::Windows::Forms::TextBox());
			this->StreetNumberBox = (gcnew System::Windows::Forms::TextBox());
			this->ResidencyNameBox = (gcnew System::Windows::Forms::TextBox());
			this->FloorNumberBox = (gcnew System::Windows::Forms::TextBox());
			this->ComplementBox = (gcnew System::Windows::Forms::TextBox());
			this->CityNameBox = (gcnew System::Windows::Forms::TextBox());
			this->PostCodeBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayAdressBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayOrderinfoBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayStreetName = (gcnew System::Windows::Forms::TextBox());
			this->DisplayStreetNumber = (gcnew System::Windows::Forms::TextBox());
			this->DisplayResidencyname = (gcnew System::Windows::Forms::TextBox());
			this->DisplayBuildingName = (gcnew System::Windows::Forms::TextBox());
			this->DisplayFloorNumber = (gcnew System::Windows::Forms::TextBox());
			this->DisplayComplement = (gcnew System::Windows::Forms::TextBox());
			this->DisplayCityName = (gcnew System::Windows::Forms::TextBox());
			this->BuildingNameBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPostcode = (gcnew System::Windows::Forms::TextBox());
			this->DisplayMarginBox = (gcnew System::Windows::Forms::TextBox());
			this->SendDateBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayTVABox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayHTBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayDeliveryDateBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplaySendDateBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayNbitemsBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayIDCustomerBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayOldIdItembox = (gcnew System::Windows::Forms::TextBox());
			this->MarginBox = (gcnew System::Windows::Forms::TextBox());
			this->TVABox = (gcnew System::Windows::Forms::TextBox());
			this->HTCostBox = (gcnew System::Windows::Forms::TextBox());
			this->DeliveryDateBox = (gcnew System::Windows::Forms::TextBox());
			this->NbItemsBox = (gcnew System::Windows::Forms::TextBox());
			this->IDCustomerBox = (gcnew System::Windows::Forms::TextBox());
			this->OldIditemBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayDiscountBox = (gcnew System::Windows::Forms::TextBox());
			this->DiscountBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayIDOrderBox = (gcnew System::Windows::Forms::TextBox());
			this->IDOrderbox = (gcnew System::Windows::Forms::TextBox());
			this->SendButton = (gcnew System::Windows::Forms::Button());
			this->DisplayPaymentType = (gcnew System::Windows::Forms::TextBox());
			this->PaymentTypeBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPaymentDate = (gcnew System::Windows::Forms::TextBox());
			this->PaymentDateBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPaymentNumber = (gcnew System::Windows::Forms::TextBox());
			this->PaymentNumberBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayNewIdItem = (gcnew System::Windows::Forms::TextBox());
			this->NewIdItemBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// StreetNameBox
			// 
			this->StreetNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetNameBox->Location = System::Drawing::Point(470, 57);
			this->StreetNameBox->Name = L"StreetNameBox";
			this->StreetNameBox->Size = System::Drawing::Size(130, 22);
			this->StreetNameBox->TabIndex = 5;
			// 
			// StreetNumberBox
			// 
			this->StreetNumberBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StreetNumberBox->Location = System::Drawing::Point(470, 84);
			this->StreetNumberBox->Name = L"StreetNumberBox";
			this->StreetNumberBox->Size = System::Drawing::Size(130, 22);
			this->StreetNumberBox->TabIndex = 6;
			// 
			// ResidencyNameBox
			// 
			this->ResidencyNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResidencyNameBox->Location = System::Drawing::Point(470, 111);
			this->ResidencyNameBox->Name = L"ResidencyNameBox";
			this->ResidencyNameBox->Size = System::Drawing::Size(130, 22);
			this->ResidencyNameBox->TabIndex = 7;
			// 
			// FloorNumberBox
			// 
			this->FloorNumberBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FloorNumberBox->Location = System::Drawing::Point(470, 165);
			this->FloorNumberBox->Name = L"FloorNumberBox";
			this->FloorNumberBox->Size = System::Drawing::Size(130, 22);
			this->FloorNumberBox->TabIndex = 8;
			// 
			// ComplementBox
			// 
			this->ComplementBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComplementBox->Location = System::Drawing::Point(470, 193);
			this->ComplementBox->Name = L"ComplementBox";
			this->ComplementBox->Size = System::Drawing::Size(130, 22);
			this->ComplementBox->TabIndex = 9;
			// 
			// CityNameBox
			// 
			this->CityNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CityNameBox->Location = System::Drawing::Point(470, 219);
			this->CityNameBox->Name = L"CityNameBox";
			this->CityNameBox->Size = System::Drawing::Size(130, 22);
			this->CityNameBox->TabIndex = 10;
			// 
			// PostCodeBox
			// 
			this->PostCodeBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PostCodeBox->Location = System::Drawing::Point(470, 246);
			this->PostCodeBox->Name = L"PostCodeBox";
			this->PostCodeBox->Size = System::Drawing::Size(130, 22);
			this->PostCodeBox->TabIndex = 11;
			this->PostCodeBox->TextChanged += gcnew System::EventHandler(this, &UpdateOrderForm::textBox1_TextChanged);
			// 
			// DisplayAdressBox
			// 
			this->DisplayAdressBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayAdressBox->BorderStyle = BorderStyle::None;
			this->DisplayAdressBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayAdressBox->Location = System::Drawing::Point(415, 20);
			this->DisplayAdressBox->Name = L"DisplayAdressBox";
			this->DisplayAdressBox->ReadOnly = true;
			this->DisplayAdressBox->Size = System::Drawing::Size(100, 29);
			this->DisplayAdressBox->TabIndex = 13;
			this->DisplayAdressBox->Text = L"Address";
			// 
			// DisplayOrderinfoBox
			// 
			this->DisplayOrderinfoBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayOrderinfoBox->BorderStyle = BorderStyle::None;
			this->DisplayOrderinfoBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayOrderinfoBox->Location = System::Drawing::Point(95, 20);
			this->DisplayOrderinfoBox->Name = L"DisplayOrderinfoBox";
			this->DisplayOrderinfoBox->ReadOnly = true;
			this->DisplayOrderinfoBox->Size = System::Drawing::Size(100, 29);
			this->DisplayOrderinfoBox->TabIndex = 14;
			this->DisplayOrderinfoBox->Text = L"Order Info";
			// 
			// DisplayStreetName
			// 
			this->DisplayStreetName->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayStreetName->BorderStyle = BorderStyle::None;
			this->DisplayStreetName->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayStreetName->Location = System::Drawing::Point(350, 57);
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
			this->DisplayStreetNumber->Location = System::Drawing::Point(350, 84);
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
			this->DisplayResidencyname->Location = System::Drawing::Point(350, 111);
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
			this->DisplayBuildingName->Location = System::Drawing::Point(350, 138);
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
			this->DisplayFloorNumber->Location = System::Drawing::Point(350, 165);
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
			this->DisplayComplement->Location = System::Drawing::Point(350, 193);
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
			this->DisplayCityName->Location = System::Drawing::Point(350, 219);
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
			this->BuildingNameBox->Location = System::Drawing::Point(470, 138);
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
			this->DisplayPostcode->Location = System::Drawing::Point(350, 246);
			this->DisplayPostcode->Name = L"DisplayPostcode";
			this->DisplayPostcode->ReadOnly = true;
			this->DisplayPostcode->Size = System::Drawing::Size(110, 22);
			this->DisplayPostcode->TabIndex = 30;
			this->DisplayPostcode->Text = L"Post code  :";
			// 
			// DisplayMarginBox
			// 
			this->DisplayMarginBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayMarginBox->BorderStyle = BorderStyle::None;
			this->DisplayMarginBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayMarginBox->Location = System::Drawing::Point(30, 300);
			this->DisplayMarginBox->Name = L"DisplayMarginBox";
			this->DisplayMarginBox->ReadOnly = true;
			this->DisplayMarginBox->Size = System::Drawing::Size(110, 22);
			this->DisplayMarginBox->TabIndex = 46;
			this->DisplayMarginBox->Text = L"Margin  :";
			// 
			// SendDateBox
			// 
			this->SendDateBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SendDateBox->Location = System::Drawing::Point(150, 192);
			this->SendDateBox->Name = L"SendDateBox";
			this->SendDateBox->Size = System::Drawing::Size(130, 22);
			this->SendDateBox->TabIndex = 45;
			this->SendDateBox->TextChanged += gcnew System::EventHandler(this, &UpdateOrderForm::SendDate_TextChanged);
			// 
			// DisplayTVABox
			// 
			this->DisplayTVABox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayTVABox->BorderStyle = BorderStyle::None;
			this->DisplayTVABox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayTVABox->Location = System::Drawing::Point(30, 273);
			this->DisplayTVABox->Name = L"DisplayTVABox";
			this->DisplayTVABox->ReadOnly = true;
			this->DisplayTVABox->Size = System::Drawing::Size(110, 22);
			this->DisplayTVABox->TabIndex = 44;
			this->DisplayTVABox->Text = L"TVA :";
			// 
			// DisplayHTBox
			// 
			this->DisplayHTBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayHTBox->BorderStyle = BorderStyle::None;
			this->DisplayHTBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayHTBox->Location = System::Drawing::Point(30, 248);
			this->DisplayHTBox->Name = L"DisplayHTBox";
			this->DisplayHTBox->ReadOnly = true;
			this->DisplayHTBox->Size = System::Drawing::Size(110, 22);
			this->DisplayHTBox->TabIndex = 43;
			this->DisplayHTBox->Text = L"HT cost :";
			// 
			// DisplayDeliveryDateBox
			// 
			this->DisplayDeliveryDateBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayDeliveryDateBox->BorderStyle = BorderStyle::None;
			this->DisplayDeliveryDateBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayDeliveryDateBox->Location = System::Drawing::Point(30, 219);
			this->DisplayDeliveryDateBox->Name = L"DisplayDeliveryDateBox";
			this->DisplayDeliveryDateBox->ReadOnly = true;
			this->DisplayDeliveryDateBox->Size = System::Drawing::Size(110, 22);
			this->DisplayDeliveryDateBox->TabIndex = 42;
			this->DisplayDeliveryDateBox->Text = L"Delivery date  :";
			// 
			// DisplaySendDateBox
			// 
			this->DisplaySendDateBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplaySendDateBox->BorderStyle = BorderStyle::None;
			this->DisplaySendDateBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplaySendDateBox->Location = System::Drawing::Point(30, 192);
			this->DisplaySendDateBox->Name = L"DisplaySendDateBox";
			this->DisplaySendDateBox->ReadOnly = true;
			this->DisplaySendDateBox->Size = System::Drawing::Size(110, 22);
			this->DisplaySendDateBox->TabIndex = 41;
			this->DisplaySendDateBox->Text = L"Send date :";
			// 
			// DisplayNbitemsBox
			// 
			this->DisplayNbitemsBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayNbitemsBox->BorderStyle = BorderStyle::None;
			this->DisplayNbitemsBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayNbitemsBox->Location = System::Drawing::Point(30, 165);
			this->DisplayNbitemsBox->Name = L"DisplayNbitemsBox";
			this->DisplayNbitemsBox->ReadOnly = true;
			this->DisplayNbitemsBox->Size = System::Drawing::Size(110, 22);
			this->DisplayNbitemsBox->TabIndex = 40;
			this->DisplayNbitemsBox->Text = L"Nb items :";
			// 
			// DisplayIDCustomerBox
			// 
			this->DisplayIDCustomerBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayIDCustomerBox->BorderStyle = BorderStyle::None;
			this->DisplayIDCustomerBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayIDCustomerBox->Location = System::Drawing::Point(30, 111);
			this->DisplayIDCustomerBox->Name = L"DisplayIDCustomerBox";
			this->DisplayIDCustomerBox->ReadOnly = true;
			this->DisplayIDCustomerBox->Size = System::Drawing::Size(110, 22);
			this->DisplayIDCustomerBox->TabIndex = 39;
			this->DisplayIDCustomerBox->Text = L"ID customer :";
			this->DisplayIDCustomerBox->TextChanged += gcnew System::EventHandler(this, &UpdateOrderForm::textBox8_TextChanged);
			// 
			// DisplayOldIdItembox
			// 
			this->DisplayOldIdItembox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayOldIdItembox->BorderStyle = BorderStyle::None;
			this->DisplayOldIdItembox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayOldIdItembox->Location = System::Drawing::Point(30, 84);
			this->DisplayOldIdItembox->Name = L"DisplayOldIdItembox";
			this->DisplayOldIdItembox->ReadOnly = true;
			this->DisplayOldIdItembox->Size = System::Drawing::Size(110, 22);
			this->DisplayOldIdItembox->TabIndex = 38;
			this->DisplayOldIdItembox->Text = L"ID item (old) :";
			// 
			// MarginBox
			// 
			this->MarginBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MarginBox->Location = System::Drawing::Point(150, 300);
			this->MarginBox->Name = L"MarginBox";
			this->MarginBox->Size = System::Drawing::Size(130, 22);
			this->MarginBox->TabIndex = 37;
			// 
			// TVABox
			// 
			this->TVABox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TVABox->Location = System::Drawing::Point(150, 273);
			this->TVABox->Name = L"TVABox";
			this->TVABox->Size = System::Drawing::Size(130, 22);
			this->TVABox->TabIndex = 36;
			// 
			// HTCostBox
			// 
			this->HTCostBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HTCostBox->Location = System::Drawing::Point(150, 248);
			this->HTCostBox->Name = L"HTCostBox";
			this->HTCostBox->Size = System::Drawing::Size(130, 22);
			this->HTCostBox->TabIndex = 35;
			// 
			// DeliveryDateBox
			// 
			this->DeliveryDateBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeliveryDateBox->Location = System::Drawing::Point(150, 219);
			this->DeliveryDateBox->Name = L"DeliveryDateBox";
			this->DeliveryDateBox->Size = System::Drawing::Size(130, 22);
			this->DeliveryDateBox->TabIndex = 34;
			// 
			// NbItemsBox
			// 
			this->NbItemsBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NbItemsBox->Location = System::Drawing::Point(150, 165);
			this->NbItemsBox->Name = L"NbItemsBox";
			this->NbItemsBox->Size = System::Drawing::Size(130, 22);
			this->NbItemsBox->TabIndex = 33;
			// 
			// IDCustomerBox
			// 
			this->IDCustomerBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDCustomerBox->Location = System::Drawing::Point(150, 111);
			this->IDCustomerBox->Name = L"IDCustomerBox";
			this->IDCustomerBox->Size = System::Drawing::Size(130, 22);
			this->IDCustomerBox->TabIndex = 32;
			// 
			// OldIditemBox
			// 
			this->OldIditemBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OldIditemBox->Location = System::Drawing::Point(150, 84);
			this->OldIditemBox->Name = L"OldIditemBox";
			this->OldIditemBox->Size = System::Drawing::Size(130, 22);
			this->OldIditemBox->TabIndex = 31;
			// 
			// DisplayDiscountBox
			// 
			this->DisplayDiscountBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayDiscountBox->BorderStyle = BorderStyle::None;
			this->DisplayDiscountBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayDiscountBox->Location = System::Drawing::Point(30, 327);
			this->DisplayDiscountBox->Name = L"DisplayDiscountBox";
			this->DisplayDiscountBox->ReadOnly = true;
			this->DisplayDiscountBox->Size = System::Drawing::Size(110, 22);
			this->DisplayDiscountBox->TabIndex = 48;
			this->DisplayDiscountBox->Text = L"Discount :";
			// 
			// DiscountBox
			// 
			this->DiscountBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DiscountBox->Location = System::Drawing::Point(150, 327);
			this->DiscountBox->Name = L"DiscountBox";
			this->DiscountBox->Size = System::Drawing::Size(130, 22);
			this->DiscountBox->TabIndex = 47;
			// 
			// DisplayIDOrderBox
			// 
			this->DisplayIDOrderBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayIDOrderBox->BorderStyle = BorderStyle::None;
			this->DisplayIDOrderBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayIDOrderBox->Location = System::Drawing::Point(30, 57);
			this->DisplayIDOrderBox->Name = L"DisplayIDOrderBox";
			this->DisplayIDOrderBox->ReadOnly = true;
			this->DisplayIDOrderBox->Size = System::Drawing::Size(110, 22);
			this->DisplayIDOrderBox->TabIndex = 50;
			this->DisplayIDOrderBox->Text = L"ID order :";
			// 
			// IDOrderbox
			// 
			this->IDOrderbox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDOrderbox->Location = System::Drawing::Point(150, 57);
			this->IDOrderbox->Name = L"IDOrderbox";
			this->IDOrderbox->Size = System::Drawing::Size(130, 22);
			this->IDOrderbox->TabIndex = 51;
			// 
			// SendButton
			// 
			this->SendButton->Location = System::Drawing::Point(277, 356);
			this->SendButton->Name = L"SendButton";
			this->SendButton->Size = System::Drawing::Size(75, 23);
			this->SendButton->TabIndex = 52;
			this->SendButton->Text = L"Send";
			this->SendButton->UseVisualStyleBackColor = true;
			// 
			// DisplayPaymentType
			// 
			this->DisplayPaymentType->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayPaymentType->BorderStyle = BorderStyle::None;
			this->DisplayPaymentType->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayPaymentType->Location = System::Drawing::Point(350, 328);
			this->DisplayPaymentType->Name = L"DisplayPaymentType";
			this->DisplayPaymentType->ReadOnly = true;
			this->DisplayPaymentType->Size = System::Drawing::Size(110, 22);
			this->DisplayPaymentType->TabIndex = 53;
			this->DisplayPaymentType->Text = L"PaymentType  :";
			// 
			// PaymentTypeBox
			// 
			this->PaymentTypeBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PaymentTypeBox->Location = System::Drawing::Point(470, 328);
			this->PaymentTypeBox->Name = L"PaymentTypeBox";
			this->PaymentTypeBox->Size = System::Drawing::Size(130, 22);
			this->PaymentTypeBox->TabIndex = 54;
			// 
			// DisplayPaymentDate
			// 
			this->DisplayPaymentDate->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayPaymentDate->BorderStyle = BorderStyle::None;
			this->DisplayPaymentDate->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayPaymentDate->Location = System::Drawing::Point(350, 273);
			this->DisplayPaymentDate->Name = L"DisplayPaymentDate";
			this->DisplayPaymentDate->ReadOnly = true;
			this->DisplayPaymentDate->Size = System::Drawing::Size(110, 22);
			this->DisplayPaymentDate->TabIndex = 55;
			this->DisplayPaymentDate->Text = L"PaymentDate  :";
			// 
			// PaymentDateBox
			// 
			this->PaymentDateBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PaymentDateBox->Location = System::Drawing::Point(470, 273);
			this->PaymentDateBox->Name = L"PaymentDateBox";
			this->PaymentDateBox->Size = System::Drawing::Size(130, 22);
			this->PaymentDateBox->TabIndex = 56;
			// 
			// DisplayPaymentNumber
			// 
			this->DisplayPaymentNumber->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayPaymentNumber->BorderStyle = BorderStyle::None;
			this->DisplayPaymentNumber->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayPaymentNumber->Location = System::Drawing::Point(350, 300);
			this->DisplayPaymentNumber->Name = L"DisplayPaymentNumber";
			this->DisplayPaymentNumber->ReadOnly = true;
			this->DisplayPaymentNumber->Size = System::Drawing::Size(110, 22);
			this->DisplayPaymentNumber->TabIndex = 57;
			this->DisplayPaymentNumber->Text = L"PaymentNumber :";
			// 
			// PaymentNumberBox
			// 
			this->PaymentNumberBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PaymentNumberBox->Location = System::Drawing::Point(470, 300);
			this->PaymentNumberBox->Name = L"PaymentNumberBox";
			this->PaymentNumberBox->Size = System::Drawing::Size(130, 22);
			this->PaymentNumberBox->TabIndex = 58;
			// 
			// DisplayNewIdItem
			// 
			this->DisplayNewIdItem->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayNewIdItem->BorderStyle = BorderStyle::None;
			this->DisplayNewIdItem->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayNewIdItem->Location = System::Drawing::Point(30, 138);
			this->DisplayNewIdItem->Name = L"DisplayNewIdItem";
			this->DisplayNewIdItem->ReadOnly = true;
			this->DisplayNewIdItem->Size = System::Drawing::Size(110, 22);
			this->DisplayNewIdItem->TabIndex = 59;
			this->DisplayNewIdItem->Text = L"ID item (new) :";
			// 
			// NewIdItemBox
			// 
			this->NewIdItemBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewIdItemBox->Location = System::Drawing::Point(150, 138);
			this->NewIdItemBox->Name = L"NewIdItemBox";
			this->NewIdItemBox->Size = System::Drawing::Size(130, 22);
			this->NewIdItemBox->TabIndex = 60;
			// 
			// UpdateOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 380);
			this->Controls->Add(this->NewIdItemBox);
			this->Controls->Add(this->DisplayNewIdItem);
			this->Controls->Add(this->PaymentNumberBox);
			this->Controls->Add(this->DisplayPaymentNumber);
			this->Controls->Add(this->PaymentDateBox);
			this->Controls->Add(this->DisplayPaymentDate);
			this->Controls->Add(this->PaymentTypeBox);
			this->Controls->Add(this->DisplayPaymentType);
			this->Controls->Add(this->SendButton);
			this->Controls->Add(this->IDOrderbox);
			this->Controls->Add(this->DisplayIDOrderBox);
			this->Controls->Add(this->DisplayDiscountBox);
			this->Controls->Add(this->DiscountBox);
			this->Controls->Add(this->DisplayMarginBox);
			this->Controls->Add(this->SendDateBox);
			this->Controls->Add(this->DisplayTVABox);
			this->Controls->Add(this->DisplayHTBox);
			this->Controls->Add(this->DisplayDeliveryDateBox);
			this->Controls->Add(this->DisplaySendDateBox);
			this->Controls->Add(this->DisplayNbitemsBox);
			this->Controls->Add(this->DisplayIDCustomerBox);
			this->Controls->Add(this->DisplayOldIdItembox);
			this->Controls->Add(this->MarginBox);
			this->Controls->Add(this->TVABox);
			this->Controls->Add(this->HTCostBox);
			this->Controls->Add(this->DeliveryDateBox);
			this->Controls->Add(this->NbItemsBox);
			this->Controls->Add(this->IDCustomerBox);
			this->Controls->Add(this->OldIditemBox);
			this->Controls->Add(this->DisplayPostcode);
			this->Controls->Add(this->BuildingNameBox);
			this->Controls->Add(this->DisplayCityName);
			this->Controls->Add(this->DisplayComplement);
			this->Controls->Add(this->DisplayFloorNumber);
			this->Controls->Add(this->DisplayBuildingName);
			this->Controls->Add(this->DisplayResidencyname);
			this->Controls->Add(this->DisplayStreetNumber);
			this->Controls->Add(this->DisplayStreetName);
			this->Controls->Add(this->DisplayOrderinfoBox);
			this->Controls->Add(this->DisplayAdressBox);
			this->Controls->Add(this->PostCodeBox);
			this->Controls->Add(this->CityNameBox);
			this->Controls->Add(this->ComplementBox);
			this->Controls->Add(this->FloorNumberBox);
			this->Controls->Add(this->ResidencyNameBox);
			this->Controls->Add(this->StreetNumberBox);
			this->Controls->Add(this->StreetNameBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UpdateOrderForm";
			this->Text = L"UpdateOrderForm";
			this->Load += gcnew System::EventHandler(this, &UpdateOrderForm::UpdateOrderForm_load);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void UpdateOrderForm_load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void FirstNameBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SendDate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
