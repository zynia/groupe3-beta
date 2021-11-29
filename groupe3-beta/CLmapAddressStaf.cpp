#include "pch.h"
#include "CLmapAddressStaf.h"


void NS_Map_Addr_Staf::CLmapAddressStaf::setIdaddress(int idaddress) {
	this->id_address = idaddress;
}

int NS_Map_Addr_Staf::CLmapAddressStaf::getIdaddress(void) {
	return id_address;
}

void NS_Map_Addr_Staf::CLmapAddressStaf::setStreetname(System::String^ Streetname) {
	this->Street_name = Streetname;
}

System::String^ NS_Map_Addr_Staf::CLmapAddressStaf::getStreetname(void) {
	return Street_name;
}

void NS_Map_Addr_Staf::CLmapAddressStaf::setStreetnumber(int nb) {
	this->Street_number = nb;
}

int NS_Map_Addr_Staf::CLmapAddressStaf::getStreetnumber(void) {
	return Street_number;
}

void NS_Map_Addr_Staf::CLmapAddressStaf::setResidencename(System::String^ residenceName) {
	this->Residence_name = residenceName;
}

System::String^ NS_Map_Addr_Staf::CLmapAddressStaf::getResidencename(void) {
	return Residence_name;
}

void NS_Map_Addr_Staf::CLmapAddressStaf::setBuildingname(System::String^ Buildingname) {
	this->Building_name = Buildingname;
}

System::String^ NS_Map_Addr_Staf::CLmapAddressStaf::getBuildingname(void) {
	return Building_name;
}

void NS_Map_Addr_Staf::CLmapAddressStaf::setFloornumber(int nb) {
	this->Floor_number = nb;
}

int NS_Map_Addr_Staf::CLmapAddressStaf::getFloornumber(void) {
	return Floor_number;
}

void NS_Map_Addr_Staf::CLmapAddressStaf::setComplement(System::String^ cp) {
	this->Complement = cp;
}

System::String^ NS_Map_Addr_Staf::CLmapAddressStaf::getComplement(void) {
	return Complement;
}
