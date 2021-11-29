#pragma once

namespace NS_Map_Delivering {
	ref class CLmapdelivering {
	private:
		int id_address;
		int id_customer;
	public:
		void setidaddress(int);
		int getidaddress(void);
		void setidcustomer(int);
		int getidcustomer(void);
	};
}