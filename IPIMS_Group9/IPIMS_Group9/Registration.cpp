#include "Registration.h"

/*
void register(){

	String^ constring = L"datasource=localhost;port=3306;username=root;password=Group9IPIMS";

	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into database.user_data(user_id, first_name, last_name, contact_number, email, dob, password, city, state, zip_code, street_address, insurance_provider, contact, gender) values('" + this->textBoxIdNumber->Text + "','" + this->textBoxFirstName->Text + "','" + this->textBoxLastName->Text + "','" + this->textBoxPhoneNumber->Text + "','" + this->textBoxEmailAddress->Text + "','" + this->textBoxDateOfBirth->Text + "','" + this->textBoxPassword->Text + "','" + this->textBoxCity->Text + "','" + this->textBoxState->Text + "','" + this->textBoxZipCode->Text + "','" + this->textBoxStreetAddress->Text + "','" + this->textBoxHealthInsurance->Text + "','" + this->textBoxHealthInsuranceNumber->Text + "','" + this->textBoxGender->Text + "');", conDataBase);

	MySqlDataReader^ myReader;

	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
	}
	catch (Exception^ ex){
		MessageBox::Show(ex->Message);
	}
}
*/