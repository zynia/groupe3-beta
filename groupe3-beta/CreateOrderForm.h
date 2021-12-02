#pragma once
#include "CLservicesorder.h"
#include "CLcad.h"

namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateOrderForm
	/// </summary>
	public ref class CreateOrderForm : public System::Windows::Forms::Form
	{
	public:
		CreateOrderForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateOrderForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Datagrid;
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
	private: System::Windows::Forms::TextBox^ DisplayIDItembox;
	private: System::Windows::Forms::TextBox^ DisplayIdOrder;
	private: System::Windows::Forms::TextBox^ IdOrder;
	private: System::Windows::Forms::TextBox^ MarginBox;
	private: System::Windows::Forms::TextBox^ TVABox;
	private: System::Windows::Forms::TextBox^ HTCostBox;
	private: System::Windows::Forms::TextBox^ DeliveryDateBox;
	private: System::Windows::Forms::TextBox^ NbItemsBox;
	private: System::Windows::Forms::TextBox^ IDCustomerBox;
	private: System::Windows::Forms::TextBox^ IDitemBox;
	private: System::Windows::Forms::TextBox^ DisplayDiscountBox;
	private: System::Windows::Forms::TextBox^ DiscountBox;
	private: System::Windows::Forms::Button^ SendButton;
	private: System::Windows::Forms::Button^ SendItem;
	private: System::Windows::Forms::Button^ SendAndAddItemButton;
	private: System::Windows::Forms::TextBox^ DisplayPaymentType;
	private: System::Windows::Forms::TextBox^ PaymentTypeBox;
	private: System::Windows::Forms::TextBox^ DisplayPaymentDate;
	private: System::Windows::Forms::TextBox^ PaymentDateBox;
	private: System::Windows::Forms::TextBox^ DisplayPaymentNumber;
	private: System::Windows::Forms::TextBox^ PaymentNumberBox;
	protected:

	private: NS_Comp_Svc_Order::CLserviceOrder^ oOrd;
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
			this->Datagrid = (gcnew System::Windows::Forms::DataGridView());
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
			this->DisplayIDItembox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayIdOrder = (gcnew System::Windows::Forms::TextBox());
			this->IdOrder = (gcnew System::Windows::Forms::TextBox());
			this->MarginBox = (gcnew System::Windows::Forms::TextBox());
			this->TVABox = (gcnew System::Windows::Forms::TextBox());
			this->HTCostBox = (gcnew System::Windows::Forms::TextBox());
			this->DeliveryDateBox = (gcnew System::Windows::Forms::TextBox());
			this->NbItemsBox = (gcnew System::Windows::Forms::TextBox());
			this->IDCustomerBox = (gcnew System::Windows::Forms::TextBox());
			this->IDitemBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayDiscountBox = (gcnew System::Windows::Forms::TextBox());
			this->DiscountBox = (gcnew System::Windows::Forms::TextBox());
			this->SendButton = (gcnew System::Windows::Forms::Button());
			this->SendItem = (gcnew System::Windows::Forms::Button());
			this->SendAndAddItemButton = (gcnew System::Windows::Forms::Button());
			this->DisplayPaymentType = (gcnew System::Windows::Forms::TextBox());
			this->PaymentTypeBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPaymentDate = (gcnew System::Windows::Forms::TextBox());
			this->PaymentDateBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayPaymentNumber = (gcnew System::Windows::Forms::TextBox());
			this->PaymentNumberBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Datagrid))->BeginInit();
			this->SuspendLayout();
			// 
			// Datagrid
			// 
			this->Datagrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Datagrid->Location = System::Drawing::Point(350, 57);
			this->Datagrid->Name = L"Datagrid";
			this->Datagrid->Size = System::Drawing::Size(200, 100);
			this->Datagrid->TabIndex = 0;
			this->Datagrid->Visible = false;
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
			this->DisplayMarginBox->Location = System::Drawing::Point(30, 246);
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
			this->SendDateBox->Location = System::Drawing::Point(150, 138);
			this->SendDateBox->Name = L"SendDateBox";
			this->SendDateBox->Size = System::Drawing::Size(130, 22);
			this->SendDateBox->TabIndex = 45;

			// 
			// DisplayTVABox
			// 
			this->DisplayTVABox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayTVABox->BorderStyle = BorderStyle::None;
			this->DisplayTVABox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayTVABox->Location = System::Drawing::Point(30, 219);
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
			this->DisplayHTBox->Location = System::Drawing::Point(30, 193);
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
			this->DisplayDeliveryDateBox->Location = System::Drawing::Point(30, 165);
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
			this->DisplaySendDateBox->Location = System::Drawing::Point(30, 138);
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
			this->DisplayNbitemsBox->Location = System::Drawing::Point(30, 111);
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
			this->DisplayIDCustomerBox->Location = System::Drawing::Point(30, 84);
			this->DisplayIDCustomerBox->Name = L"DisplayIDCustomerBox";
			this->DisplayIDCustomerBox->ReadOnly = true;
			this->DisplayIDCustomerBox->Size = System::Drawing::Size(110, 22);
			this->DisplayIDCustomerBox->TabIndex = 39;
			this->DisplayIDCustomerBox->Text = L"ID customer :";
			// 
			// DisplayIDItembox
			// 
			this->DisplayIDItembox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayIDItembox->BorderStyle = BorderStyle::None;
			this->DisplayIDItembox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayIDItembox->Location = System::Drawing::Point(30, 57);
			this->DisplayIDItembox->Name = L"DisplayIDItembox";
			this->DisplayIDItembox->ReadOnly = true;
			this->DisplayIDItembox->Size = System::Drawing::Size(110, 22);
			this->DisplayIDItembox->TabIndex = 38;
			this->DisplayIDItembox->Text = L"ID item :";
			// 
			// DisplayIdOrder
			// 
			this->DisplayIdOrder->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayIdOrder->BorderStyle = BorderStyle::None;
			this->DisplayIdOrder->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayIdOrder->Location = System::Drawing::Point(30, 57);
			this->DisplayIdOrder->Name = L"DisplayIdOrder";
			this->DisplayIdOrder->ReadOnly = true;
			this->DisplayIdOrder->Size = System::Drawing::Size(110, 22);
			this->DisplayIdOrder->TabIndex = 38;
			this->DisplayIdOrder->Text = L"ID Order :";
			this->DisplayIdOrder->Visible = false;
			// 
			// IdOrder
			// 
			this->IdOrder->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IdOrder->Location = System::Drawing::Point(150, 57);
			this->IdOrder->Name = L"IdOrder";
			this->IdOrder->Size = System::Drawing::Size(130, 22);
			this->IdOrder->TabIndex = 38;
			this->IdOrder->Visible = false;

			// 
			// MarginBox
			// 
			this->MarginBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MarginBox->Location = System::Drawing::Point(150, 246);
			this->MarginBox->Name = L"MarginBox";
			this->MarginBox->Size = System::Drawing::Size(130, 22);
			this->MarginBox->TabIndex = 37;
			// 
			// TVABox
			// 
			this->TVABox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TVABox->Location = System::Drawing::Point(150, 219);
			this->TVABox->Name = L"TVABox";
			this->TVABox->Size = System::Drawing::Size(130, 22);
			this->TVABox->TabIndex = 36;
			// 
			// HTCostBox
			// 
			this->HTCostBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HTCostBox->Location = System::Drawing::Point(150, 193);
			this->HTCostBox->Name = L"HTCostBox";
			this->HTCostBox->Size = System::Drawing::Size(130, 22);
			this->HTCostBox->TabIndex = 35;
			// 
			// DeliveryDateBox
			// 
			this->DeliveryDateBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeliveryDateBox->Location = System::Drawing::Point(150, 165);
			this->DeliveryDateBox->Name = L"DeliveryDateBox";
			this->DeliveryDateBox->Size = System::Drawing::Size(130, 22);
			this->DeliveryDateBox->TabIndex = 34;
			// 
			// NbItemsBox
			// 
			this->NbItemsBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NbItemsBox->Location = System::Drawing::Point(150, 111);
			this->NbItemsBox->Name = L"NbItemsBox";
			this->NbItemsBox->Size = System::Drawing::Size(130, 22);
			this->NbItemsBox->TabIndex = 33;
			// 
			// IDCustomerBox
			// 
			this->IDCustomerBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDCustomerBox->Location = System::Drawing::Point(150, 84);
			this->IDCustomerBox->Name = L"IDCustomerBox";
			this->IDCustomerBox->Size = System::Drawing::Size(130, 22);
			this->IDCustomerBox->TabIndex = 32;
			// 
			// IDitemBox
			// 
			this->IDitemBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDitemBox->Location = System::Drawing::Point(150, 57);
			this->IDitemBox->Name = L"IDitemBox";
			this->IDitemBox->Size = System::Drawing::Size(130, 22);
			this->IDitemBox->TabIndex = 31;
			// 
			// DisplayDiscountBox
			// 
			this->DisplayDiscountBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayDiscountBox->BorderStyle = BorderStyle::None;
			this->DisplayDiscountBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayDiscountBox->Location = System::Drawing::Point(30, 273);
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
			this->DiscountBox->Location = System::Drawing::Point(150, 273);
			this->DiscountBox->Name = L"DiscountBox";
			this->DiscountBox->Size = System::Drawing::Size(130, 22);
			this->DiscountBox->TabIndex = 47;
			// 
			// SendButton
			// 
			this->SendButton->Location = System::Drawing::Point(350, 340);
			this->SendButton->Name = L"SendButton";
			this->SendButton->Size = System::Drawing::Size(70, 40);
			this->SendButton->TabIndex = 52;
			this->SendButton->Text = L"Send";
			this->SendButton->UseVisualStyleBackColor = true;
			this->SendButton->Click += gcnew System::EventHandler(this, &CreateOrderForm::SendButton_Click);
			// 
			// SendItem
			// 
			this->SendItem->Location = System::Drawing::Point(350, 340);
			this->SendItem->Name = L"SendItem";
			this->SendItem->Size = System::Drawing::Size(70, 40);
			this->SendItem->TabIndex = 52;
			this->SendItem->Text = L"Send";
			this->SendItem->UseVisualStyleBackColor = true;
			this->SendItem->Click += gcnew System::EventHandler(this, &CreateOrderForm::SendItem_Click);
			// 
			// SendAndAddItemButton
			// 
			this->SendAndAddItemButton->Location = System::Drawing::Point(424, 340);
			this->SendAndAddItemButton->Name = L"SendAndAddItemButton";
			this->SendAndAddItemButton->Size = System::Drawing::Size(176, 40);
			this->SendAndAddItemButton->TabIndex = 52;
			this->SendAndAddItemButton->Text = L"Send & add new item";
			this->SendAndAddItemButton->UseVisualStyleBackColor = true;
			this->SendAndAddItemButton->Click += gcnew System::EventHandler(this, &CreateOrderForm::SendAndAddItem_Click);
			// 
			// DisplayPaymentType
			// 
			this->DisplayPaymentType->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayPaymentType->BorderStyle = BorderStyle::None;
			this->DisplayPaymentType->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayPaymentType->Location = System::Drawing::Point(30, 300);
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
			this->PaymentTypeBox->Location = System::Drawing::Point(150, 300);
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
			// CreateOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 380);
			this->Controls->Add(this->Datagrid);
			this->Controls->Add(this->PaymentNumberBox);
			this->Controls->Add(this->DisplayPaymentNumber);
			this->Controls->Add(this->PaymentDateBox);
			this->Controls->Add(this->DisplayPaymentDate);
			this->Controls->Add(this->PaymentTypeBox);
			this->Controls->Add(this->DisplayPaymentType);
			this->Controls->Add(this->SendButton);
			this->Controls->Add(this->SendItem);
			this->Controls->Add(this->SendAndAddItemButton);
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
			this->Controls->Add(this->DisplayIDItembox);
			this->Controls->Add(this->DisplayIdOrder);
			this->Controls->Add(this->IdOrder);
			this->Controls->Add(this->MarginBox);
			this->Controls->Add(this->TVABox);
			this->Controls->Add(this->HTCostBox);
			this->Controls->Add(this->DeliveryDateBox);
			this->Controls->Add(this->NbItemsBox);
			this->Controls->Add(this->IDCustomerBox);
			this->Controls->Add(this->IDitemBox);
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
			this->Name = L"CreateOrderForm";
			this->Text = L"CreateOrderForm";
			this->Load += gcnew System::EventHandler(this, &CreateOrderForm::CreateOrderForm_load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Datagrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void CreateOrderForm_load(System::Object^ sender, System::EventArgs^ e) {
		this->oOrd = gcnew NS_Comp_Svc_Order::CLserviceOrder();
	}
	private: System::Void SendButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oOrd->InsertOrder(System::Convert::ToInt32(this->PostCodeBox->Text), this->CityNameBox->Text, this->StreetNameBox->Text, System::Convert::ToInt32(this->StreetNumberBox->Text), this->ResidencyNameBox->Text, this->BuildingNameBox->Text, System::Convert::ToInt32(this->FloorNumberBox->Text), this->ComplementBox->Text, this->DeliveryDateBox->Text, this->SendDateBox->Text, System::Convert::ToInt32(this->PaymentNumberBox->Text), System::Convert::ToInt32(this->IDCustomerBox->Text), System::Convert::ToInt32(this->IDitemBox->Text), this->TVABox->Text, this->HTCostBox->Text, this->DiscountBox->Text, this->MarginBox->Text, System::Convert::ToInt32(this->NbItemsBox->Text), this->PaymentTypeBox->Text, this->PaymentDateBox->Text);
		this->IDitemBox->Clear();
		this->IDCustomerBox->Clear();
		this->NbItemsBox->Clear();
		this->SendDateBox->Clear();
		this->DeliveryDateBox->Clear();
		this->HTCostBox->Clear();
		this->TVABox->Clear();
		this->MarginBox->Clear();
		this->DiscountBox->Clear();
		this->PaymentTypeBox->Clear();
		this->StreetNameBox->Clear();
		this->StreetNumberBox->Clear();
		this->ResidencyNameBox->Clear();
		this->BuildingNameBox->Clear();
		this->FloorNumberBox->Clear();
		this->ComplementBox->Clear();
		this->CityNameBox->Clear();
		this->PostCodeBox->Clear();
		this->PaymentDateBox->Clear();
		this->PaymentNumberBox->Clear();
	}
	private: System::Void SendAndAddItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->oOrd->InsertOrder(System::Convert::ToInt32(this->PostCodeBox->Text), this->CityNameBox->Text, this->StreetNameBox->Text, System::Convert::ToInt32(this->StreetNumberBox->Text), this->ResidencyNameBox->Text, this->BuildingNameBox->Text, System::Convert::ToInt32(this->FloorNumberBox->Text), this->ComplementBox->Text, this->DeliveryDateBox->Text, this->SendDateBox->Text, System::Convert::ToInt32(this->PaymentNumberBox->Text), System::Convert::ToInt32(this->IDCustomerBox->Text), System::Convert::ToInt32(this->IDitemBox->Text), this->TVABox->Text, this->HTCostBox->Text, this->DiscountBox->Text, this->MarginBox->Text, System::Convert::ToInt32(this->NbItemsBox->Text), this->PaymentTypeBox->Text, this->PaymentDateBox->Text);

		this->IDitemBox->Clear();
		this->NbItemsBox->Clear();
		this->MarginBox->Clear();
		this->DiscountBox->Clear();
		this->HTCostBox->Clear();
		this->TVABox->Clear();
		this->DisplayPaymentType->Visible = false;
		this->PaymentTypeBox->Visible = false;
		this->StreetNameBox->Visible = false;
		this->DisplayStreetName->Visible = false;
		this->StreetNumberBox->Visible = false;
		this->DisplayStreetNumber->Visible = false;
		this->DisplayResidencyname->Visible = false;
		this->ResidencyNameBox->Visible = false;
		this->DisplayBuildingName->Visible = false;
		this->BuildingNameBox->Visible = false;
		this->DisplayFloorNumber->Visible = false;
		this->FloorNumberBox->Visible = false;
		this->DisplayComplement->Visible = false;
		this->ComplementBox->Visible = false;
		this->DisplayCityName->Visible = false;
		this->CityNameBox->Visible = false;
		this->DisplayPostcode->Visible = false;
		this->PostCodeBox->Visible = false;
		this->DisplayPaymentDate->Visible = false;
		this->PaymentDateBox->Visible = false;
		this->DisplayPaymentNumber->Visible = false;
		this->PaymentNumberBox->Visible = false;
		this->DisplayAdressBox->Visible = false;
		this->SendButton->Visible = false;
		this->SendAndAddItemButton->Visible = false;
		this->Datagrid->Visible = true;
		this->DisplayIDCustomerBox->Visible = false;
		this->IDCustomerBox->Visible = false;
		this->DisplaySendDateBox->Visible = false;
		this->SendDateBox->Visible = false;
		this->DisplayDeliveryDateBox->Visible = false;
		this->DeliveryDateBox->Visible = false;
		this->Datagrid->Refresh();
		this->DisplayIDItembox->Location = System::Drawing::Point(30, 84);
		this->IDitemBox->Location = System::Drawing::Point(150, 84);
		this->DisplayMarginBox->Location = System::Drawing::Point(30, 138);
		this->MarginBox->Location = System::Drawing::Point(150, 138);
		this->DisplayDiscountBox->Location = System::Drawing::Point(30, 165);
		this->DiscountBox->Location = System::Drawing::Point(150, 165);
		this->DisplayIdOrder->Visible = true;
		this->IdOrder->Visible = true;
	}
	private: System::Void SendItem_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	};
}
