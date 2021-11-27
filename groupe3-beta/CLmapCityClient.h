#pragma once

namespace NS_Map_City_Client {
	ref class CLmapCityCLient {
	private:
		System::String^ name_city;
		int Post_code;
	public:
		void setNamecity(System::String^);
		System::String^ getNamecity(void);
		void setPostcode(int);
		int getPostcode(void);
	};
}