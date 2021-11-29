#include "pch.h"
#include "CLservicesupply.h"

NS_Comp_Svc_Supply::CLservicesupply::CLservicesupply(void) {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapArtSup = gcnew NS_Map_Article_Supply::CLmapArticleSupply();
}

System::Data::DataSet^ NS_Comp_Svc_Supply::CLservicesupply::SelectSupply(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oSupply->Select();

	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc_Supply::CLservicesupply::InsertSupply(System::String^ color, System::String^ type, float margin, int repl, float ht, System::String^ name, float discount, float tva, float invshrink, int nbstock) {
	System::String^ sql;

	this->oMapArtSup->setColorarticle(color);
	this->oMapArtSup->setTypearticle(type);
	this->oMapArtSup->setMarginarticle(margin);
	this->oMapArtSup->setReplenishmentthreshold(repl);
	this->oMapArtSup->setHT(ht);
	this->oMapArtSup->setNamearticle(name);
	this->oMapArtSup->setDiscount(discount);
	this->oMapArtSup->setTVA(tva);
	this->oMapArtSup->setInventoryshrinkage(invshrink);
	this->oMapArtSup->setNbstock(nbstock);

	this->oSupply->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Supply::CLservicesupply::DeleteSupply(int id) {
	System::String^ sql;

	this->oMapArtSup->setidarticle(id);

	sql = this->oSupply->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Supply::CLservicesupply::UpdateSupply(int id, System::String^ color, System::String^ type, float margin, int repl, float ht, System::String^ name, float discount, float tva, float invshrink, int nbstock) {
	System::String^ sql;

	this->oMapArtSup->setidarticle(id);
	this->oMapArtSup->setColorarticle(color);
	this->oMapArtSup->setTypearticle(type);
	this->oMapArtSup->setMarginarticle(margin);
	this->oMapArtSup->setReplenishmentthreshold(repl);
	this->oMapArtSup->setHT(ht);
	this->oMapArtSup->setNamearticle(name);
	this->oMapArtSup->setDiscount(discount);
	this->oMapArtSup->setTVA(tva);
	this->oMapArtSup->setInventoryshrinkage(invshrink);
	this->oMapArtSup->setNbstock(nbstock);

	sql = this->oSupply->Update();

	this->oCad->actionRows(sql);
}

System::String^ NS_Comp_Svc_Supply::CLservicesupply::Select() {
	return "";
}

System::String^ NS_Comp_Svc_Supply::CLservicesupply::Insert() {
	return "";
}

System::String^ NS_Comp_Svc_Supply::CLservicesupply::Delete() {
	return "";
}

System::String^ NS_Comp_Svc_Supply::CLservicesupply::Update() {
	return "";
}