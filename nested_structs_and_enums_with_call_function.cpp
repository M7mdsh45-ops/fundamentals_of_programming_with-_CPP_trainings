// nested_structs_and_enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// nested_structures_and_enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum engender { male, female };
enum enmaritalstatus { married, single };
enum encolor { red, white, black, green };


struct staddress
{
	string streetname;
	string buildingNO;
	string POBOX;
	string ZIPCODE;
};

struct stcontactinfo
{
	string email;
	string phone;
	staddress address;
};

struct stperson
{
	string firstname;
	string lastname;
	stcontactinfo contactinfo;

	engender gender;
	enmaritalstatus maritalstatus;
	encolor favcolor;
};

void printpersoninfo(stperson p)
{
	cout << "\n ********************* \n ";
	cout << "first name : " << p.firstname << endl;
	cout << "last name :  " << p.lastname << endl;
	cout << "phone :  " << p.contactinfo.phone << endl;
	cout << "email : " << p.contactinfo.email << endl;
	cout << "street : " << p.contactinfo.address.streetname << endl;
	cout << "gender : " << p.gender;
	cout << " \n ********************* \n ";
}




int main()
{
	stperson person1;

	person1.firstname = "Mohamed";
	person1.lastname = "Ahmed";
	person1.contactinfo.email = "m7md21.com";
	person1.contactinfo.phone = "+201273838387";
	person1.contactinfo.address.POBOX = "5555";
	person1.contactinfo.address.ZIPCODE = "777756";
	person1.contactinfo.address.streetname = "Tahia Masr Street";
	person1.contactinfo.address.buildingNO = "515";

	person1.gender = engender::male;
	person1.maritalstatus = enmaritalstatus::single;
	person1.favcolor = encolor::black;

	printpersoninfo(person1);
	

	return 0;
}

