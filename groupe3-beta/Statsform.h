#pragma once
#include "CLservicesstats.h"

namespace Gstorg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Statsform
	/// </summary>
	public ref class Statsform : public System::Windows::Forms::Form
	{
	public:
		Statsform(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Statsform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TurnoverBox;
	private: System::Windows::Forms::TextBox^ DisplayTurnoverBox;
	private: System::Windows::Forms::TextBox^ DisplayIdCustomerBox;
	private: System::Windows::Forms::TextBox^ IdCustomerBox;
	private: System::Windows::Forms::DataGridView^ DatagridStats;
	private: System::Windows::Forms::Button^ SimulateVariations;
	private: System::Windows::Forms::Button^ AvgBasket;
	private: System::Windows::Forms::Button^ MonthTurnover;
	private: System::Windows::Forms::Button^ IdCustomerButton;
	private: System::Windows::Forms::Button^ TurnoverButton;
	private: System::Windows::Forms::TextBox^ Statstextbox;
	private: System::Windows::Forms::Button^ CostForClient;
	private: System::Windows::Forms::Button^ MostSoldItems;
	private: System::Windows::Forms::Button^ MinThreshold;
	private: System::Windows::Forms::Button^ SuppliesSellValue;
	private: System::Windows::Forms::Button^ LessSoldItems;
	private: System::Windows::Forms::Button^ BaseSuppliesCost;
	private: NS_Comp_Svc_Stats::CLservicesstats^ oStat;
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
			this->TurnoverBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayTurnoverBox = (gcnew System::Windows::Forms::TextBox());
			this->DisplayIdCustomerBox = (gcnew System::Windows::Forms::TextBox());
			this->IdCustomerBox = (gcnew System::Windows::Forms::TextBox());
			this->DatagridStats = (gcnew System::Windows::Forms::DataGridView());
			this->SimulateVariations = (gcnew System::Windows::Forms::Button());
			this->AvgBasket = (gcnew System::Windows::Forms::Button());
			this->MonthTurnover = (gcnew System::Windows::Forms::Button());
			this->IdCustomerButton = (gcnew System::Windows::Forms::Button());
			this->TurnoverButton = (gcnew System::Windows::Forms::Button());
			this->Statstextbox = (gcnew System::Windows::Forms::TextBox());
			this->CostForClient = (gcnew System::Windows::Forms::Button());
			this->MostSoldItems = (gcnew System::Windows::Forms::Button());
			this->MinThreshold = (gcnew System::Windows::Forms::Button());
			this->SuppliesSellValue = (gcnew System::Windows::Forms::Button());
			this->LessSoldItems = (gcnew System::Windows::Forms::Button());
			this->BaseSuppliesCost = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DatagridStats))->BeginInit();
			this->SuspendLayout();
			// 
			// TurnoverButton
			// 
			this->TurnoverButton->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->TurnoverButton->Location = System::Drawing::Point(500, 400);
			this->TurnoverButton->Name = L"TurnoverButton";
			this->TurnoverButton->Size = System::Drawing::Size(50, 22);
			this->TurnoverButton->TabIndex = 3;
			this->TurnoverButton->Text = L"Send id";
			this->TurnoverButton->UseVisualStyleBackColor = true;
			this->TurnoverButton->Visible = false;
			this->TurnoverButton->Click += gcnew System::EventHandler(this, &Statsform::TurnoverButton_Click);
			// 
			// DisplayIdCustomerBox
			// 
			this->DisplayIdCustomerBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayIdCustomerBox->BorderStyle = BorderStyle::None;
			this->DisplayIdCustomerBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayIdCustomerBox->Location = System::Drawing::Point(200, 402);
			this->DisplayIdCustomerBox->Name = L"DisplayIdCustomerBox";
			this->DisplayIdCustomerBox->Size = System::Drawing::Size(80, 22);
			this->DisplayIdCustomerBox->TabIndex = 0;
			this->DisplayIdCustomerBox->Text = L"ID Customer : ";
			this->DisplayIdCustomerBox->Visible = false;
			// 
			// IdCustomerBox
			// 
			this->IdCustomerBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IdCustomerBox->Visible = false;
			this->IdCustomerBox->Location = System::Drawing::Point(290, 400);
			this->IdCustomerBox->Name = L"IdCustomerBox";
			this->IdCustomerBox->Size = System::Drawing::Size(100, 22);
			this->IdCustomerBox->TabIndex = 1;
			// 
			// DisplayTurnoverBox
			// 
			this->DisplayTurnoverBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayTurnoverBox->BorderStyle = BorderStyle::None;
			this->DisplayTurnoverBox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->DisplayTurnoverBox->Location = System::Drawing::Point(225, 402);
			this->DisplayTurnoverBox->Name = L"DisplayTurnoverBox";
			this->DisplayTurnoverBox->Size = System::Drawing::Size(50, 22);
			this->DisplayTurnoverBox->TabIndex = 0;
			this->DisplayTurnoverBox->Text = L"Month : ";
			this->DisplayTurnoverBox->Visible = false;
			// 
			// TurnoverBox
			// 
			this->TurnoverBox->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TurnoverBox->Location = System::Drawing::Point(275, 400);
			this->TurnoverBox->Name = L"TurnoverBox";
			this->TurnoverBox->Size = System::Drawing::Size(100, 22);
			this->TurnoverBox->TabIndex = 1;
			this->TurnoverBox->Visible = false;
			// 
			// DatagridStats
			// 
			this->DatagridStats->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DatagridStats->Location = System::Drawing::Point(80, 80);
			this->DatagridStats->Name = L"dgv_enr";
			this->DatagridStats->Size = System::Drawing::Size(470, 200);
			this->DatagridStats->TabIndex = 0;
			this->DatagridStats->Visible = false;
			// 
			// IdCustomerButton
			// 
			this->IdCustomerButton->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->IdCustomerButton->Location = System::Drawing::Point(500, 400);
			this->IdCustomerButton->Name = L"IdCustomerButton";
			this->IdCustomerButton->Size = System::Drawing::Size(50, 22);
			this->IdCustomerButton->TabIndex = 3;
			this->IdCustomerButton->Text = L"Send id";
			this->IdCustomerButton->UseVisualStyleBackColor = true;
			this->IdCustomerButton->Visible = false;
			this->IdCustomerButton->Click += gcnew System::EventHandler(this, &Statsform::IdCustomerButton_Click);
			// 
			// SimulateVariations
			// 
			this->SimulateVariations->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->SimulateVariations->Location = System::Drawing::Point(65, 105);
			this->SimulateVariations->Name = L"SimulateVariations";
			this->SimulateVariations->Size = System::Drawing::Size(510, 60);
			this->SimulateVariations->TabIndex = 1;
			this->SimulateVariations->Text = L"Tva, Margin, Discounts, Inventory Shrinkage Variations ";
			this->SimulateVariations->UseVisualStyleBackColor = true;
			this->SimulateVariations->Click += gcnew System::EventHandler(this, &Statsform::SimulateVariations_Click);
			// 
			// AvgBasket
			// 
			this->AvgBasket->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->AvgBasket->Location = System::Drawing::Point(65, 175);
			this->AvgBasket->Name = L"AvgBasket";
			this->AvgBasket->Size = System::Drawing::Size(250, 60);
			this->AvgBasket->TabIndex = 2;
			this->AvgBasket->Text = L"Average basket";
			this->AvgBasket->UseVisualStyleBackColor = true;
			this->AvgBasket->Click += gcnew System::EventHandler(this, &Statsform::AvgBasket_Click);
			// 
			// MonthTurnover
			// 
			this->MonthTurnover->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->MonthTurnover->Location = System::Drawing::Point(65, 245);
			this->MonthTurnover->Name = L"MonthTurnover";
			this->MonthTurnover->Size = System::Drawing::Size(250, 60);
			this->MonthTurnover->TabIndex = 3;
			this->MonthTurnover->Text = L"Month turnover";
			this->MonthTurnover->UseVisualStyleBackColor = true;
			this->MonthTurnover->Click += gcnew System::EventHandler(this, &Statsform::MonthTurnover_Click);
			// 
			// Statstextbox
			// 
			this->Statstextbox->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Statstextbox->ReadOnly = true;
			this->Statstextbox->BorderStyle = BorderStyle::None;
			this->Statstextbox->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->Statstextbox->Location = System::Drawing::Point(10, 20);
			this->Statstextbox->Name = L"Statstextbox";
			this->Statstextbox->Size = System::Drawing::Size(620, 39);
			this->Statstextbox->TabIndex = 4;
			this->Statstextbox->ReadOnly = true;
			this->Statstextbox->Text = L"Statistics";
			// 
			// CostForClient
			// 
			this->CostForClient->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->CostForClient->Location = System::Drawing::Point(65, 315);
			this->CostForClient->Name = L"CostForClient";
			this->CostForClient->Size = System::Drawing::Size(250, 60);
			this->CostForClient->TabIndex = 5;
			this->CostForClient->Text = L"Total cost for client";
			this->CostForClient->UseVisualStyleBackColor = true;
			this->CostForClient->Click += gcnew System::EventHandler(this, &Statsform::CostForClient_Click);
			// 
			// MostSoldItems
			// 
			this->MostSoldItems->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->MostSoldItems->Location = System::Drawing::Point(325, 315);
			this->MostSoldItems->Name = L"MostSoldItems";
			this->MostSoldItems->Size = System::Drawing::Size(250, 60);
			this->MostSoldItems->TabIndex = 8;
			this->MostSoldItems->Text = L"10 most sold items";
			this->MostSoldItems->UseVisualStyleBackColor = true;
			this->MostSoldItems->Click += gcnew System::EventHandler(this, &Statsform::MostSoldItems_Click);
			// 
			// MinThreshold
			// 
			this->MinThreshold->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->MinThreshold->Location = System::Drawing::Point(325, 245);
			this->MinThreshold->Name = L"MinThreshold";
			this->MinThreshold->Size = System::Drawing::Size(250, 60);
			this->MinThreshold->TabIndex = 7;
			this->MinThreshold->Text = L"Items under minimum threshold";
			this->MinThreshold->UseVisualStyleBackColor = true;
			this->MinThreshold->Click += gcnew System::EventHandler(this, &Statsform::MinThreshold_Click);
			// 
			// SuppliesSellValue
			// 
			this->SuppliesSellValue->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->SuppliesSellValue->Location = System::Drawing::Point(325, 175);
			this->SuppliesSellValue->Name = L"SuppliesSellValue";
			this->SuppliesSellValue->Size = System::Drawing::Size(250, 60);
			this->SuppliesSellValue->TabIndex = 6;
			this->SuppliesSellValue->Text = L"Supplies sell value";
			this->SuppliesSellValue->UseVisualStyleBackColor = true;
			this->SuppliesSellValue->Click += gcnew System::EventHandler(this, &Statsform::SuppliesSellValue_Click);
			// 
			// LessSoldItems
			// 
			this->LessSoldItems->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->LessSoldItems->Location = System::Drawing::Point(325, 385);
			this->LessSoldItems->Name = L"LessSoldItems";
			this->LessSoldItems->Size = System::Drawing::Size(250, 60);
			this->LessSoldItems->TabIndex = 10;
			this->LessSoldItems->Text = L"10 less sold items";
			this->LessSoldItems->UseVisualStyleBackColor = true;
			this->LessSoldItems->Click += gcnew System::EventHandler(this, &Statsform::LessSoldItems_Click);
			// 
			// BaseSuppliesCost
			// 
			this->BaseSuppliesCost->BackColor = ColorTranslator::FromHtml("#f3f3f3");
			this->BaseSuppliesCost->Location = System::Drawing::Point(65, 385);
			this->BaseSuppliesCost->Name = L"BaseSuppliesCost";
			this->BaseSuppliesCost->Size = System::Drawing::Size(250, 60);
			this->BaseSuppliesCost->TabIndex = 9;
			this->BaseSuppliesCost->Text = L"Base supplies cost";
			this->BaseSuppliesCost->UseVisualStyleBackColor = true;
			this->BaseSuppliesCost->Click += gcnew System::EventHandler(this, &Statsform::BaseSuppliesCost_Click);
			// 
			// Statsform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 480);
			this->Controls->Add(this->DatagridStats);
			this->Controls->Add(this->LessSoldItems);
			this->Controls->Add(this->BaseSuppliesCost);
			this->Controls->Add(this->MostSoldItems);
			this->Controls->Add(this->MinThreshold);
			this->Controls->Add(this->SuppliesSellValue);
			this->Controls->Add(this->CostForClient);
			this->Controls->Add(this->Statstextbox);
			this->Controls->Add(this->MonthTurnover);
			this->Controls->Add(this->IdCustomerButton);
			this->Controls->Add(this->TurnoverButton);
			this->Controls->Add(this->AvgBasket);
			this->Controls->Add(this->SimulateVariations);
			this->Controls->Add(this->DisplayTurnoverBox);
			this->Controls->Add(this->TurnoverBox);
			this->Controls->Add(this->DisplayIdCustomerBox);
			this->Controls->Add(this->IdCustomerBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Statsform";
			this->Text = L"Statsform";
			this->Load += gcnew System::EventHandler(this, &Statsform::Statsform_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DatagridStats))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->BackColor = ColorTranslator::FromHtml("#f3f3f3");
		}
