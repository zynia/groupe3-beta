#include "pch.h"
#include "CLmapPersonal_infostaf.h"

void NS_Map_Perso_Info_Staf::CLmapPersonal_infostaf::setidperso(int id) {
	this->id_perso = id;
}

int NS_Map_Perso_Info_Staf::CLmapPersonal_infostaf::getidperso(void) {
	return id_perso;
}

void NS_Map_Perso_Info_Staf::CLmapPersonal_infostaf::setFirstname(System::String^ firstname) {
	this->first_name = firstname;
}

System::String^ NS_Map_Perso_Info_Staf::CLmapPersonal_infostaf::getFirstname(void) {
	return first_name;
}

void NS_Map_Perso_Info_Staf::CLmapPersonal_infostaf::setLastname(System::String^ lastname) {
	this->last_name = lastname;
}

System::String^ NS_Map_Perso_Info_Staf::CLmapPersonal_infostaf::getLastname(void) {
	return last_name;
}

void NS_Map_Perso_Info_Staf::CLmapPersonal_infostaf::setBirthdate(System::String^ birthdate) {
	this->birth_date = birthdate;
}

System::String^ NS_Map_Perso_Info_Staf::CLmapPersonal_infostaf::getBirthdate(void) {
	return birth_date;
}