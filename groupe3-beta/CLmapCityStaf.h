#pragma once

namespace NS_Map_City_Staf {
	ref class CLmapCityStaf {
	private:
		int id_city;
		System::String^ name_city;
	public:
		void setidcity(int);
		int getidcity(void);
		void setNamecity(System::String^);
		System::String^ getNamecity(void);
	};
}