#pragma once

namespace NS_Map_Post_Code {
	ref class CLmapPostcodeClient {
	private:
		int id_post_code;
		int Post_code;
	public:
		void setidpostcode(int);
		int getidpostcode(void);
		void setPostcode(int);
		int getPostcode(void);
	};
}