#pragma once

namespace NS_Map_Order_Stats {
	ref class CLmapOrderStats {
	private:
		int id_customer;
		int id_order;
		System::String^ delivery_date;
		System::String^ send_date;
		System::String^ ref_order;
		int nb_article;
	public:
		void setIdcustomer(int);
		int getIdcustomer(void);
		void setIdorder(int);
		int getIdorder(void);
		void setDeliverydate(System::String^);
		System::String^ getDeliverydate(void);
		void setSenddate(System::String^);
		System::String^ getSenddate(void);
		void setReforder(System::String^);
		System::String^ getReforder(void);
		void setNbarticle(int);
		int getNbarticle(void);
	};
}