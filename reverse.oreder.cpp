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


int  reverseNums ( int num )
{
	int remainder = 0 , num2 = 0;

	while (num > 0)
	{

		remainder = num % 10;
		num = num / 10;
		num2 = num2 * 10 + remainder;
	}

	return num2;
}

void printNums( int num2)
{
	cout << num2 << endl;


}


int main()
{
	

	printNums(reverseNums(readNum(" please enter a num ")));


}

