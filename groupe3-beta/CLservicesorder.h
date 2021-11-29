#pragma once
#include "CLcad.h"
#include "CLmapArticleOrder.h"
#include "CLmapCustomer.h"
#include "CLmapOrder.h"
#include "CLmapPayment.h"


namespace NS_Comp_Svc_Order {
	ref class CLserviceOrder {
	private:
		NS_Comp_Svc_Order::CLserviceOrder^ oOrder;
		NS_Comp_Data::CLcad^ oCad;
		NS_Map_Article_Order::CLmapArticleOrder^ oMapArticlOrd;
		NS_Map_Customer::CLmapCustomer^ oMapCust;
		NS_Map_Order::CLmapOrder^ oMapOrd;
		NS_Map_Payment::CLmapPayment^ oMapPay;
	public:
		CLserviceOrder(void);
		System::Data::DataSet^ SelectOrder(System::String^);
		void InsertOrder(System::String^, System::String^, float, int, float, System::String^, float, float, float, int, System::String^, System::String^, System::String^, int, System::String^, int, System::String^);
		void DeleteOrder(int);
		void UpdateOrder(int, System::String^, System::String^, float, int, float, System::String^, float, float, float, int, System::String^, System::String^, System::String^, int, System::String^, int, System::String^);

		System::String^ Select();
		System::String^ Insert();
		System::String^ Delete();
		System::String^ Update();
	};
}
