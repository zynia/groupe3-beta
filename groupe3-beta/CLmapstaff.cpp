#include "pch.h"
#include "CLmapstaff.h"

void NS_Map_Staf::CLmapstaff::setidstaff(int id) {
	this->id_staff = id;
}

int NS_Map_Staf::CLmapstaff::getidstaff(void) {
	return id_staff;
}

void NS_Map_Staf::CLmapstaff::setHiringdate(System::String^ hiringdate) {
	this->hiring_date = hiringdate;
}

System::String^ NS_Map_Staf::CLmapstaff::getHiringdate(void) {
	return hiring_date;
}

void NS_Map_Staf::CLmapstaff::setidstaffsupervise(int id) {
	this->id_staff_supervise = id;
}

int NS_Map_Staf::CLmapstaff::getidstaffsupervise(void) {
	return id_staff_supervise;
}