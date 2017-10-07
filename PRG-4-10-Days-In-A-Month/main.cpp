//
//  main.cpp
//  PRG-4-10-Days-In-A-Month
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that asks the user to enter a month (letting the user enter an integer
//  in the range of 1 through 12) and the year. The program should then display the number
//  of days in that month. Use the following criteria to identify leap years:
//
//  1. Determine whether the year is divisible by 100. If it is, then it is a leap year if and
//     only if it is divisible by 400. For eample, 2000 is a leap year but 2100 is not.
//  2. If the year is not divisible by 100, then it is a leap year if and only if it is divisible by
//     4. For example, 2008 is a leap year but 2009 is not.
//
//  Here is a sample run of the program:
//  Enter a month (1-12): 2 ENTER
//  Enter a year: 2008 ENTER
//  29 days


#include <iostream>

using namespace std;

int main()
{
    int intMonth,
    intYear,
    intMonthDays;
    
    cout << "Please enter a month by number:\n";
    cin >> intMonth;
    while(!cin || intMonth < 1 || intMonth > 12)
    {
        cout << "Please enter a month number between 1 and 12:\n";
        cin.clear();
        cin.ignore();
        cin >> intMonth;
    }
    
    cout << "Please enter a four-digit year:\n";
    cin >> intYear;
    while(!cin || intYear < 0 || intYear > 9999)
    {
        cout << "Please enter a year between 0000 and 9999:\n";
        cin.clear();
        cin.ignore();
        cin >> intYear;
    }
    
    if( (intYear % 100 == 0 && intYear % 400 == 0) || (intYear % 100 != 0 && intYear % 4 == 0))
    {
        intMonthDays = 29;
    }
    else
    {
        intMonthDays = 28;
    }
    
    switch(intMonth)
    {
        case 1: cout << "January has 31 days.\n";
            break;
        case 2: cout << "February has " << intMonthDays << " days.\n";
            break;
        case 3: cout << "March has 31 days.\n";
            break;
        case 4: cout << "April has 30 days.\n";
            break;
        case 5: cout << "May has 31 days.\n";
            break;
        case 6: cout << "June has 30 days.\n";
            break;
        case 7: cout << "July has 31 days.\n";
            break;
        case 8: cout << "August has 31 days.\n";
            break;
        case 9: cout << "September has 30 days.\n";
            break;
        case 10: cout << "October has 31 days.\n";
            break;
        case 11: cout << "November has 30 days.\n";
            break;
        case 12: cout << "December has 31 days.\n";
            break;
    }
    
    return 0;
}


