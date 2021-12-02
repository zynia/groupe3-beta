#include "pch.h"
#include "CLservicesupply.h"

NS_Comp_Svc_Supply::CLservicesupply::CLservicesupply(void) {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapArtSup = gcnew NS_Map_Article_Supply::CLmapArticleSupply();
}

System::Data::DataSet^ NS_Comp_Svc_Supply::CLservicesupply::SelectSupply(System::String^ dataTableName, int idsupply) {
	System::String^ sql;

	this->oMapArtSup->setidarticle(idsupply);

	sql = this->oSupply->Select();

	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc_Supply::CLservicesupply::InsertSupply(System::String^ color, System::String^ type, System::String^ margin, int repl, System::String^ ht, System::String^ name, System::String^ discount, System::String^ tva, System::String^ invshrink, int nbstock) {
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

	sql = Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Supply::CLservicesupply::DeleteSupply(int id) {
	System::String^ sql;

	this->oMapArtSup->setidarticle(id);

	sql = this->oSupply->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Supply::CLservicesupply::UpdateSupply(int id, System::String^ color, System::String^ type, System::String^ margin, int repl, System::String^ ht, System::String^ name, System::String^ discount, System::String^ tva, System::String^ invshrink, int nbstock) {
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

	sql = Update();

	this->oCad->actionRows(sql);
}

System::String^ NS_Comp_Svc_Supply::CLservicesupply::Select() {
	return "EXEC SP_SA @id_article ="+this->oMapArtSup->getidarticle();
}

System::String^ NS_Comp_Svc_Supply::CLservicesupply::Insert() {
	return "EXEC SP_CA "+
		" @color_article = '" + this->oMapArtSup->getColorarticle() + 
		"', @type_article = '" + this->oMapArtSup->getTypearticle() + 
		"', @margin_article = " + this->oMapArtSup->getMarginarticle() + 
		", @replenishment_threshold = " + this->oMapArtSup->getReplenishmentthreshold() + 
		", @HT = " + this->oMapArtSup->getHT() + 
		", @name_article = '" + this->oMapArtSup->getNamearticle() + 
		"', @discount = " + this->oMapArtSup->getDiscount() + 
		", @TVA = " + this->oMapArtSup->getTVA() + 
		", @Inventory_shrinkage = " + this->oMapArtSup->getInventoryshrinkage() + 
		", @nb_stock = " + this->oMapArtSup->getNbstock().ToString()+";";
}

System::String^ NS_Comp_Svc_Supply::CLservicesupply::Delete() {
	return "EXEC SP_D @tab = 'Article' , @id ="+this->oMapArtSup->getidarticle().ToString();
}

System::String^ NS_Comp_Svc_Supply::CLservicesupply::Update() {
	return "";//"EXEC SP_UA "+this->oMapArtSup->getidarticle().ToString()+", @color_article ="+this->oMapArtSup->getColorarticle()+", @type_article ="+this->oMapArtSup->getTypearticle()+", @margin_article ="+this->oMapArtSup->getMarginarticle().ToString()+", @replenishment_threshold ="+this->oMapArtSup->getReplenishmentthreshold().ToString()+", @HT ="+this->oMapArtSup->getHT().ToString()+", @name_article ="+this->oMapArtSup->getNamearticle()+", @discount ="+this->oMapArtSup->getDiscount().ToString()+", @TVA ="+this->oMapArtSup->getTVA().ToString()+", @inventory_shrinkage ="+this->oMapArtSup->getInventoryshrinkage().ToString()+", @nb_stock ="+this->oMapArtSup->getNbstock().ToString();
}