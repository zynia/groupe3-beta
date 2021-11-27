#include "pch.h"
#include "CLmapbilling.h"

void NS_Map_Billing::CLmapbilling::setStreetname(System::String^ Streetname) {
	this->Street_name = Streetname;
}

System::String^ NS_Map_Billing::CLmapbilling::getStreetname(void) {
	return Street_name;
}

void NS_Map_Billing::CLmapbilling::setStreetnumber(int nb) {
	this->Street_number = nb;
}

int NS_Map_Billing::CLmapbilling::getStreetnumber(void) {
	return Street_number;
}

void NS_Map_Billing::CLmapbilling::setResidencename(System::String^ residenceName) {
	this->Residence_name = residenceName;
}

System::String^ NS_Map_Billing::CLmapbilling::getResidencename(void) {
	return Residence_name;
}

void NS_Map_Billing::CLmapbilling::setBuildingname(System::String^ Buildingname) {
	this->Building_name = Buildingname;
}

System::String^ NS_Map_Billing::CLmapbilling::getBuildingname(void) {
	return Building_name;
}

void NS_Map_Billing::CLmapbilling::setFloornumber(int nb) {
	this->Floor_number = nb;
}

int NS_Map_Billing::CLmapbilling::getFloornumber(void) {
	return Floor_number;
}

void NS_Map_Billing::CLmapbilling::setComplement(System::String^ cp) {
	this->Complement = cp;
}

System::String^ NS_Map_Billing::CLmapbilling::getComplement(void) {
	return Complement;
}

void NS_Map_Billing::CLmapbilling::setNamecity(System::String^ Namecity) {
	this->Name_city = Namecity;
}

System::String^ NS_Map_Billing::CLmapbilling::getNamecity(void) {
	return Name_city;
}

void NS_Map_Billing::CLmapbilling::setPostcode(int Postcode) {
	this->Post_code = Postcode;
}

int NS_Map_Billing::CLmapbilling::getPostcode(void) {
	return Post_code;
}

void NS_Map_Billing::CLmapbilling::setIdperso(int idperso) {
	this->id_perso = idperso;
}

int NS_Map_Billing::CLmapbilling::getIdperso(void) {
	return id_perso;
}

void NS_Map_Billing::CLmapbilling::setFirstname(System::String^ firstname) {
	this->first_name = firstname;
}

System::String^ NS_Map_Billing::CLmapbilling::getFirstname(void) {
	return first_name;
}

void NS_Map_Billing::CLmapbilling::setLastname(System::String^ lastname) {
	this->last_name = lastname;
}

System::String^ NS_Map_Billing::CLmapbilling::getLastname(void) {
	return last_name;
}

void NS_Map_Billing::CLmapbilling::setBirthdate(System::String^ birthdate) {
	this->birth_date = birthdate;
}

System::String^ NS_Map_Billing::CLmapbilling::getBirthdate(void) {
	return birth_date;
}