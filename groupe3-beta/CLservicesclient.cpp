#include "pch.h"
#include "CLservicesclient.h"

NS_Comp_Svc_Cli::CLservicesClient::CLservicesClient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapAddr = gcnew NS_Map_Addr_Client::CLmapAddressClient();
	this->oMapBill = gcnew NS_Map_Billing::CLmapbilling();
	this->oMapCityClient = gcnew NS_Map_City_Client::CLmapCityCLient();
	this->oMapDeliv = gcnew NS_Map_Delivering::CLmapdelivering();
	this->oMapPersoInfo = gcnew NS_Map_Personal_info_client::CLmapPersonalinfoclient();
	this->oMapPostCode = gcnew NS_Map_Post_Code::CLmapPostcodeClient();
}
System::Data::DataSet^ NS_Comp_Svc_Cli::CLservicesClient::SelectClient(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oSvc->Select();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc_Cli::CLservicesClient::InsertClient(System::String^ streetname, int streetnumber, System::String^ residencename, System::String^ buildingname, int floornumber, System::String^ complement, System::String^ city, int postcode, System::String^ firstname, System::String^ lastname, System::String^ birthdate)
{
	System::String^ sql;

	this->oMapAddr->setStreetname(streetname);
	this->oMapAddr->setStreetnumber(streetnumber);
	this->oMapAddr->setResidencename(residencename);
	this->oMapAddr->setBuildingname(buildingname);
	this->oMapAddr->setFloornumber(floornumber);
	this->oMapAddr->setComplement(complement);
	this->oMapCityClient->setNamecity(city);
	this->oMapPostCode->setPostcode(postcode);
	this->oMapPersoInfo->setFirstname(firstname);
	this->oMapPersoInfo->setLastname(lastname);
	this->oMapPersoInfo->setBirthdate(birthdate);

	sql = this->oSvc->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Cli::CLservicesClient::DeleteClient(int idperso) {

	System::String^ sql;

	this->oMapPersoInfo->setidperso(idperso);

	sql = this->oSvc->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Cli::CLservicesClient::UpdateClient(int idperso, System::String^ streetname, int streetnumber, System::String^ residencename, System::String^ buildingname, int floornumber, System::String^ complement, System::String^ city, int postcode, System::String^ firstname, System::String^ lastname, System::String^ birthdate) {

	System::String^ sql;

	this->oMapPersoInfo->setidperso(idperso);
	this->oMapAddr->setStreetname(streetname);
	this->oMapAddr->setStreetnumber(streetnumber);
	this->oMapAddr->setResidencename(residencename);
	this->oMapAddr->setBuildingname(buildingname);
	this->oMapAddr->setFloornumber(floornumber);
	this->oMapAddr->setComplement(complement);
	this->oMapCityClient->setNamecity(city);
	this->oMapPostCode->setPostcode(postcode);
	this->oMapPersoInfo->setFirstname(firstname);
	this->oMapPersoInfo->setLastname(lastname);
	this->oMapPersoInfo->setBirthdate(birthdate);

	sql = this->oSvc->Update();

	this->oCad->actionRows(sql);
}

System::String^ NS_Comp_Svc_Cli::CLservicesClient::Select() {
	return "";
}

System::String^ NS_Comp_Svc_Cli::CLservicesClient::Insert() {
	return "";
}

System::String^ NS_Comp_Svc_Cli::CLservicesClient::Delete() {
	return "";
}

System::String^ NS_Comp_Svc_Cli::CLservicesClient::Update() {
	return "";
}