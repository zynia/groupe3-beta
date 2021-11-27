#pragma once

#include "CLmapAddressClient.h"
#include "CLmapbilling.h"
#include "CLmapCityClient.h"
#include "CLmapdelivering.h"
#include "CLmapPersonal_infoclient.h"
#include "CLmapPost_codeClient.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservices
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Map_Addr_Client::CLmapAddressClient^ oMapAdrCli;
		NS_Map_Billing::CLmapbilling^ oMapBil;
	public:

		CLservices(void);
		System::Data::DataSet^ getAllAddress(System::String^);
		void addAddress(System::String^, int, System::String^, System::String^, int, System::String^);
		void deleteAddress(int);
		void updateAddress(int, System::String^, int, System::String^, System::String^, int, System::String^);
	};
}