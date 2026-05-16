// gym_membership_system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class member
{
   private : 
	   string name;
	   int id;
	   int months;
	   float monthlyFee;

   public : 

	  
	   member ( )
	   {
		   name = " Unknown ";
		   id = 0;
		   months = 0; 
		   monthlyFee = 0;

	   }

	   member(string n, int ID, int Mo, int MoFee)
	   {
		   name = n;
		   id = ID;
		   months = Mo;
		   monthlyFee = MoFee;
	   }

	   member( const member& m2)
	   {
		   name = m2.name;
		   id = m2.id;
		   months = m2.months;
		   monthlyFee = m2.monthlyFee;

	   }


	   float calcTotalFees()
	   {
		   return months * monthlyFee;
	   }

	   void display()
	   {
		   cout << " Name : " << name << endl;
		   cout << " ID : " << id << endl;
		   cout << " Months : " << months << endl;
		   cout << " MonthlyFee : " << monthlyFee << endl;
		   cout << " Total Fees :  " << calcTotalFees () << endl;
		   cout << " _____________________________ \n ";
		  
	   }

	  
};


int main()
{
	member m1;
	member m2(" Mohamed ", 227632, 3, 100);
	member m3 = m2;

	m1.display() ;
	m2.display() ;
	m3.display() ;
}

