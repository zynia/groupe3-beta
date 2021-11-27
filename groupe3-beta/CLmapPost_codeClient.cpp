#include "pch.h"
#include "CLmapPost_codeClient.h"

void NS_Map_Post_Code::CLmapPostcodeClient::setPostcode(int postcode) {
	this->Post_code = postcode;
}

int NS_Map_Post_Code::CLmapPostcodeClient::getPostcode(void) {
	return Post_code;
}