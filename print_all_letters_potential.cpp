// print_all_character_potentials.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{ 
	for (int i = 65 ; i <= 90 ; i++)
	{
		cout << "ALL potentials for " << static_cast<char>(i) << "\n \n ";

		for ( int j = 65 ; j <= 90 ; j++ )
		{
			cout << static_cast<char>(i) << static_cast<char>(j) << "\n";

		}
		cout << "\n------------------------------------- \n";


    }




}

