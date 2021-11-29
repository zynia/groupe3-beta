#include "pch.h"
#include "CLmapPersonal_infoclient.h"

void NS_Map_Personal_info_client::CLmapPersonalinfoclient::setidperso(int id) {
	this->id_perso = id;
}

int NS_Map_Personal_info_client::CLmapPersonalinfoclient::getidperso(void) {
	return id_perso;
}

void NS_Map_Personal_info_client::CLmapPersonalinfoclient::setFirstname(System::String^ firstname) {
	this->first_name = firstname;
}

System::String^ NS_Map_Personal_info_client::CLmapPersonalinfoclient::getFirstname(void) {
	return first_name;
}

void NS_Map_Personal_info_client::CLmapPersonalinfoclient::setLastname(System::String^ lastname) {
	this->last_name = lastname;
}

System::String^ NS_Map_Personal_info_client::CLmapPersonalinfoclient::getLastname(void) {
	return last_name;
}

void NS_Map_Personal_info_client::CLmapPersonalinfoclient::setBirthdate(System::String^ birthdate) {
	this->birth_date = birthdate;
}

System::String^ NS_Map_Personal_info_client::CLmapPersonalinfoclient::getBirthdate(void) {
	return birth_date;
}