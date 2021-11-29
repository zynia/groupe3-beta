#include "pch.h"
#include "CLmapArticleSupply.h"

void NS_Map_Article_Supply::CLmapArticleSupply::setidarticle(int id) {
	this->id_article = id;
}

int NS_Map_Article_Supply::CLmapArticleSupply::getidarticle(void) {
	return id_article;
}

void NS_Map_Article_Supply::CLmapArticleSupply::setColorarticle(System::String^ color) {
	this->color_article = color;
}

System::String^ NS_Map_Article_Supply::CLmapArticleSupply::getColorarticle(void) {
	return color_article;
}

void NS_Map_Article_Supply::CLmapArticleSupply::setTypearticle(System::String^ type) {
	this->type_article = type;
}

System::String^ NS_Map_Article_Supply::CLmapArticleSupply::getTypearticle(void) {
	return type_article;
}

void NS_Map_Article_Supply::CLmapArticleSupply::setMarginarticle(float margin) {
	this->margin_article = margin;
}

float NS_Map_Article_Supply::CLmapArticleSupply::getMarginarticle(void) {
	return margin_article;
}

void NS_Map_Article_Supply::CLmapArticleSupply::setReplenishmentthreshold(int repl) {
	this->replenishment_threshold = repl;
}

int NS_Map_Article_Supply::CLmapArticleSupply::getReplenishmentthreshold(void) {
	return replenishment_threshold;
}

void NS_Map_Article_Supply::CLmapArticleSupply::setHT(float ht) {
	this->HT = ht;
}

float NS_Map_Article_Supply::CLmapArticleSupply::getHT(void) {
	return HT;
}

void NS_Map_Article_Supply::CLmapArticleSupply::setNamearticle(System::String^ name) {
	this->name_article = name;
}

System::String^ NS_Map_Article_Supply::CLmapArticleSupply::getNamearticle(void) {
	return name_article;
}

void NS_Map_Article_Supply::CLmapArticleSupply::setDiscount(float discount) {
	this->discount = discount;
}

float NS_Map_Article_Supply::CLmapArticleSupply::getDiscount(void) {
	return discount;
}

void NS_Map_Article_Supply::CLmapArticleSupply::setTVA(float tva) {
	this->TVA = tva;
}

float NS_Map_Article_Supply::CLmapArticleSupply::getTVA(void) {
	return TVA;
}

void NS_Map_Article_Supply::CLmapArticleSupply::setInventoryshrinkage(float invshrink) {
	this->inventory_shrinkage = invshrink;
}

float NS_Map_Article_Supply::CLmapArticleSupply::getInventoryshrinkage(void) {
	return inventory_shrinkage;
}

void NS_Map_Article_Supply::CLmapArticleSupply::setNbstock(int nb) {
	this->nb_stock = nb;
}

int NS_Map_Article_Supply::CLmapArticleSupply::getNbstock(void) {
	return nb_stock;
}