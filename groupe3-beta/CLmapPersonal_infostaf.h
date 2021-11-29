#pragma once

namespace NS_Map_Perso_Info_Staf {
	ref class CLmapPersonal_infostaf {
	private:
		int id_perso;
		System::String^ first_name;
		System::String^ last_name;
		System::String^ birth_date;
	public:
		void setidperso(int);
		int getidperso(void);
		void setFirstname(System::String^);
		System::String^ getFirstname(void);
		void setLastname(System::String^);
		System::String^ getLastname(void);
		void setBirthdate(System::String^);
		System::String^ getBirthdate(void);
	};
}