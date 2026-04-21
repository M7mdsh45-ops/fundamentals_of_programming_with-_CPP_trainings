// print_the sum_and_avr_with_arrays_loops_and_functions.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void readarraydata (int arr1[100] , int &length )
{ 
    cout << " how many numbers do you want to enter ? ( 1 to 100 ) \n";
    cin >> length;

    for (int i = 0; i < length; i++)
    {

        cout << "please enter number " << i+1 << endl;
        cin >> arr1[i];
    }
}


void printarraydata(int arr1[100] , int length )
{
    for (int i = 0; i < length; i++)
    {
        cout << "number ["<<i+1<<"] : " << arr1[i] << endl;
    }
   
}


int calcarraysum (int arr1[100], int length)
{
    int sum = 0 ;

    for (int i = 0 ; i < length ; i++)
    {
        sum +=arr1[i];
    }

    return sum;
}

float calcarrayavr(int arr1[100], int length)

{

    return (float)calcarraysum(arr1, length) / length;

}




int main()
{
    int arr1[100], length = 0;

    readarraydata(arr1, length);
    printarraydata(arr1, length);

    cout << "\n **************************\n ";

    cout << " The Sum = " << calcarraysum(arr1, length) << endl;
    cout << " The Average = " << calcarrayavr(arr1, length) << endl;

}


