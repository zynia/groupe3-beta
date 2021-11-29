#include "pch.h"
#include "CLservicesorder.h"

NS_Comp_Svc_Order::CLserviceOrder::CLserviceOrder(void) {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapArticlOrd = gcnew NS_Map_Article_Order::CLmapArticleOrder();
	this->oMapCust = gcnew NS_Map_Customer::CLmapCustomer();
	this->oMapOrd = gcnew NS_Map_Order::CLmapOrder();
	this->oMapPay = gcnew NS_Map_Payment::CLmapPayment();
}

System::Data::DataSet^ NS_Comp_Svc_Order::CLserviceOrder::SelectOrder(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oOrder->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc_Order::CLserviceOrder::InsertOrder(System::String^ color, System::String^ type, float margin, int repl, float ht, System::String^ name, float discount, float tva, float invshrink, int nbstock, System::String^ delivdate, System::String^ senddate, System::String^ reforder, int nbart, System::String^ paytype, int paynb, System::String^ paydate) {

	System::String^ sql;

	this->oMapArticlOrd->setColorarticle(color);
	this->oMapArticlOrd->setTypearticle(type);
	this->oMapArticlOrd->setMarginarticle(margin);
	this->oMapArticlOrd->setReplenishmentthreshold(repl);
	this->oMapArticlOrd->setHT(ht);
	this->oMapArticlOrd->setNamearticle(name);
	this->oMapArticlOrd->setDiscount(discount);
	this->oMapArticlOrd->setTVA(tva);
	this->oMapArticlOrd->setInventoryshrinkage(invshrink);
	this->oMapArticlOrd->setNbstock(nbstock);
	this->oMapOrd->setDeliverydate(delivdate);
	this->oMapOrd->setSenddate(senddate);
	this->oMapOrd->setReforder(reforder);
	this->oMapOrd->setNbarticle(nbart);
	this->oMapPay->setPaymenttype(paytype);
	this->oMapPay->setPaymentnumber(paynb);
	this->oMapPay->setPaymentdate(paydate);
	
	sql = this->oOrder->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Order::CLserviceOrder::DeleteOrder(int id) {

	System::String^ sql;

	this->oMapOrd->setIdorder(id);

	sql = this->oOrder->Delete();

	this->oCad->actionRows(sql);
}