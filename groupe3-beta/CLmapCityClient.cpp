#include "pch.h"
#include "CLmapCityClient.h"

void NS_Map_City_Client::CLmapCityCLient::setNamecity(System::String^ namecity) {
	this->name_city = namecity;
}

System::String^ NS_Map_City_Client::CLmapCityCLient::getNamecity(void) {
	return name_city;
}

void NS_Map_City_Client::CLmapCityCLient::setPostcode(int postcode) {
	this->Post_code = postcode;
}

int NS_Map_City_Client::CLmapCityCLient::getPostcode(void) {
	return Post_code;
}