#pragma once

namespace NS_Map_Article_Order {
	ref class CLmapArticleOrder {
	private:
		int id_article;
		int id_article_changed;
		System::String^ color_article;
		System::String^ type_article;
		System::String^ margin_article;
		int replenishment_threshold;
		System::String^ HT;
		System::String^ name_article;
		System::String^ discount;
		System::String^ TVA;
		System::String^ inventory_shrinkage;
		int nb_stock;
	public:
		void setidarticle(int);
		int getidarticle(void);
		void setidarticlechanged(int);
		int getidarticlechanged(void);
		void setColorarticle(System::String^);
		System::String^ getColorarticle(void);
		void setTypearticle(System::String^);
		System::String^ getTypearticle(void);
		void setMarginarticle(System::String^);
		System::String^ getMarginarticle(void);
		void setReplenishmentthreshold(int);
		int getReplenishmentthreshold(void);
		void setHT(System::String^);
		System::String^ getHT(void);
		void setNamearticle(System::String^);
		System::String^ getNamearticle(void);
		void setDiscount(System::String^);
		System::String^ getDiscount(void);
		void setTVA(System::String^);
		System::String^ getTVA(void);
		void setInventoryshrinkage(System::String^);
		System::String^ getInventoryshrinkage(void);
		void setNbstock(int);
		int getNbstock(void);

	};
}