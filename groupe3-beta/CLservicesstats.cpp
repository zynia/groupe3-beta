#include "pch.h"
#include "CLservicesstats.h"

void NS_Comp_Svc_Stats::CLservicesstats::setmonth(int month) {
	this->month = month;
}

int NS_Comp_Svc_Stats::CLservicesstats::getmonth(void) {
	return month;
}


NS_Comp_Svc_Stats::CLservicesstats::CLservicesstats(void) {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapArticleStats = gcnew NS_Map_Article_Stats::CLmapArticleStats();
	this->oMapOrderStats = gcnew NS_Map_Order_Stats::CLmapOrderStats();
}

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::CalcStatsavgCartAfterDiscount(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oStats->avgCartAfterDiscount();

	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::CalcStatsturnoverOfMonth(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oStats->turnoverOfMonth();

	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::CalcStatstotalBuyOfClient(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oStats->totalBuyOfClient();

	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::CalcStatscommercialStockValue(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oStats->commercialStockValue();

	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::CalcStatsbuyStockValue(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oStats->buyStockValue();

	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::IdentifyStatsunderThreshold(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oStats->underThreshold();

	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::IdentifyStatstenMostSold(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oStats->tenMostSold();

	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::IdentifyStatstenLessSold(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oStats->tenLessSold();

	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::SimVarComValue(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oStats->varComValue();

	return this->oCad->getRows(sql, dataTableName);
}

System::String^ NS_Comp_Svc_Stats::CLservicesstats::avgCartAfterDiscount() {
	return "EXEC SP_Q1_AVG_Basket";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::turnoverOfMonth() {
	return "EXEC SP_Q2_sales_turnover_by_month @nb_month ="+this->month.ToString();
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::totalBuyOfClient() {
	return "EXEC SP_Q4_customer_purchases @id_customer =" + this->oMapOrderStats->getIdcustomer().ToString();
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::commercialStockValue() {
	return "EXEC SP_Q7_stock_commercial_value";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::buyStockValue() {
	return "EXEC SP_Q8_stock_value";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::underThreshold() {
	return "EXEC SP_Q3_under_replenishment_threshold";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::tenMostSold() {
	return "EXEC SP_Q5_best_sold";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::tenLessSold() {
	return "EXEC SP_Q6_least_sold";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::varComValue() {
	return "EXEC SP_Q9_stock_variations @TVA ="+this->oMapArticleStats->getTVA().ToString()+", @margin_article ="+this->oMapArticleStats->getMarginarticle().ToString()+", @discount ="+this->oMapArticleStats->getDiscount().ToString()+", @inventory_shrinkage ="+this->oMapArticleStats->getInventoryshrinkage();
}