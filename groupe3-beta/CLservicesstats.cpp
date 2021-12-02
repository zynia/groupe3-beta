#include "pch.h"
#include "CLservicesstats.h"


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

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::CalcStatsturnoverOfMonth(System::String^ dataTableName, int nbmonth) {
	System::String^ sql;

	sql = this->oStats->turnoverOfMonth(nbmonth);

	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::CalcStatstotalBuyOfClient(System::String^ dataTableName, int idcustomer) {
	System::String^ sql;

	sql = this->oStats->totalBuyOfClient(idcustomer);

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

System::Data::DataSet^ NS_Comp_Svc_Stats::CLservicesstats::SimVarComValue(System::String^ dataTableName, System::String^ tva, System::String^ margin, System::String^ discount, System::String^ invshrink) {
	System::String^ sql;

	sql = this->oStats->varComValue(tva,margin,discount,invshrink);

	return this->oCad->getRows(sql, dataTableName);
}

System::String^ NS_Comp_Svc_Stats::CLservicesstats::avgCartAfterDiscount() {
	return "EXEC SP_Q1_AVG_Basket";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::turnoverOfMonth(int nbmonth) {
	return "EXEC SP_Q2_sales_turnover_by_month @nb_month ="+nbmonth.ToString();
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::totalBuyOfClient(int idcustomer) {
	return "EXEC SP_Q4_customer_purchases @id_customer =" + idcustomer.ToString();
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
System::String^ NS_Comp_Svc_Stats::CLservicesstats::varComValue(System::String^ tva, System::String^ margin, System::String^ discount, System::String^ invshrink) {
	return "EXEC SP_Q9_stock_variations @TVA ="+tva+", @margin_article ="+margin+", @discount ="+discount+", @inventory_shrinkage ="+invshrink;
}