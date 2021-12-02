#include "pch.h"
#include "CLservicesorder.h"

NS_Comp_Svc_Order::CLserviceOrder::CLserviceOrder(void) {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapArticlOrd = gcnew NS_Map_Article_Order::CLmapArticleOrder();
	this->oMapCust = gcnew NS_Map_Customer::CLmapCustomer();
	this->oMapOrd = gcnew NS_Map_Order::CLmapOrder();
	this->oMapPay = gcnew NS_Map_Payment::CLmapPayment();
	this->oMapPostcode = gcnew NS_Map_Post_Code::CLmapPostcodeClient();
	this->oMapCity = gcnew NS_Map_City_Client::CLmapCityCLient();
	this->oMapAddr = gcnew NS_Map_Addr_Client::CLmapAddressClient();
}

System::Data::DataSet^ NS_Comp_Svc_Order::CLserviceOrder::SelectOrder(System::String^ dataTableName, int id) {
	System::String^ sql;

	this->oMapOrd->setIdorder(id);
	sql = this->oOrder->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc_Order::CLserviceOrder::InsertOrder(int postcode, System::String^ cityname, System::String^ streetname, int streetnb, System::String^ residence, System::String^ building, int floornb, System::String^ complement, System::String^ deliverydate, System::String^ senddate, int paymentnb, int idcust, int idart, System::String^ tva, System::String^ ht, System::String^ discount, System::String^ margin, int nbarticle, System::String^ paymenttype, System::String^ paymentdate) {

	System::String^ sql;

	this->oMapPostcode->setPostcode(postcode);
	this->oMapCity->setNamecity(cityname);
	this->oMapAddr->setStreetname(streetname);
	this->oMapAddr->setStreetnumber(streetnb);
	this->oMapAddr->setResidencename(residence);
	this->oMapAddr->setBuildingname(building);
	this->oMapAddr->setFloornumber(floornb);
	this->oMapAddr->setComplement(complement);
	this->oMapOrd->setDeliverydate(deliverydate);
	this->oMapOrd->setSenddate(senddate);
	this->oMapPay->setPaymentnumber(paymentnb);
	this->oMapCust->setIdcustomer(idcust);
	this->oMapArticlOrd->setidarticle(idart);
	this->oMapArticlOrd->setTVA(tva);
	this->oMapArticlOrd->setHT(ht);
	this->oMapArticlOrd->setDiscount(discount);
	this->oMapArticlOrd->setMarginarticle(margin);
	this->oMapOrd->setNbarticle(nbarticle);
	this->oMapPay->setPaymenttype(paymenttype);
	this->oMapPay->setPaymentdate(paymentdate);


	sql = Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Order::CLserviceOrder::DeleteOrder(int id) {

	System::String^ sql;

	this->oMapOrd->setIdorder(id);

	sql = Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Order::CLserviceOrder::UpdateOrder(int idord, int idcust, int postcode, System::String^ cityname, System::String^ streetname, int streetnb, System::String^ residence, System::String^ building, int floornb, System::String^ complement, System::String^ tva, System::String^ ht, System::String^ discount, System::String^ margin, int nbart, System::String^ paytype, int paynb, System::String^ paydate, System::String^ delivdate, System::String^ senddate, int idart, int idartchange) {

	System::String^ sql;

	this->oMapOrd->setIdorder(idord);
	this->oMapCust->setIdcustomer(idcust);
	this->oMapPostcode->setPostcode(postcode);
	this->oMapCity->setNamecity(cityname);
	this->oMapAddr->setStreetname(streetname);
	this->oMapAddr->setStreetnumber(streetnb);
	this->oMapAddr->setResidencename(residence);
	this->oMapAddr->setBuildingname(building);
	this->oMapAddr->setFloornumber(floornb);
	this->oMapAddr->setComplement(complement);
	this->oMapArticlOrd->setTVA(tva);
	this->oMapArticlOrd->setHT(ht);
	this->oMapArticlOrd->setDiscount(discount);
	this->oMapArticlOrd->setMarginarticle(margin);
	this->oMapOrd->setNbarticle(nbart);
	this->oMapPay->setPaymenttype(paytype);
	this->oMapPay->setPaymentnumber(paynb);
	this->oMapPay->setPaymentdate(paydate);
	this->oMapOrd->setDeliverydate(delivdate);
	this->oMapOrd->setSenddate(senddate);
	this->oMapArticlOrd->setidarticle(idart);
	this->oMapArticlOrd->setidarticlechanged(idartchange);

	
	sql = Update();

	this->oCad->actionRows(sql);
}

System::String^ NS_Comp_Svc_Order::CLserviceOrder::Select() {
	return "EXEC SP_SO @id_order =" + this->oMapOrd->getIdorder().ToString();
}

System::String^ NS_Comp_Svc_Order::CLserviceOrder::Insert() {
	return "EXEC SP_CO " +
		"@Post_code = " + this->oMapPostcode->getPostcode().ToString() +
		", @name_city = '" + this->oMapCity->getNamecity() +
		"', @Street_name ='" + this->oMapAddr->getStreetname() +
		"', @Street_number =" + this->oMapAddr->getStreetnumber().ToString() +
		", @Residency_name ='" + this->oMapAddr->getResidencename() +
		"', @Building_name = '" + this->oMapAddr->getBuildingname() +
		"', @Floor_number =" + this->oMapAddr->getFloornumber().ToString() +
		", @Complement ='" + this->oMapAddr->getComplement() +
		"', @delivery_date = '" + this->oMapOrd->getDeliverydate() +
		"', @send_date ='" + this->oMapOrd->getSenddate() +
		"', @nb_payment = " + this->oMapPay->getPaymentnumber().ToString() +
		", @id_customer =" + this->oMapCust->getIdcustomer().ToString() +
		", @id_article =" + this->oMapArticlOrd->getidarticle().ToString() +
		", @TVA =" + this->oMapArticlOrd->getTVA() +
		", @HT =" + this->oMapArticlOrd->getHT() +
		", @discount =" + this->oMapArticlOrd->getDiscount() +
		", @margin_article =" + this->oMapArticlOrd->getMarginarticle() +
		", @nb_article =" + this->oMapOrd->getNbarticle().ToString() +
		", @Payment_type = '" + this->oMapPay->getPaymenttype() +
		"', @Payment_date = '" + this->oMapPay->getPaymentdate() + "';";
}

System::String^ NS_Comp_Svc_Order::CLserviceOrder::Delete() {
	return "EXEC SP_DO @id ="+this->oMapOrd->getIdorder().ToString()+";";
}

System::String^ NS_Comp_Svc_Order::CLserviceOrder::Update() {
	return "EXEC SP_UO "+
		"@id_order = " + this->oMapOrd->getIdorder().ToString()+
		", @id_customer = "+this->oMapCust->getIdcustomer().ToString()+
		", @post_code = " + this->oMapPostcode->getPostcode().ToString() + 
		", @name_city = '" + this->oMapCity->getNamecity() + 
		"', @street_name = '" + this->oMapAddr->getStreetnumber().ToString() + 
		"', @street_number = "+ this->oMapAddr->getStreetnumber().ToString()+
		", @residency_name = '" + this->oMapAddr->getResidencename() + 
		"', @building_name = '" + this->oMapAddr->getBuildingname() + 
		"', @floor_number = " + this->oMapAddr->getFloornumber().ToString() + 
		", @complement = '" + this->oMapAddr->getComplement() + 
		"', @TVA = " + this->oMapArticlOrd->getTVA() + 
		", @HT = " + this->oMapArticlOrd->getHT() + 
		", @discount = " + this->oMapArticlOrd->getDiscount() + 
		", @margin_article = "+this->oMapArticlOrd->getMarginarticle()+
		", @nb_article = " + this->oMapOrd->getNbarticle() + 
		", @Payment_type = '"+this->oMapPay->getPaymenttype()+
		"', @nb_payment = "+this->oMapPay->getPaymentnumber().ToString()+
		", @Payment_date = '"+this->oMapPay->getPaymentdate()+
		"', @delivery_date = '"+this->oMapOrd->getDeliverydate()+
		"', @send_date = '"+this->oMapOrd->getSenddate()+
		"', @id_article = "+this->oMapArticlOrd->getidarticle().ToString()+
		", @id_article_changed = "+this->oMapArticlOrd->getidarticlechanged().ToString();
}