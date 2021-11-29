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
