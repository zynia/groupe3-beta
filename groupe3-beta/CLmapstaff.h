#pragma once

namespace NS_Map_Staf {
	ref class CLmapstaff {
	private:
		int id_staff;
		System::String^ hiring_date;
		int id_staff_supervise;
	public:
		void setidstaff(int);
		int getidstaff(void);
		void setHiringdate(System::String^);
		System::String^ getHiringdate(void);
		void setidstaffsupervise(int);
		int getidstaffsupervise(void);
	};
}