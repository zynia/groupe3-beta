#include "pch.h"
#include "CLservicestaff.h"

NS_Comp_Svc_Staf::CLservicestaff::CLservicestaff(void) {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapAddr = gcnew NS_Map_Addr_Staf::CLmapAddressStaf();
	this->oMapCityStaf = gcnew NS_Map_City_Staf::CLmapCityStaf();
	this->oMapPersoInfoStaf = gcnew NS_Map_Perso_Info_Staf::CLmapPersonal_infostaf();
	this->oMapPostCodeStaf = gcnew NS_Map_Post_Code_Staf::CLmapPost_codeStaf();
	this->oMapStaf = gcnew NS_Map_Staf::CLmapstaff();
}

System::Data::DataSet^ NS_Comp_Svc_Staf::CLservicestaff::SelectStaf(System::String^ dataTableName) {
	System::String^ sql;

	sql = this->oStaf->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void  NS_Comp_Svc_Staf::CLservicestaff::InsertStaf(System::String^ streetname, int streetnumber, System::String^ residencename, System::String^ buildingname, int floornumber, System::String^ complement, System::String^ city, int postcode, System::String^ firstname, System::String^ lastname, System::String^ birthdate) {

	System::String^ sql;

	this->oMapAddr->setStreetname(streetname);
	this->oMapAddr->setStreetnumber(streetnumber);
	this->oMapAddr->setResidencename(residencename);
	this->oMapAddr->setBuildingname(buildingname);
	this->oMapAddr->setFloornumber(floornumber);
	this->oMapAddr->setComplement(complement);
	this->oMapCityStaf->setNamecity(city);
	this->oMapPostCodeStaf->setPostcode(postcode);
	this->oMapPersoInfoStaf->setFirstname(firstname);
	this->oMapPersoInfoStaf->setLastname(lastname);
	this->oMapPersoInfoStaf->setBirthdate(birthdate);

	sql = this->oStaf->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Staf::CLservicestaff::DeleteStaf(int id) {

	System::String^ sql;

	this->oMapPersoInfoStaf->setidperso(id);

	sql = this->oStaf->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Staf::CLservicestaff::UpdateStaf(int id, System::String^ streetname, int streetnumber, System::String^ residencename, System::String^ buildingname, int floornumber, System::String^ complement, System::String^ city, int postcode, System::String^ firstname, System::String^ lastname, System::String^ birthdate) {

	System::String^ sql;



}