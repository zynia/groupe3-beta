#include "pch.h"
#include "CLmapOrderStats.h"


void NS_Map_Order_Stats::CLmapOrderStats::setIdcustomer(int id) {
	this->id_customer = id;
}

int NS_Map_Order_Stats::CLmapOrderStats::getIdcustomer(void) {
	return id_customer;
}

void NS_Map_Order_Stats::CLmapOrderStats::setIdorder(int id) {
	this->id_order = id;
}

int NS_Map_Order_Stats::CLmapOrderStats::getIdorder(void) {
	return id_order;
}

void NS_Map_Order_Stats::CLmapOrderStats::setDeliverydate(System::String^ delivdate) {
	this->delivery_date = delivdate;
}

System::String^ NS_Map_Order_Stats::CLmapOrderStats::getDeliverydate(void) {
	return delivery_date;
}

void NS_Map_Order_Stats::CLmapOrderStats::setSenddate(System::String^ senddate) {
	this->send_date = senddate;
}

System::String^ NS_Map_Order_Stats::CLmapOrderStats::getSenddate(void) {
	return send_date;
}

void NS_Map_Order_Stats::CLmapOrderStats::setReforder(System::String^ ref) {
	this->ref_order = ref;
}

System::String^ NS_Map_Order_Stats::CLmapOrderStats::getReforder(void) {
	return ref_order;
}

void NS_Map_Order_Stats::CLmapOrderStats::setNbarticle(int nb) {
	this->nb_article = nb;
}

int NS_Map_Order_Stats::CLmapOrderStats::getNbarticle(void) {
	return nb_article;
}