#include "pch.h"
#include "CLservicesclient.h"


NS_Comp_Svc_Cli::CLservicesClient::CLservicesClient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMapAddr = gcnew NS_Map_Addr_Client::CLmapAddressClient();
	this->oMapBill = gcnew NS_Map_Billing::CLmapbilling();
	this->oMapCityClient = gcnew NS_Map_City_Client::CLmapCityCLient();
	this->oMapDeliv = gcnew NS_Map_Delivering::CLmapdelivering();
	this->oMapPersoInfo = gcnew NS_Map_Personal_info_client::CLmapPersonalinfoclient();
	this->oMapPostCode = gcnew NS_Map_Post_Code::CLmapPostcodeClient();
	this->oMapOrder = gcnew NS_Map_Order::CLmapOrder();
	this->oMapCust = gcnew NS_Map_Customer::CLmapCustomer();
}
System::Data::DataSet^ NS_Comp_Svc_Cli::CLservicesClient::SelectClient(System::String^ dataTableName, int idcust)
{
	System::String^ sql;

	sql = Select(idcust);

	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc_Cli::CLservicesClient::InsertClient(System::String^ streetname, int streetnumber, System::String^ residencename, System::String^ buildingname, int floornumber, System::String^ complement, System::String^ city, int postcode,
													 System::String^ streetnamebill, int streetnbbill, System::String^ residencenamebill, System::String^ buildnamebill, int floornbbill, System::String^ complementbill, System::String^ citybill, int postcodebill,
												     System::String^ firstname, System::String^ lastname, System::String^ birthdate)
{
	System::String^ sql;

	this->oMapAddr->setStreetname(streetname);
	this->oMapAddr->setStreetnumber(streetnumber);
	this->oMapAddr->setResidencename(residencename);
	this->oMapAddr->setBuildingname(buildingname);
	this->oMapAddr->setFloornumber(floornumber);
	this->oMapAddr->setComplement(complement);
	this->oMapCityClient->setNamecity(city);
	this->oMapPostCode->setPostcode(postcode);
	this->oMapBill->setStreetnameBilling(streetnamebill);
	this->oMapBill->setStreetnumberBilling(streetnbbill);
	this->oMapBill->setResidencenameBilling(residencenamebill);
	this->oMapBill->setBuildingnameBilling(buildnamebill);
	this->oMapBill->setFloornumberBilling(floornbbill);
	this->oMapBill->setComplementBilling(complementbill);
	this->oMapBill->setCitybilling(citybill);
	this->oMapBill->setPostcodeBilling(postcodebill);
	this->oMapPersoInfo->setFirstname(firstname);
	this->oMapPersoInfo->setLastname(lastname);
	this->oMapPersoInfo->setBirthdate(birthdate);

	sql = Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Cli::CLservicesClient::DeleteClient(int id) {

	System::String^ sql;

	this->oMapCust->setIdcustomer(id);

	sql = Delete();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Cli::CLservicesClient::UpdateClient(int idcust, System::String^ firstname, System::String^ lastname, System::String^ birthdate, System::String^ streetnamebill, int streetnbbill, System::String^ residencenamebill, System::String^ buildnamebill, int floornbbill, System::String^ complementbill, System::String^ citynamebill, int postcodebill, System::String^ streetname,int streetnumber, System::String^ residencename, System::String^ buildingname, int floornumber, System::String^ complement, System::String^ city, int postcode, int idaddrbill, int idaddrdeliv) {

	System::String^ sql;

	this->oMapCust->setIdcustomer(idcust);
	this->oMapPersoInfo->setFirstname(firstname);
	this->oMapPersoInfo->setLastname(lastname);
	this->oMapPersoInfo->setBirthdate(birthdate);
	this->oMapBill->setStreetnameBilling(streetnamebill);
	this->oMapBill->setStreetnumberBilling(streetnbbill);
	this->oMapBill->setResidencenameBilling(residencenamebill);
	this->oMapBill->setBuildingnameBilling(buildnamebill);
	this->oMapBill->setFloornumberBilling(floornbbill);
	this->oMapBill->setComplementBilling(complementbill);
	this->oMapBill->setCitybilling(citynamebill);
	this->oMapBill->setPostcodeBilling(postcodebill);
	this->oMapAddr->setStreetname(streetname);
	this->oMapAddr->setStreetnumber(streetnumber);
	this->oMapAddr->setResidencename(residencename);
	this->oMapAddr->setBuildingname(buildingname);
	this->oMapAddr->setFloornumber(floornumber);
	this->oMapAddr->setComplement(complement);
	this->oMapCityClient->setNamecity(city);
	this->oMapPostCode->setPostcode(postcode);
	this->oMapBill->setidaddress(idaddrbill);
	this->oMapDeliv->setidaddress(idaddrdeliv);

	sql = Update();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc_Cli::CLservicesClient::AddnewshippingClient(int idcust, int postcodeship, System::String^ cityship, System::String^ streetship, int nbship, System::String^ residenceship, System::String^ buildingship, int floorship, System::String^ complementship) {
	System::String^ sql;

	sql = Addnewshipping(idcust, postcodeship, cityship, streetship, nbship, residenceship, buildingship, floorship, complementship);

	this->oCad->actionRows(sql);
}

System::String^ NS_Comp_Svc_Cli::CLservicesClient::Addnewshipping(int idcust, int postcodeship, System::String^ cityship, System::String^ streetship, int nbship, System::String^ residenceship, System::String^ buildingship, int floorship, System::String^ complementship) {
	return "EXEC SP_ADD_DELIVERING_ADDRESS " +
		" @id_customer =" + idcust.ToString() +
		", @Post_code_delivering_address =" + postcodeship.ToString() +
		", @name_city_delivering_address ='" + cityship +
		"', @Street_name_delivering_address ='" + streetship +
		"', @Street_number_delivering_address =" + nbship.ToString() +
		", @Residency_name_delivering_address ='" + residenceship +
		"', @Building_name_delivering_address ='" + buildingship +
		"', @Floor_number_delivering_address =" + floorship.ToString() +
		", @Complement_delivering_address ='" + complementship + "';";
}


void NS_Comp_Svc_Cli::CLservicesClient::AddnewbillingClient(int idcust, int postcodebill, System::String^ citybill, System::String^ streetbill, int nbbill, System::String^ residencebill, System::String^ buildingbill, int floorbill, System::String^ complementbill) {
	System::String^ sql;

	sql = Addnewbilling(idcust, postcodebill, citybill, streetbill, nbbill, residencebill, buildingbill, floorbill, complementbill);

	this->oCad->actionRows(sql);
}

System::String^ NS_Comp_Svc_Cli::CLservicesClient::Addnewbilling(int idcust, int postcodebill, System::String^ citybill, System::String^ streetbill, int nbbill, System::String^ residencebill, System::String^ buildingbill, int floorbill, System::String^ complementbill) {
	return "EXEC SP_ADD_BILLING_ADDRESS " +
		" @id_customer =" + idcust.ToString() +
		", @Post_code_billing_address =" + postcodebill.ToString() +
		", @name_city_billing_address ='" + citybill +
		"', @Street_name_billing_address ='" + streetbill +
		"', @Street_number_billing_address =" + nbbill.ToString() +
		", @Residency_name_billing_address ='" + residencebill +
		"', @Building_name_billing_address ='" + buildingbill +
		"', @Floor_number_billing_address =" + floorbill.ToString() +
		", @Complement_billing_address ='" + complementbill + "';";
}


System::String^ NS_Comp_Svc_Cli::CLservicesClient::Select(int idcustomer) {
	return "EXEC SP_SC @id_customer ="+idcustomer.ToString()+";";
}

System::String^ NS_Comp_Svc_Cli::CLservicesClient::Insert() 
{
	System::String^ firstname = this->oMapPersoInfo->getFirstname();
	System::String^ lastname = this->oMapPersoInfo->getLastname();
	System::String^ birthdate = this->oMapPersoInfo->getBirthdate();
	System::String^ postcodebill = this->oMapBill->getPostcodeBilling().ToString();
	System::String^ citybill = this->oMapBill->getCitybilling();
	System::String^ streetnamebill = this->oMapBill->getStreetnameBilling();
	System::String^ streetnumberbill = this->oMapBill->getStreetnumberBilling().ToString();
	System::String^ residencebill = this->oMapBill->getResidencenameBilling();
	System::String^ buildingbill = this->oMapBill->getBuildingnameBilling();
	System::String^ floornumberbill = this->oMapBill->getFloornumberBilling().ToString();
	System::String^ complementbill = this->oMapBill->getComplementBilling();
	System::String^ postcode = this->oMapPostCode->getPostcode().ToString();
	System::String^ cityname = this->oMapCityClient->getNamecity();
	System::String^ streetname = this->oMapAddr->getStreetname();
	System::String^ streetnumber = this->oMapAddr->getStreetnumber().ToString();
	System::String^ residence = this->oMapAddr->getResidencename();
	System::String^ building = this->oMapAddr->getBuildingname();
	System::String^ floornumber = this->oMapAddr->getFloornumber().ToString();
	System::String^ complement = this->oMapAddr->getComplement();
	System::String^ temp = "EXEC SP_CC " +
		"@first_name ='" + firstname +
		"', @last_name ='" + lastname +
		"', @birth_date ='" + birthdate +
		"', @Post_code_billing_address =" + postcodebill+
		", @name_city_billing_address ='" +	citybill + 
		"', @Street_name_billing_address ='" + streetnamebill + 
		"', @Street_number_billing_address =" + streetnumberbill + 
		", @Residency_name_billing_address ='" + residencebill + 
		"', @Building_name_billing_address ='" + buildingbill + 
		"', @Floor_number_billing_address =" + floornumberbill + 
		", @Complement_billing_address ='" + complementbill + 
		"', @Post_code_delivering_address =" + postcode + 
		", @name_city_delivering_address ='" + cityname +
		"', @Street_name_delivering_address ='" + streetname +
		"', @Street_number_delivering_address =" + streetnumber +
		", @Residency_name_delivering_address ='" + residence +
		"', @Building_name_delivering_address ='" + building +
		"', @Floor_number_delivering_address =" + floornumber +
		", @Complement_delivering_address ='" + complement + "';";
	return temp;
	
}

System::String^ NS_Comp_Svc_Cli::CLservicesClient::Delete() {
	return "EXEC SP_D @tab = 'customer' , @id ="+this->oMapCust->getIdcustomer().ToString()+";";
}

System::String^ NS_Comp_Svc_Cli::CLservicesClient::Update() {
	return "EXEC SP_UC "+
		"@id_customer = "+ this->oMapCust->getIdcustomer().ToString() +
		", @first_name = '" + this->oMapPersoInfo->getFirstname() + 
		"', @last_name = '" + this->oMapPersoInfo->getLastname() + 
		"', @birth_date = '" + this->oMapPersoInfo->getBirthdate() + 
		"', @Street_name_billing_address = '"+this->oMapBill->getStreetnameBilling()+
		"', @Street_number_billing_address = "+this->oMapBill->getStreetnumberBilling().ToString()+
		", @Residency_name_billing_address = '"+this->oMapBill->getResidencenameBilling()+
		"', @Building_name_billing_address = '" + this->oMapBill->getBuildingnameBilling() + 
		"', @Floor_number_billing_address = " + this->oMapBill->getFloornumberBilling().ToString() + 
		", @Complement_billing_address = '" + this->oMapBill->getComplementBilling() + 
		"', @name_city_billing_address = '" + this->oMapBill->getCitybilling() + 
		"', @post_code_billing_address = "+this->oMapBill->getPostcodeBilling().ToString()+
		", @Street_name_delivering_address = '"+this->oMapAddr->getStreetname()+
		"', @Street_number_delivering_address = "+this->oMapAddr->getStreetnumber().ToString()+
		", @Residency_name_delivering_address = '"+this->oMapAddr->getResidencename()+
		"', @Building_name_delivering_address = '"+this->oMapAddr->getBuildingname()+
		"', @Floor_number_delivering_address = "+this->oMapAddr->getFloornumber().ToString()+
		", @Complement_delivering_address = '"+this->oMapAddr->getComplement()+
		"', @name_city_delivering_address = '"+this->oMapCityClient->getNamecity()+
		"', @post_code_delivering_address = "+this->oMapPostCode->getPostcode().ToString()+
		", @id_billing_address_changed = "+this->oMapBill->getidaddress().ToString()+
		", @id_delivering_address_changed = "+this->oMapDeliv->getidaddress().ToString();
}