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
	return "";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::turnoverOfMonth() {
	return "";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::totalBuyOfClient() {
	return "";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::commercialStockValue() {
	return "";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::buyStockValue() {
	return "";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::underThreshold() {
	return "";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::tenMostSold() {
	return "";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::tenLessSold() {
	return "";
}
System::String^ NS_Comp_Svc_Stats::CLservicesstats::varComValue() {
	return "";
}