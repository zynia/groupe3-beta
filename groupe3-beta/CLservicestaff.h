#pragma once
#include "CLcad.h"
#include "CLmapAddressStaf.h"
#include "CLmapCityStaf.h"
#include "CLmapPersonal_infostaf.h"
#include "CLmapPost_codeStaf.h"
#include "CLmapstaff.h"

namespace NS_Comp_Svc_Staf {
	ref class CLservicestaff {
	private:
		NS_Comp_Svc_Staf::CLservicestaff^ oStaf;
		NS_Comp_Data::CLcad^ oCad;
		NS_Map_Addr_Staf::CLmapAddressStaf^ oMapAddr;
		NS_Map_City_Staf::CLmapCityStaf^ oMapCityStaf;
		NS_Map_Perso_Info_Staf::CLmapPersonal_infostaf^ oMapPersoInfoStaf;
		NS_Map_Post_Code_Staf::CLmapPost_codeStaf^ oMapPostCodeStaf;
		NS_Map_Staf::CLmapstaff^ oMapStaf;
	public:
		CLservicestaff(void);
		System::Data::DataSet^ SelectStaf(System::String^);
		void InsertStaf(System::String^, int, System::String^, System::String^, int, System::String^, System::String^, int, System::String^, System::String^, System::String^);
		void DeleteStaf(int);
		void UpdateStaf(int, System::String^, int, System::String^, System::String^, int, System::String^, System::String^, int, System::String^, System::String^, System::String^);

		System::String^ Select();
		System::String^ Insert();
		System::String^ Delete();
		System::String^ Update();
	};
}
