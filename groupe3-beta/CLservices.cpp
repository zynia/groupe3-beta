#include "pch.h"
#include "CLservices.h"

NS_services::CLservices::CLservices() {
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oSvcCli = gcnew NS_Comp_Svc_Cli::CLservicesClient();
	this->oSvcOrder = gcnew NS_Comp_Svc_Order::CLserviceOrder();
	this->oSvcStaf = gcnew NS_Comp_Svc_Staf::CLservicestaff();
	this->oSvcStats = gcnew NS_Comp_Svc_Stats::CLservicesstats();
	this->oSvcSupply = gcnew NS_Comp_Svc_Supply::CLservicesupply();
}