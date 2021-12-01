#include "pch.h"
#include "CLmapbilling.h"


int NS_Map_Billing::CLmapbilling::getidaddress(void) {
	return id_address;
}

int NS_Map_Billing::CLmapbilling::getidcustomer(void) {
	return id_customer;
}

void NS_Map_Billing::CLmapbilling::setidaddress(int id) {
	this->id_address = id;
}

void NS_Map_Billing::CLmapbilling::setidcustomer(int id) {
	this->id_customer = id;
}

void NS_Map_Billing::CLmapbilling::setStreetnameBilling(System::String^ streetname) {
	this->Street_name_billing = streetname;
}

System::String^ NS_Map_Billing::CLmapbilling::getStreetnameBilling(void) {
	return Street_name_billing;
}

void NS_Map_Billing::CLmapbilling::setStreetnumberBilling(int nb) {
	this->Street_number_billing = nb;
}

int NS_Map_Billing::CLmapbilling::getStreetnumberBilling(void) {
	return Street_number_billing;
}

void NS_Map_Billing::CLmapbilling::setResidencenameBilling(System::String^ residencename) {
	this->Residence_name_billing = residencename;
}

System::String^ NS_Map_Billing::CLmapbilling::getResidencenameBilling(void) {
	return Residence_name_billing;
}

void NS_Map_Billing::CLmapbilling::setBuildingnameBilling(System::String^ buildingname) {
	this->Building_name_billing = buildingname;
}

System::String^ NS_Map_Billing::CLmapbilling::getBuildingnameBilling(void) {
	return Building_name_billing;
}

void NS_Map_Billing::CLmapbilling::setFloornumberBilling(int nb) {
	this->Floor_number_billing = nb;
}

int NS_Map_Billing::CLmapbilling::getFloornumberBilling(void) {
	return Floor_number_billing;
}

void NS_Map_Billing::CLmapbilling::setComplementBilling(System::String^ complement) {
	this->Complement_billing = complement;
}

System::String^ NS_Map_Billing::CLmapbilling::getComplementBilling(void) {
	return Complement_billing;
}

void NS_Map_Billing::CLmapbilling::setCitybilling(System::String^ city) {
	this->City_billing = city;
}

System::String^ NS_Map_Billing::CLmapbilling::getCitybilling(void) {
	return City_billing;
}

void NS_Map_Billing::CLmapbilling::setPostcodeBilling(int postcode) {
	this->Postcode_billing = postcode;
}

int NS_Map_Billing::CLmapbilling::getPostcodeBilling(void) {
	return Postcode_billing;
}