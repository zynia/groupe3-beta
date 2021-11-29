#include "pch.h"
#include "CLmapAddressClient.h"


void NS_Map_Addr_Client::CLmapAddressClient::setIdaddress(int idaddress) {
	this->id_address = idaddress;
}

int NS_Map_Addr_Client::CLmapAddressClient::getIdaddress(void) {
	return id_address;
}

void NS_Map_Addr_Client::CLmapAddressClient::setStreetname(System::String^ Streetname) {
	this->Street_name = Streetname;
}

System::String^ NS_Map_Addr_Client::CLmapAddressClient::getStreetname(void) {
	return Street_name;
}

void NS_Map_Addr_Client::CLmapAddressClient::setStreetnumber(int nb) {
	this->Street_number = nb;
}

int NS_Map_Addr_Client::CLmapAddressClient::getStreetnumber(void) {
	return Street_number;
}

void NS_Map_Addr_Client::CLmapAddressClient::setResidencename(System::String^ residenceName) {
	this->Residence_name = residenceName;
}

System::String^ NS_Map_Addr_Client::CLmapAddressClient::getResidencename(void) {
	return Residence_name;
}

void NS_Map_Addr_Client::CLmapAddressClient::setBuildingname(System::String^ Buildingname) {
	this->Building_name = Buildingname;
}

System::String^ NS_Map_Addr_Client::CLmapAddressClient::getBuildingname(void) {
	return Building_name;
}

void NS_Map_Addr_Client::CLmapAddressClient::setFloornumber(int nb) {
	this->Floor_number = nb;
}

int NS_Map_Addr_Client::CLmapAddressClient::getFloornumber(void) {
	return Floor_number;
}

void NS_Map_Addr_Client::CLmapAddressClient::setComplement(System::String^ cp) {
	this->Complement = cp;
}

System::String^ NS_Map_Addr_Client::CLmapAddressClient::getComplement(void) {
	return Complement;
}
