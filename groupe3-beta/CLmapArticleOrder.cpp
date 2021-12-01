#include "pch.h"
#include "CLmapArticleOrder.h"

void NS_Map_Article_Order::CLmapArticleOrder::setidarticle(int id) {
	this->id_article = id;
}

int NS_Map_Article_Order::CLmapArticleOrder::getidarticle(void) {
	return id_article;
}

void NS_Map_Article_Order::CLmapArticleOrder::setidarticlechanged(int id) {
	this->id_article_changed = id;
}

int NS_Map_Article_Order::CLmapArticleOrder::getidarticlechanged(void) {
	return id_article_changed;
}

void NS_Map_Article_Order::CLmapArticleOrder::setColorarticle(System::String^ color) {
	this->color_article = color;
}

System::String^ NS_Map_Article_Order::CLmapArticleOrder::getColorarticle(void) {
	return color_article;
}

void NS_Map_Article_Order::CLmapArticleOrder::setTypearticle(System::String^ type) {
	this->type_article = type;
}

System::String^ NS_Map_Article_Order::CLmapArticleOrder::getTypearticle(void) {
	return type_article;
}

void NS_Map_Article_Order::CLmapArticleOrder::setMarginarticle(float margin) {
	this->margin_article = margin;
}

float NS_Map_Article_Order::CLmapArticleOrder::getMarginarticle(void) {
	return margin_article;
}

void NS_Map_Article_Order::CLmapArticleOrder::setReplenishmentthreshold(int repl) {
	this->replenishment_threshold = repl;
}

int NS_Map_Article_Order::CLmapArticleOrder::getReplenishmentthreshold(void) {
	return replenishment_threshold;
}

void NS_Map_Article_Order::CLmapArticleOrder::setHT(float ht) {
	this->HT = ht;
}

float NS_Map_Article_Order::CLmapArticleOrder::getHT(void) {
	return HT;
}

void NS_Map_Article_Order::CLmapArticleOrder::setNamearticle(System::String^ name) {
	this->name_article = name;
}

System::String^ NS_Map_Article_Order::CLmapArticleOrder::getNamearticle(void) {
	return name_article;
}

void NS_Map_Article_Order::CLmapArticleOrder::setDiscount(float discount) {
	this->discount = discount;
}

float NS_Map_Article_Order::CLmapArticleOrder::getDiscount(void) {
	return discount;
}

void NS_Map_Article_Order::CLmapArticleOrder::setTVA(float tva) {
	this->TVA = tva;
}

float NS_Map_Article_Order::CLmapArticleOrder::getTVA(void) {
	return TVA;
}

void NS_Map_Article_Order::CLmapArticleOrder::setInventoryshrinkage(float invshrink) {
	this->inventory_shrinkage = invshrink;
}

float NS_Map_Article_Order::CLmapArticleOrder::getInventoryshrinkage(void) {
	return inventory_shrinkage;
}

void NS_Map_Article_Order::CLmapArticleOrder::setNbstock(int nb) {
	this->nb_stock = nb;
}

int NS_Map_Article_Order::CLmapArticleOrder::getNbstock(void) {
	return nb_stock;
}