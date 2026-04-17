// enums_trianings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


struct info
{
    string name;
    int age;
    string city;
    string country;
    int monthly_salary;
    int yearly_salary;

};

enum gender { MALE , F };
enum maritalstatus {M , S};
enum favcolor {red , blue , yellow , white , black};


int main()
{
    info person1;

    person1.name = "Mohamed ahmed  ";
    person1.age = 25;
    person1.city = "Cairo ";
    person1.country = " Egypt ";
    person1.monthly_salary = 2000;
    person1.yearly_salary = 24000;
  

    cout << " my name is " << person1.name << "\n ";
    cout << " my age is " << person1.age << "\n ";
    cout << " my city is " << person1.city << "\n ";
    cout << " my country is " << person1.country << "\n ";
    cout << " my monthly salary is " << person1.monthly_salary << "\n ";
    cout << " my yearly salary is " << person1.yearly_salary << "\n ";

    gender mygender;
    mygender = gender::MALE;

    maritalstatus mymaritalstatus;
      mymaritalstatus = maritalstatus::M;

    favcolor myfavcolor; 
    myfavcolor = favcolor::black; 



    cout << " my gender is " << mygender << "\n "; 
    cout << " my marital status  : " << mymaritalstatus<< "\n ";
    cout << " my favorite color is  " << myfavcolor<< "\n ";

}
