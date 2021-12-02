#pragma once
#include "CLcad.h"
#include "CLmapArticleStats.h"
#include "CLmapOrderStats.h"

namespace NS_Comp_Svc_Stats {
	ref class CLservicesstats {
	private:
		NS_Comp_Svc_Stats::CLservicesstats^ oStats;
		NS_Comp_Data::CLcad^ oCad;
		NS_Map_Article_Stats::CLmapArticleStats^ oMapArticleStats;
		NS_Map_Order_Stats::CLmapOrderStats^ oMapOrderStats;
	public:

		CLservicesstats(void);
		System::Data::DataSet^ CalcStatsavgCartAfterDiscount(System::String^);
		System::Data::DataSet^ CalcStatsturnoverOfMonth(System::String^, int);
		System::Data::DataSet^ CalcStatstotalBuyOfClient(System::String^, int);
		System::Data::DataSet^ CalcStatscommercialStockValue(System::String^);
		System::Data::DataSet^ CalcStatsbuyStockValue(System::String^);

		System::Data::DataSet^ IdentifyStatsunderThreshold(System::String^);
		System::Data::DataSet^ IdentifyStatstenMostSold(System::String^);
		System::Data::DataSet^ IdentifyStatstenLessSold(System::String^);

		System::Data::DataSet^ SimVarComValue(System::String^);

		System::String^ avgCartAfterDiscount();
		System::String^ turnoverOfMonth(int);
		System::String^ totalBuyOfClient(int);
		System::String^ commercialStockValue();
		System::String^ buyStockValue();

		System::String^ underThreshold();
		System::String^ tenMostSold();
		System::String^ tenLessSold();

		System::String^ varComValue();

	};
}