#pragma once

namespace NS_Map_Billing {
	ref class CLmapbilling {
	private:
		int id_address;
		int id_customer;
		System::String^ Street_name_billing;
		int Street_number_billing;
		System::String^ Residence_name_billing;
		System::String^ Building_name_billing;
		int Floor_number_billing;
		System::String^ Complement_billing;
		System::String^ City_billing;
		int Postcode_billing;

	public:

		int getidaddress(void);
		int getidcustomer(void);
		void setidaddress(int);
		void setidcustomer(int);
		void setStreetnameBilling(System::String^);
		System::String^ getStreetnameBilling(void);
		void setStreetnumberBilling(int);
		int getStreetnumberBilling(void);
		void setResidencenameBilling(System::String^);
		System::String^ getResidencenameBilling(void);
		void setBuildingnameBilling(System::String^);
		System::String^ getBuildingnameBilling(void);
		void setFloornumberBilling(int);
		int getFloornumberBilling(void);
		void setComplementBilling(System::String^);
		System::String^ getComplementBilling(void);
		void setPostcodeBilling(int);
		int getPostcodeBilling(void);
		void setCitybilling(System::String^);
		System::String^ getCitybilling(void);
	};
}