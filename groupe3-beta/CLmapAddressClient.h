#pragma once

namespace NS_Map_Addr_Client
{
	ref class CLmapAddressClient
	{
	private:
		int id_address;
		System::String^ Street_name;
		int Street_number;
		System::String^ Residence_name;
		System::String^ Building_name;
		int Floor_number;
		System::String^ Complement;

	public:

		void setIdaddress(int);
		int getIdaddress(void);
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

	};
}