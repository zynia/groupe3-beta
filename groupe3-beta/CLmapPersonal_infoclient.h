#pragma once

namespace NS_Map_Personal_info_client {
	ref class CLmapPersonalinfoclient {
	private:
		System::String^ first_name;
		System::String^ last_name;
		System::String^ birth_date;
	public:
		void setFirstname(System::String^);
		System::String^ getFirstname(void);
		void setLastname(System::String^);
		System::String^ getLastname(void);
		void setBirthdate(System::String^);
		System::String^ getBirthdate(void);
	};
}