#pragma endregion
	private: System::Void SimulateVariations_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Statstextbox->Text = L"Statistics > Variations";
		this->AvgBasket->Visible = false;
		this->MonthTurnover->Visible = false;
		this->CostForClient->Visible = false;
		this->MostSoldItems->Visible = false;
		this->MinThreshold->Visible = false;
		this->LessSoldItems->Visible = false;
		this->BaseSuppliesCost->Visible = false;
		this->SuppliesSellValue->Visible = false;
		this->SimulateVariations->Visible = false;
		this->DatagridStats->Visible = true;
		this->DatagridStats->Refresh();
	}
	private: System::Void AvgBasket_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Statstextbox->Text = L"Statistics > Average basket";
		this->AvgBasket->Visible = false;
		this->MonthTurnover->Visible = false;
		this->CostForClient->Visible = false;
		this->MostSoldItems->Visible = false;
		this->MinThreshold->Visible = false;
		this->LessSoldItems->Visible = false;
		this->BaseSuppliesCost->Visible = false;
		this->SuppliesSellValue->Visible = false;
		this->SimulateVariations->Visible = false;
		this->DatagridStats->Visible = true;
		this->DatagridStats->Refresh();
		this->oDs = this->oStat->CalcStatsavgCartAfterDiscount("consist_of");
		this->DatagridStats->DataSource = this->oDs;
		this->DatagridStats->DataMember = "consist_of";
		
	}
	private: System::Void MonthTurnover_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Statstextbox->Text = L"Statistics > Month turnover";
		this->AvgBasket->Visible = false;
		this->MonthTurnover->Visible = false;
		this->CostForClient->Visible = false;
		this->MostSoldItems->Visible = false;
		this->MinThreshold->Visible = false;
		this->LessSoldItems->Visible = false;
		this->BaseSuppliesCost->Visible = false;
		this->SuppliesSellValue->Visible = false;
		this->SimulateVariations->Visible = false;
		this->TurnoverButton->Visible = true;
		this->DatagridStats->Visible = true;
		this->DisplayTurnoverBox->Visible = true;
		this->TurnoverBox->Visible = true;
		this->DatagridStats->Refresh();
	}
	private: System::Void BaseSuppliesCost_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Statstextbox->Text = L"Statistics > Base supplies cost";
		this->AvgBasket->Visible = false;
		this->MonthTurnover->Visible = false;
		this->CostForClient->Visible = false;
		this->MostSoldItems->Visible = false;
		this->MinThreshold->Visible = false;
		this->LessSoldItems->Visible = false;
		this->BaseSuppliesCost->Visible = false;
		this->SuppliesSellValue->Visible = false;
		this->SimulateVariations->Visible = false;
		this->DatagridStats->Visible = true;
		this->DatagridStats->Refresh();
		this->oDs = this->oStat->CalcStatsbuyStockValue("article");
		this->DatagridStats->DataSource = this->oDs;
		this->DatagridStats->DataMember = "article";
	}
	private: System::Void CostForClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Statstextbox->Text = L"Statistics > Cost for client";
		this->AvgBasket->Visible = false;
		this->MonthTurnover->Visible = false;
		this->CostForClient->Visible = false;
		this->MostSoldItems->Visible = false;
		this->MinThreshold->Visible = false;
		this->LessSoldItems->Visible = false;
		this->BaseSuppliesCost->Visible = false;
		this->SuppliesSellValue->Visible = false;
		this->SimulateVariations->Visible = false;
		this->DisplayIdCustomerBox->Visible = true;
		this->IdCustomerButton->Visible = true;
		this->IdCustomerBox->Visible = true;
		this->DatagridStats->Visible = true;
		this->DatagridStats->Refresh();
	}
	private: System::Void MostSoldItems_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Statstextbox->Text = L"Statistics > Most sold items";
		this->AvgBasket->Visible = false;
		this->MonthTurnover->Visible = false;
		this->CostForClient->Visible = false;
		this->MostSoldItems->Visible = false;
		this->MinThreshold->Visible = false;
		this->LessSoldItems->Visible = false;
		this->BaseSuppliesCost->Visible = false;
		this->SuppliesSellValue->Visible = false;
		this->SimulateVariations->Visible = false;
		this->DatagridStats->Visible = true;
		this->DatagridStats->Refresh();
		this->oDs = this->oStat->IdentifyStatstenMostSold("consist_of");
		this->DatagridStats->DataSource = this->oDs;
		this->DatagridStats->DataMember = "consist_of";
	}
	private: System::Void MinThreshold_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Statstextbox->Text = L"Statistics > Minimum threshold limit";
		this->AvgBasket->Visible = false;
		this->MonthTurnover->Visible = false;
		this->CostForClient->Visible = false;
		this->MostSoldItems->Visible = false;
		this->MinThreshold->Visible = false;
		this->LessSoldItems->Visible = false;
		this->BaseSuppliesCost->Visible = false;
		this->SuppliesSellValue->Visible = false;
		this->SimulateVariations->Visible = false;
		this->DatagridStats->Visible = true;
		this->DatagridStats->Refresh();
		this->oDs = this->oStat->IdentifyStatsunderThreshold("article");
		this->DatagridStats->DataSource = this->oDs;
		this->DatagridStats->DataMember = "article";
	}
	private: System::Void SuppliesSellValue_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Statstextbox->Text = L"Statistics > Supplies sell value";
		this->AvgBasket->Visible = false;
		this->MonthTurnover->Visible = false;
		this->CostForClient->Visible = false;
		this->MostSoldItems->Visible = false;
		this->MinThreshold->Visible = false;
		this->LessSoldItems->Visible = false;
		this->BaseSuppliesCost->Visible = false;
		this->SuppliesSellValue->Visible = false;
		this->SimulateVariations->Visible = false;
		this->DatagridStats->Visible = true;
		this->DatagridStats->Refresh();
		this->oDs = this->oStat->CalcStatscommercialStockValue("article");
		this->DatagridStats->DataSource = this->oDs;
		this->DatagridStats->DataMember = "article";
	}
	private: System::Void LessSoldItems_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Statstextbox->Text = L"Statistics > Less sold items";
		this->AvgBasket->Visible = false;
		this->MonthTurnover->Visible = false;
		this->CostForClient->Visible = false;
		this->MostSoldItems->Visible = false;
		this->MinThreshold->Visible = false;
		this->LessSoldItems->Visible = false;
		this->BaseSuppliesCost->Visible = false;
		this->SuppliesSellValue->Visible = false;
		this->SimulateVariations->Visible = false;
		this->DatagridStats->Visible = true;
		this->DatagridStats->Refresh();
		this->oDs = this->oStat->IdentifyStatstenLessSold("consist_of");
		this->DatagridStats->DataSource = this->oDs;
		this->DatagridStats->DataMember = "consist_of";
	}
	private: System::Void Statsform_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oStat = gcnew NS_Comp_Svc_Stats::CLservicesstats();
	}
	private: System::Void TurnoverButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oDs = this->oStat->CalcStatsturnoverOfMonth("consist_of", System::Convert::ToInt32(this->TurnoverBox->Text));
		this->DatagridStats->DataSource = this->oDs;
		this->DatagridStats->DataMember = "consist_of";
		this->TurnoverBox->Clear();
		//Add querry with the input of TurnoverBox
	}
	private: System::Void IdCustomerButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oDs = this->oStat->CalcStatstotalBuyOfClient("consist_of", System::Convert::ToInt32(this->IdCustomerBox->Text));
		this->DatagridStats->DataSource = this->oDs;
		this->DatagridStats->DataMember = "consist_of";
		this->IdCustomerBox->Clear();
		//Add querry with the input of cost for client
	}
	private: System::Void VariationsSend_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
