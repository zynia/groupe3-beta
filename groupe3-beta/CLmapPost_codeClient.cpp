#include "pch.h"
#include "CLmapPost_codeClient.h"

void NS_Map_Post_Code::CLmapPostcodeClient::setidpostcode(int id) {
	this->id_post_code = id;
}

int NS_Map_Post_Code::CLmapPostcodeClient::getidpostcode(void) {
	return id_post_code;
}

void NS_Map_Post_Code::CLmapPostcodeClient::setPostcode(int postcode) {
	this->Post_code = postcode;
}

int NS_Map_Post_Code::CLmapPostcodeClient::getPostcode(void) {
	return Post_code;
}