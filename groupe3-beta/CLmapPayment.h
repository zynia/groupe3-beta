#pragma once

namespace NS_Map_Payment {
	ref class CLmapPayment {
	private:
		int id_payement;
		System::String^ Payment_type;
		int Payment_number;
		System::String^ Payment_date;
	public:
		void setIdpayement(int);
		int getIdpayement(void);
		void setPaymenttype(System::String^);
		System::String^ getPaymenttype(void);
		void setPaymentnumber(int);
		int getPaymentnumber(void);
		void setPaymentdate(System::String^);
		System::String^ getPaymentdate(void);
	};
}