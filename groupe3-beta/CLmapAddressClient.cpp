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

void NS_Map_Addr_Client::CLmapAddressClient::setNamecity(System::String^ Namecity) {
	this->Name_city = Namecity;
}

System::String^ NS_Map_Addr_Client::CLmapAddressClient::getNamecity(void) {
	return Name_city;
}

void NS_Map_Addr_Client::CLmapAddressClient::setPostcode(int Postcode) {
	this->Post_code = Postcode;
}

int NS_Map_Addr_Client::CLmapAddressClient::getPostcode(void) {
	return Post_code;
}

System::String^ NS_Map_Addr_Client::CLmapAddressClient::Select(void) {
	return "SELECT * FROM Groupe3_POO.dbo.Address;";
}
System::String^ NS_Map_Addr_Client::CLmapAddressClient::Insert(void) {
	return "INSERT INTO Address (Street_name, Street_number, Residency_name, Building_name, Floor_number, Complement) VALUES ('" + this->Street_name + "','" + this->Street_number.ToString() + "','" + this->Residence_name + "','" + this->Building_name + "','" + this->Floor_number.ToString() + "','" + this->Complement + "');";
}
System::String^ NS_Map_Addr_Client::CLmapAddressClient::Delete(void) {
	return "DELETE FROM Address WHERE id_address = " + this->id_address.ToString() + ";";
}
System::String^ NS_Map_Addr_Client::CLmapAddressClient::Update(void) {
	return "UPDATE Address SET Street_name = '" + this->Street_name + "', Street_number = '" + this->Street_number.ToString() + "', Residency_name = '" + this->Residence_name + "', Building_name = '" + this->Building_name + "', Floor_number = '" + this->Floor_number.ToString() + "', Complement = '" + this->Complement + "' WHERE id_address = " + this->id_address + ";";
}