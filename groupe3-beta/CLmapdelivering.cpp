#include "pch.h"
#include "CLmapdelivering.h"

void NS_Map_Delivering::CLmapdelivering::setStreetname(System::String^ Streetname) {
	this->Street_name = Streetname;
}

System::String^ NS_Map_Delivering::CLmapdelivering::getStreetname(void) {
	return Street_name;
}

void NS_Map_Delivering::CLmapdelivering::setStreetnumber(int nb) {
	this->Street_number = nb;
}

int NS_Map_Delivering::CLmapdelivering::getStreetnumber(void) {
	return Street_number;
}

void NS_Map_Delivering::CLmapdelivering::setResidencename(System::String^ residenceName) {
	this->Residence_name = residenceName;
}

System::String^ NS_Map_Delivering::CLmapdelivering::getResidencename(void) {
	return Residence_name;
}

void NS_Map_Delivering::CLmapdelivering::setBuildingname(System::String^ Buildingname) {
	this->Building_name = Buildingname;
}

System::String^ NS_Map_Delivering::CLmapdelivering::getBuildingname(void) {
	return Building_name;
}

void NS_Map_Delivering::CLmapdelivering::setFloornumber(int nb) {
	this->Floor_number = nb;
}

int NS_Map_Delivering::CLmapdelivering::getFloornumber(void) {
	return Floor_number;
}

void NS_Map_Delivering::CLmapdelivering::setComplement(System::String^ cp) {
	this->Complement = cp;
}

System::String^ NS_Map_Delivering::CLmapdelivering::getComplement(void) {
	return Complement;
}

void NS_Map_Delivering::CLmapdelivering::setNamecity(System::String^ Namecity) {
	this->Name_city = Namecity;
}

System::String^ NS_Map_Delivering::CLmapdelivering::getNamecity(void) {
	return Name_city;
}

void NS_Map_Delivering::CLmapdelivering::setPostcode(int Postcode) {
	this->Post_code = Postcode;
}

int NS_Map_Delivering::CLmapdelivering::getPostcode(void) {
	return Post_code;
}

void NS_Map_Delivering::CLmapdelivering::setIdperso(int idperso) {
	this->id_perso = idperso;
}

int NS_Map_Delivering::CLmapdelivering::getIdperso(void) {
	return id_perso;
}

void NS_Map_Delivering::CLmapdelivering::setFirstname(System::String^ firstname) {
	this->first_name = firstname;
}

System::String^ NS_Map_Delivering::CLmapdelivering::getFirstname(void) {
	return first_name;
}

void NS_Map_Delivering::CLmapdelivering::setLastname(System::String^ lastname) {
	this->last_name = lastname;
}

System::String^ NS_Map_Delivering::CLmapdelivering::getLastname(void) {
	return last_name;
}

void NS_Map_Delivering::CLmapdelivering::setBirthdate(System::String^ birthdate) {
	this->birth_date = birthdate;
}

System::String^ NS_Map_Delivering::CLmapdelivering::getBirthdate(void) {
	return birth_date;
}