#include "pch.h"
#include "CLmapPayment.h"

void NS_Map_Payment::CLmapPayment::setIdpayement(int id) {
	this->id_payement = id;
}

int NS_Map_Payment::CLmapPayment::getIdpayement(void) {
	return id_payement;
}

void NS_Map_Payment::CLmapPayment::setPaymenttype(System::String^ paytype) {
	this->Payment_type = paytype;
}

System::String^ NS_Map_Payment::CLmapPayment::getPaymenttype(void) {
	return Payment_type;
}

void NS_Map_Payment::CLmapPayment::setPaymentnumber(int paynb) {
	this->Payment_number = paynb;
}

int NS_Map_Payment::CLmapPayment::getPaymentnumber(void) {
	return Payment_number;
}

void NS_Map_Payment::CLmapPayment::setPaymentdate(System::String^ paydate) {
	this->Payment_date = paydate;
}

System::String^ NS_Map_Payment::CLmapPayment::getPaymentdate(void) {
	return Payment_date;
}