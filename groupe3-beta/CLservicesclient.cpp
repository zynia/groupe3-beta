#include "pch.h"
#include "CLservicesclient.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapAdrCli = gcnew NS_Map_Addr_Client::CLmapAddressClient();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::getAllAddress(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMapAdrCli->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc::CLservices::addAddress(System::String^ streetname, int streetnumber, System::String^ Residencyname, System::String^ Buildingname, int floornumber, System::String^ complement)
{
	System::String^ sql;

	this->oMapAdrCli->setStreetname(streetname);
	this->oMapAdrCli->setStreetnumber(streetnumber);
	this->oMapAdrCli->setResidencename(Residencyname);
	this->oMapAdrCli->setBuildingname(Buildingname);
	this->oMapAdrCli->setFloornumber(floornumber);
	this->oMapAdrCli->setComplement(complement);

	sql = this->oMapAdrCli->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::deleteAddress(int id) {

	System::String^ sql;

	this->oMapAdrCli->setIdaddress(id);

	sql = this->oMapAdrCli->Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::updateAddress(int id, System::String^ streetname, int streetnumber, System::String^ Residencyname, System::String^ Buildingname, int floornumber, System::String^ complement) {

	System::String^ sql;

	this->oMapAdrCli->setIdaddress(id);
	this->oMapAdrCli->setStreetname(streetname);
	this->oMapAdrCli->setStreetnumber(streetnumber);
	this->oMapAdrCli->setResidencename(Residencyname);
	this->oMapAdrCli->setBuildingname(Buildingname);
	this->oMapAdrCli->setFloornumber(floornumber);
	this->oMapAdrCli->setComplement(complement);

	sql = this->oMapAdrCli->Update();

	this->oCad->actionRows(sql);
}