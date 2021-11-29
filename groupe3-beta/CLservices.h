#pragma once
#include "CLcad.h"
#include "CLservicesclient.h"
#include "CLservicestaff.h"
#include "CLservicesorder.h"
#include "CLservicesstats.h"
#include "CLservicesupply.h"



namespace NS_services {
	ref class CLservices {
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Svc_Cli::CLservicesClient^ oSvcCli;
		NS_Comp_Svc_Staf::CLservicestaff^ oSvcStaf;
		NS_Comp_Svc_Order::CLserviceOrder^ oSvcOrder;
		NS_Comp_Svc_Supply::CLservicesupply^ oSvcSupply;
		NS_Comp_Svc_Stats::CLservicesstats^ oSvcStats;
	public:
		
	};
}
