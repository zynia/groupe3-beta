#pragma once
#include "CLcad.h"
#include "CLmapArticleOrder.h"
#include "CLmapCustomer.h"
#include "CLmapOrder.h"
#include "CLmapPayment.h"
#include "CLmapPost_codeClient.h"
#include "CLmapCityClient.h"
#include "CLmapAddressClient.h"

namespace NS_Comp_Svc_Order {
	ref class CLserviceOrder {
	private:
		NS_Comp_Svc_Order::CLserviceOrder^ oOrder;
		NS_Comp_Data::CLcad^ oCad;
		NS_Map_Article_Order::CLmapArticleOrder^ oMapArticlOrd;
		NS_Map_Customer::CLmapCustomer^ oMapCust;
		NS_Map_Order::CLmapOrder^ oMapOrd;
		NS_Map_Payment::CLmapPayment^ oMapPay;
		NS_Map_Post_Code::CLmapPostcodeClient^ oMapPostcode;
		NS_Map_City_Client::CLmapCityCLient^ oMapCity;
		NS_Map_Addr_Client::CLmapAddressClient^ oMapAddr;
		
	public:
		CLserviceOrder(void);
		System::Data::DataSet^ SelectOrder(System::String^, int);
		void InsertOrder(int, System::String^, System::String^, int, System::String^, System::String^, int, System::String^, System::String^, System::String^, int, int, float, float, float, float, int);
		void DeleteOrder(int);
		void UpdateOrder(int, System::String^, System::String^, float, int, float, System::String^, float, float, float, int, System::String^, System::String^, System::String^, int, System::String^, int, System::String^);

		System::String^ Select();
		System::String^ Insert();
		System::String^ Delete();
		System::String^ Update();
	};
}
