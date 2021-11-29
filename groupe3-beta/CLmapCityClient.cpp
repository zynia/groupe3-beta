#include "pch.h"
#include "CLmapCityClient.h"

void NS_Map_City_Client::CLmapCityCLient::setidcity(int id) {
	this->id_city = id;
}

int NS_Map_City_Client::CLmapCityCLient::getidcity(void) {
	return id_city;
}


void NS_Map_City_Client::CLmapCityCLient::setNamecity(System::String^ namecity) {
	this->name_city = namecity;
}

System::String^ NS_Map_City_Client::CLmapCityCLient::getNamecity(void) {
	return name_city;
}
