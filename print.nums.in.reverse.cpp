		// testttt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int readNum(string message)
{
	int num;

	do
	{
		cout << message << endl;
		cin >> num;

	} while (num < 0);
	
	return num;
}


void printNums ( int num )
{
	int remainder = 0;

	while (num > 0)
	{

		remainder = num % 10;
		num = num / 10;
		cout <<  remainder << endl ;

	}

}



int main()
{
	

	printNums(readNum(" please enter a num "));


}


