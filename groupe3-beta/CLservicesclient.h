#pragma once
#include "CLcad.h"
#include "CLmapAddressClient.h"
#include "CLmapbilling.h"
#include "CLmapCityClient.h"
#include "CLmapdelivering.h"
#include "CLmapPersonal_infoclient.h"
#include "CLmapPost_codeClient.h"

namespace NS_Comp_Svc_Cli
{
	ref class CLservicesClient
	{
	private:
		NS_Comp_Svc_Cli::CLservicesClient^ oSvc;
		NS_Comp_Data::CLcad^ oCad;
		NS_Map_Addr_Client::CLmapAddressClient^ oMapAddr;
		NS_Map_Billing::CLmapbilling^ oMapBill;
		NS_Map_City_Client::CLmapCityCLient^ oMapCityClient;
		NS_Map_Delivering::CLmapdelivering^ oMapDeliv;
		NS_Map_Personal_info_client::CLmapPersonalinfoclient^ oMapPersoInfo;
		NS_Map_Post_Code::CLmapPostcodeClient^ oMapPostCode;
	public:

		CLservicesClient(void);
		System::Data::DataSet^ SelectClient(System::String^);
		void InsertClient(System::String^, int, System::String^, System::String^, int, System::String^, System::String^, int, System::String^, System::String^, System::String^);
		void DeleteClient(int);
		void UpdateClient(int, System::String^, int, System::String^, System::String^, int, System::String^, System::String^, int , System::String^, System::String^, System::String^);

		System::String^ Select();
		System::String^ Insert();
		System::String^ Delete();
		System::String^ Update();

	};
}