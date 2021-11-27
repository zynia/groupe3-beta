#pragma once

namespace NS_Map_Delivering {
	ref class CLmapdelivering {
	private:
		System::String^ Street_name;
		int Street_number;
		System::String^ Residence_name;
		System::String^ Building_name;
		int Floor_number;
		System::String^ Complement;
		System::String^ Name_city;
		int Post_code;
		int id_perso;
		System::String^ first_name;
		System::String^ last_name;
		System::String^ birth_date;
	public:
		void setStreetname(System::String^);
		System::String^ getStreetname(void);
		void setStreetnumber(int);
		int getStreetnumber(void);
		void setResidencename(System::String^);
		System::String^ getResidencename(void);
		void setBuildingname(System::String^);
		System::String^ getBuildingname(void);
		void setFloornumber(int);
		int getFloornumber(void);
		void setComplement(System::String^);
		System::String^ getComplement(void);
		void setNamecity(System::String^);
		System::String^ getNamecity(void);
		void setPostcode(int);
		int getPostcode(void);
		void setIdperso(int);
		int getIdperso(void);
		void setFirstname(System::String^);
		System::String^ getFirstname(void);
		void setLastname(System::String^);
		System::String^ getLastname(void);
		void setBirthdate(System::String^);
		System::String^ getBirthdate(void);
	};
}