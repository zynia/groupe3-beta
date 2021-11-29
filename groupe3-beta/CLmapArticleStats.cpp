#include "pch.h"
#include "CLmapArticleStats.h"

void NS_Map_Article_Stats::CLmapArticleStats::setidarticle(int id) {
	this->id_article = id;
}

int NS_Map_Article_Stats::CLmapArticleStats::getidarticle(void) {
	return id_article;
}

void NS_Map_Article_Stats::CLmapArticleStats::setColorarticle(System::String^ color) {
	this->color_article = color;
}

System::String^ NS_Map_Article_Stats::CLmapArticleStats::getColorarticle(void) {
	return color_article;
}

void NS_Map_Article_Stats::CLmapArticleStats::setTypearticle(System::String^ type) {
	this->type_article = type;
}

System::String^ NS_Map_Article_Stats::CLmapArticleStats::getTypearticle(void) {
	return type_article;
}

void NS_Map_Article_Stats::CLmapArticleStats::setMarginarticle(float margin) {
	this->margin_article = margin;
}

float NS_Map_Article_Stats::CLmapArticleStats::getMarginarticle(void) {
	return margin_article;
}

void NS_Map_Article_Stats::CLmapArticleStats::setReplenishmentthreshold(int repl) {
	this->replenishment_threshold = repl;
}

int NS_Map_Article_Stats::CLmapArticleStats::getReplenishmentthreshold(void) {
	return replenishment_threshold;
}

void NS_Map_Article_Stats::CLmapArticleStats::setHT(float ht) {
	this->HT = ht;
}

float NS_Map_Article_Stats::CLmapArticleStats::getHT(void) {
	return HT;
}

void NS_Map_Article_Stats::CLmapArticleStats::setNamearticle(System::String^ name) {
	this->name_article = name;
}

System::String^ NS_Map_Article_Stats::CLmapArticleStats::getNamearticle(void) {
	return name_article;
}

void NS_Map_Article_Stats::CLmapArticleStats::setDiscount(float discount) {
	this->discount = discount;
}

float NS_Map_Article_Stats::CLmapArticleStats::getDiscount(void) {
	return discount;
}

void NS_Map_Article_Stats::CLmapArticleStats::setTVA(float tva) {
	this->TVA = tva;
}

float NS_Map_Article_Stats::CLmapArticleStats::getTVA(void) {
	return TVA;
}

void NS_Map_Article_Stats::CLmapArticleStats::setInventoryshrinkage(float invshrink) {
	this->inventory_shrinkage = invshrink;
}

float NS_Map_Article_Stats::CLmapArticleStats::getInventoryshrinkage(void) {
	return inventory_shrinkage;
}

void NS_Map_Article_Stats::CLmapArticleStats::setNbstock(int nb) {
	this->nb_stock = nb;
}

int NS_Map_Article_Stats::CLmapArticleStats::getNbstock(void) {
	return nb_stock;
}