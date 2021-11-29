#pragma once

namespace NS_Map_Billing {
	ref class CLmapbilling {
	private:
		int id_address;
		int id_customer;

	public:

		int getidaddress(void);
		int getidcustomer(void);
		void setidaddress(int);
		void setidcustomer(int);

	};
}