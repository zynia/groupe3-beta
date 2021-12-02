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
	/// Summary for CreateSupplyForm
	/// </summary>
	public ref class CreateSupplyForm : public System::Windows::Forms::Form
	{
	public:
		CreateSupplyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateSupplyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ DisplayIteminfoBox;
	private: System::Windows::Forms::TextBox^ DisplayBasepriceBox;

	protected:



	private: System::Windows::Forms::TextBox^ QuantityBox;
	private: System::Windows::Forms::TextBox^ DisplayTVABox;
	private: System::Windows::Forms::TextBox^ DisplayMarginBox;
	private: System::Windows::Forms::TextBox^ DisplayInventoryshrinkagebox;
	private: System::Windows::Forms::TextBox^ DisplayItemQuantityBox;
	private: System::Windows::Forms::TextBox^ DisplayItemNameBox;
	private: System::Windows::Forms::TextBox^ DisplayItemcolorBox;
	private: System::Windows::Forms::TextBox^ DisplayItemtypebox;
	private: System::Windows::Forms::TextBox^ BasePriceBox;
	private: System::Windows::Forms::TextBox^ TVABox;
	private: System::Windows::Forms::TextBox^ MarginBox;
	private: System::Windows::Forms::TextBox^ InventoryShrinkageBox;
	private: System::Windows::Forms::TextBox^ ItemNameBox;
	private: System::Windows::Forms::TextBox^ ItemcolorBox;
	private: System::Windows::Forms::TextBox^ IDitemtypeBox;
	private: System::Windows::Forms::TextBox^ DisplayDiscountBox;
	private: System::Windows::Forms::TextBox^ DiscountBox;
	private: System::Windows::Forms::TextBox^ DisplayReplenishmentBox;
	private: System::Windows::Forms::TextBox^ ReplenishmenBox;
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
			this->DisplayIteminfoBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayBasepriceBox = (gcnew System::Windows::Forms::TextBox());
			this->QuantityBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayTVABox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayMarginBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayInventoryshrinkagebox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayItemQuantityBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayItemNameBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayItemcolorBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayItemtypebox = (gcnew System::Windows::Forms::TextBox());
			this->BasePriceBox = (gcnew System::Windows::Forms::TextBox());
			this->TVABox = (gcnew System::Windows::Forms::TextBox());
			this->MarginBox = (gcnew System::Windows::Forms::TextBox());
			this->InventoryShrinkageBox = (gcnew System::Windows::Forms::TextBox());
			this->ItemNameBox = (gcnew System::Windows::Forms::TextBox());
			this->ItemcolorBox = (gcnew System::Windows::Forms::TextBox());
			this->IDitemtypeBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayDiscountBox = (gcnew System::Windows::Forms::TextBox());
			this->DiscountBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayReplenishmentBox = (gcnew System::Windows::Forms::TextBox());
			this->ReplenishmenBox = (gcnew System::Windows::Forms::TextBox());
			this->SendButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// DisplayIteminfoBox
			// 
			this->DisplayIteminfoBox->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayIteminfoBox->BorderStyle = BorderStyle::None;
			this->DisplayIteminfoBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayIteminfoBox->Location = System::Drawing::Point(270, 50);
			this->DisplayIteminfoBox->Name = L"DisplayIteminfoBox";
			this->DisplayIteminfoBox->ReadOnly = true;
			this->DisplayIteminfoBox->Size = System::Drawing::Size(100, 29);
			this->DisplayIteminfoBox->TabIndex = 14;
			this->DisplayIteminfoBox->Text = L"Item Info";
			// 
			// DisplayBasepriceBox
			// 
			this->DisplayBasepriceBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayBasepriceBox->BorderStyle = BorderStyle::None;
			this->DisplayBasepriceBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayBasepriceBox->Location = System::Drawing::Point(355, 103);
			this->DisplayBasepriceBox->Name = L"DisplayBasepriceBox";
			this->DisplayBasepriceBox->ReadOnly = true;
			this->DisplayBasepriceBox->Size = System::Drawing::Size(110, 22);
			this->DisplayBasepriceBox->TabIndex = 46;
			this->DisplayBasepriceBox->Text = L"Base price  :";
			// 
			// QuantityBox
			// 
			this->QuantityBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QuantityBox->Location = System::Drawing::Point(165, 199);
			this->QuantityBox->Name = L"QuantityBox";
			this->QuantityBox->Size = System::Drawing::Size(130, 22);
			this->QuantityBox->TabIndex = 45;
			// 
			// DisplayTVABox
			// 
			this->DisplayTVABox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayTVABox->BorderStyle = BorderStyle::None;
			this->DisplayTVABox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayTVABox->Location = System::Drawing::Point(355, 133);
			this->DisplayTVABox->Name = L"DisplayTVABox";
			this->DisplayTVABox->ReadOnly = true;
			this->DisplayTVABox->Size = System::Drawing::Size(110, 22);
			this->DisplayTVABox->TabIndex = 44;
			this->DisplayTVABox->Text = L"TVA :";
			// 
			// DisplayMarginBox
			// 
			this->DisplayMarginBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayMarginBox->BorderStyle = BorderStyle::None;
			this->DisplayMarginBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayMarginBox->Location = System::Drawing::Point(355, 165);
			this->DisplayMarginBox->Name = L"DisplayMarginBox";
			this->DisplayMarginBox->ReadOnly = true;
			this->DisplayMarginBox->Size = System::Drawing::Size(110, 22);
			this->DisplayMarginBox->TabIndex = 43;
			this->DisplayMarginBox->Text = L"Margin :";
			// 
			// DisplayInventoryshrinkagebox
			// 
			this->DisplayInventoryshrinkagebox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayInventoryshrinkagebox->BorderStyle = BorderStyle::None;
			this->DisplayInventoryshrinkagebox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayInventoryshrinkagebox->Location = System::Drawing::Point(35, 231);
			this->DisplayInventoryshrinkagebox->Name = L"DisplayInventoryshrinkagebox";
			this->DisplayInventoryshrinkagebox->ReadOnly = true;
			this->DisplayInventoryshrinkagebox->Size = System::Drawing::Size(120, 22);
			this->DisplayInventoryshrinkagebox->TabIndex = 42;
			this->DisplayInventoryshrinkagebox->Text = L"Inventory Shrinkage  :";
			// 
			// DisplayItemQuantityBox
			// 
			this->DisplayItemQuantityBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayItemQuantityBox->BorderStyle = BorderStyle::None;
			this->DisplayItemQuantityBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayItemQuantityBox->Location = System::Drawing::Point(35, 199);
			this->DisplayItemQuantityBox->Name = L"DisplayItemQuantityBox";
			this->DisplayItemQuantityBox->ReadOnly = true;
			this->DisplayItemQuantityBox->Size = System::Drawing::Size(120, 22);
			this->DisplayItemQuantityBox->TabIndex = 41;
			this->DisplayItemQuantityBox->Text = L"Item quantity :";
			// 
			// DisplayItemNameBox
			// 
			this->DisplayItemNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayItemNameBox->BorderStyle = BorderStyle::None;
			this->DisplayItemNameBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayItemNameBox->Location = System::Drawing::Point(35, 167);
			this->DisplayItemNameBox->Name = L"DisplayItemNameBox";
			this->DisplayItemNameBox->ReadOnly = true;
			this->DisplayItemNameBox->Size = System::Drawing::Size(120, 22);
			this->DisplayItemNameBox->TabIndex = 40;
			this->DisplayItemNameBox->Text = L"Item name :";
			// 
			// DisplayItemcolorBox
			// 
			this->DisplayItemcolorBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayItemcolorBox->BorderStyle = BorderStyle::None;
			this->DisplayItemcolorBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayItemcolorBox->Location = System::Drawing::Point(35, 135);
			this->DisplayItemcolorBox->Name = L"DisplayItemcolorBox";
			this->DisplayItemcolorBox->ReadOnly = true;
			this->DisplayItemcolorBox->Size = System::Drawing::Size(120, 22);
			this->DisplayItemcolorBox->TabIndex = 39;
			this->DisplayItemcolorBox->Text = L"Item color :";
			// 
			// DisplayItemtypebox
			// 
			this->DisplayItemtypebox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayItemtypebox->BorderStyle = BorderStyle::None;
			this->DisplayItemtypebox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayItemtypebox->Location = System::Drawing::Point(35, 103);
			this->DisplayItemtypebox->Name = L"DisplayItemtypebox";
			this->DisplayItemtypebox->ReadOnly = true;
			this->DisplayItemtypebox->Size = System::Drawing::Size(120, 22);
			this->DisplayItemtypebox->TabIndex = 38;
			this->DisplayItemtypebox->Text = L"Item type :";
			// 
			// BasePriceBox
			// 
			this->BasePriceBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BasePriceBox->Location = System::Drawing::Point(475, 103);
			this->BasePriceBox->Name = L"BasePriceBox";
			this->BasePriceBox->Size = System::Drawing::Size(130, 22);
			this->BasePriceBox->TabIndex = 37;
			// 
			// TVABox
			// 
			this->TVABox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TVABox->Location = System::Drawing::Point(475, 133);
			this->TVABox->Name = L"TVABox";
			this->TVABox->Size = System::Drawing::Size(130, 22);
			this->TVABox->TabIndex = 36;
			// 
			// MarginBox
			// 
			this->MarginBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MarginBox->Location = System::Drawing::Point(475, 165);
			this->MarginBox->Name = L"MarginBox";
			this->MarginBox->Size = System::Drawing::Size(130, 22);
			this->MarginBox->TabIndex = 35;
			// 
			// InventoryShrinkageBox
			// 
			this->InventoryShrinkageBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InventoryShrinkageBox->Location = System::Drawing::Point(165, 231);
			this->InventoryShrinkageBox->Name = L"InventoryShrinkageBox";
			this->InventoryShrinkageBox->Size = System::Drawing::Size(130, 22);
			this->InventoryShrinkageBox->TabIndex = 34;
			// 
			// ItemNameBox
			// 
			this->ItemNameBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ItemNameBox->Location = System::Drawing::Point(165, 167);
			this->ItemNameBox->Name = L"ItemNameBox";
			this->ItemNameBox->Size = System::Drawing::Size(130, 22);
			this->ItemNameBox->TabIndex = 33;
			// 
			// ItemcolorBox
			// 
			this->ItemcolorBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ItemcolorBox->Location = System::Drawing::Point(165, 135);
			this->ItemcolorBox->Name = L"ItemcolorBox";
			this->ItemcolorBox->Size = System::Drawing::Size(130, 22);
			this->ItemcolorBox->TabIndex = 32;
			// 
			// IDitemtypeBox
			// 
			this->IDitemtypeBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDitemtypeBox->Location = System::Drawing::Point(165, 103);
			this->IDitemtypeBox->Name = L"IDitemtypeBox";
			this->IDitemtypeBox->Size = System::Drawing::Size(130, 22);
			this->IDitemtypeBox->TabIndex = 31;
			// 
			// DisplayDiscountBox
			// 
			this->DisplayDiscountBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayDiscountBox->BorderStyle = BorderStyle::None;
			this->DisplayDiscountBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayDiscountBox->Location = System::Drawing::Point(355, 197);
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
			this->DiscountBox->Location = System::Drawing::Point(475, 197);
			this->DiscountBox->Name = L"DiscountBox";
			this->DiscountBox->Size = System::Drawing::Size(130, 22);
			this->DiscountBox->TabIndex = 47;
			// 
			// DisplayReplenishmentBox
			// 
			this->DisplayReplenishmentBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayReplenishmentBox->BorderStyle = BorderStyle::None;
			this->DisplayReplenishmentBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayReplenishmentBox->Location = System::Drawing::Point(355, 231);
			this->DisplayReplenishmentBox->Name = L"DisplayReplenishmentBox";
			this->DisplayReplenishmentBox->ReadOnly = true;
			this->DisplayReplenishmentBox->Size = System::Drawing::Size(110, 22);
			this->DisplayReplenishmentBox->TabIndex = 51;
			this->DisplayReplenishmentBox->Text = L"Replenishment  :";
			// 
			// ReplenishmenBox
			// 
			this->ReplenishmenBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReplenishmenBox->Location = System::Drawing::Point(475, 231);
			this->ReplenishmenBox->Name = L"ReplenishmenBox";
			this->ReplenishmenBox->Size = System::Drawing::Size(130, 22);
			this->ReplenishmenBox->TabIndex = 50;
			// 
			// SendButton
			// 
			this->SendButton->Location = System::Drawing::Point(280, 300);
			this->SendButton->Name = L"SendButton";
			this->SendButton->Size = System::Drawing::Size(75, 23);
			this->SendButton->TabIndex = 52;
			this->SendButton->Text = L"Send";
			this->SendButton->UseVisualStyleBackColor = true;
			this->SendButton->Click += gcnew System::EventHandler(this, &CreateSupplyForm::CreateSupplyForm_Click);
			// 
			// CreateSupplyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 380);
			this->Controls->Add(this->SendButton);
			this->Controls->Add(this->DisplayReplenishmentBox);
			this->Controls->Add(this->ReplenishmenBox);
			this->Controls->Add(this->DisplayDiscountBox);
			this->Controls->Add(this->DiscountBox);
			this->Controls->Add(this->DisplayBasepriceBox);
			this->Controls->Add(this->QuantityBox);
			this->Controls->Add(this->DisplayTVABox);
			this->Controls->Add(this->DisplayMarginBox);
			this->Controls->Add(this->DisplayInventoryshrinkagebox);
			this->Controls->Add(this->DisplayItemQuantityBox);
			this->Controls->Add(this->DisplayItemNameBox);
			this->Controls->Add(this->DisplayItemcolorBox);
			this->Controls->Add(this->DisplayItemtypebox);
			this->Controls->Add(this->BasePriceBox);
			this->Controls->Add(this->TVABox);
			this->Controls->Add(this->MarginBox);
			this->Controls->Add(this->InventoryShrinkageBox);
			this->Controls->Add(this->ItemNameBox);
			this->Controls->Add(this->ItemcolorBox);
			this->Controls->Add(this->IDitemtypeBox);
			this->Controls->Add(this->DisplayIteminfoBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateSupplyForm";
			this->Text = L"CreateSupplyForm";
			this->Load += gcnew System::EventHandler(this, &CreateSupplyForm::CreateSupplyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void CreateSupplyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oSup = gcnew NS_Comp_Svc_Supply::CLservicesupply();
	}

	private: System::Void CreateSupplyForm_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSup->InsertSupply(this->ItemcolorBox->Text, this->IDitemtypeBox->Text, System::Convert::ToDouble(this->MarginBox->Text), System::Convert::ToInt32(this->ReplenishmenBox->Text), System::Convert::ToDouble(this->BasePriceBox->Text), this->ItemNameBox->Text, System::Convert::ToDouble(this->DiscountBox->Text), System::Convert::ToDouble(this->TVABox->Text), System::Convert::ToDouble(this->DisplayInventoryshrinkagebox->Text), System::Convert::ToInt32(this->ItemStockBox->Text));
		this->ItemcolorBox->Clear();
		this->IDitemtypeBox->Clear();
		this->MarginBox->Clear();
		this->ReplenishmenBox->Clear();
		this->BasePriceBox->Clear();
		this->ItemNameBox->Clear();
		this->DiscountBox->Clear();
		this->TVABox->Clear();
		this->InventoryShrinkageBox->Clear();
		this->QuantityBox->Clear();
	}
	};
}
