#pragma once

namespace NS_Map_City_Client {
	ref class CLmapCityCLient {
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