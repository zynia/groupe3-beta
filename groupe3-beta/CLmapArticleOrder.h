#pragma once

namespace NS_Map_Article_Order {
	ref class CLmapArticleOrder {
	private:
		int id_article;
		System::String^ color_article;
		System::String^ type_article;
		float margin_article;
		int replenishment_threshold;
		float HT;
		System::String^ name_article;
		float discount;
		float TVA;
		float inventory_shrinkage;
		int nb_stock;
	public:
		void setidarticle(int);
		int getidarticle(void);
		void setColorarticle(System::String^);
		System::String^ getColorarticle(void);
		void setTypearticle(System::String^);
		System::String^ getTypearticle(void);
		void setMarginarticle(float);
		float getMarginarticle(void);
		void setReplenishmentthreshold(int);
		int getReplenishmentthreshold(void);
		void setHT(float);
		float getHT(void);
		void setNamearticle(System::String^);
		System::String^ getNamearticle(void);
		void setDiscount(float);
		float getDiscount(void);
		void setTVA(float);
		float getTVA(void);
		void setInventoryshrinkage(float);
		float getInventoryshrinkage(void);
		void setNbstock(int);
		int getNbstock(void);

	};
}