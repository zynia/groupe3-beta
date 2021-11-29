#pragma once
#include "CLcad.h"
#include "CLmapArticleSupply.h"

namespace NS_Comp_Svc_Supply {
	ref class CLservicesupply {
	private:
		NS_Comp_Svc_Supply::CLservicesupply^ oSupply;
		NS_Comp_Data::CLcad^ oCad;
		NS_Map_Article_Supply::CLmapArticleSupply^ oMapArtSup;
	public:
		CLservicesupply();
		System::Data::DataSet^ SelectSupply(System::String^);
		void InsertSupply(System::String^, System::String^, float, int, float, System::String^, float, float, float, int);
		void DeleteSupply(int);
		void UpdateSupply(int, System::String^, System::String^, float, int, float, System::String^, float, float, float, int);

		System::String^ Select();
		System::String^ Insert();
		System::String^ Delete();
		System::String^ Update();

	};
}
