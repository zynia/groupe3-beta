#include "pch.h"
#include "CLmapCityStaf.h"

void NS_Map_City_Staf::CLmapCityStaf::setidcity(int id) {
	this->id_city = id;
}

int NS_Map_City_Staf::CLmapCityStaf::getidcity(void) {
	return id_city;
}


void NS_Map_City_Staf::CLmapCityStaf::setNamecity(System::String^ namecity) {
	this->name_city = namecity;
}

System::String^ NS_Map_City_Staf::CLmapCityStaf::getNamecity(void) {
	return name_city;
}