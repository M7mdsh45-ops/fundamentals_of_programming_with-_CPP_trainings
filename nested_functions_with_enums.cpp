// Nested_Functions_with_Enums_ex.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum enweekday {sun=1 , mon =2 , tue=3 , wed=4 ,thu =5 , fri=6 , sat=7};

void showweekdaymenu()
{
    cout << " ***********************\n\n";
    cout << " \t WEEK DAYS \n\n";
    cout << " ************************\n\n";
    cout << " 1: Sunday \n ";
    cout << " 2: Monday \n ";
    cout << " 3: Tuesday \n ";
    cout << " 4: Wednesday \n ";
    cout << " 5: Thursday \n ";
    cout << " 6: Friday \n ";
    cout << " 7: Saturday \n \n";
    cout << "************************** \n \n ";
    cout << "Please enter the number of day \n";
}


enweekday readweekday()
{
    enweekday weekday;
    int wd;
    cin >> wd;
    return (enweekday)wd;
}


string getweekdayname(enweekday weekday)
{
    switch (weekday)
    {
    case  enweekday::sun:
        return "Sunday";
        

    case  enweekday::mon:
        return "Monday";
        

    case  enweekday::tue:
        return "Tuesday";
        

    case  enweekday::wed:
        return "Wednesday";
        

    case  enweekday::thu:
        return "Thursday";
        

    case  enweekday::fri:
        return "Friday";
        

    case  enweekday::sat:
        return "Saturday";
        

    default :
            return "NOT a Week Day ! \n ";
    }


}



int main()
{
    showweekdaymenu();

    enweekday day = readweekday ();
    cout << " Week day is : " << getweekdayname(day) << endl;



}

