#include "pch.h"
#include "CLmapOrder.h"

void NS_Map_Order::CLmapOrder::setIdorder(int id) {
	this->id_order = id;
}

int NS_Map_Order::CLmapOrder::getIdorder(void) {
	return id_order;
}

void NS_Map_Order::CLmapOrder::setDeliverydate(System::String^ delivdate) {
	this->delivery_date = delivdate;
}

System::String^ NS_Map_Order::CLmapOrder::getDeliverydate(void) {
	return delivery_date;
}

void NS_Map_Order::CLmapOrder::setSenddate(System::String^ senddate) {
	this->send_date = senddate;
}

System::String^ NS_Map_Order::CLmapOrder::getSenddate(void) {
	return send_date;
}

void NS_Map_Order::CLmapOrder::setReforder(System::String^ ref) {
	this->ref_order = ref;
}

System::String^ NS_Map_Order::CLmapOrder::getReforder(void) {
	return ref_order;
}

void NS_Map_Order::CLmapOrder::setNbarticle(int nb) {
	this->nb_article = nb;
}

int NS_Map_Order::CLmapOrder::getNbarticle(void) {
	return nb_article;
}