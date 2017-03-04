// Display 2.8 An if-else Statement.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int hours;
	double gross_pay, rate;

	cout << "Enter the hourly rate of pay: R";
	cin >> rate;
	cout << "Enter the number of hours worked,\n"
		<< "rounded to a whole number of hours: \n";

	cin >> hours;

	if (hours > 40)
		gross_pay = rate * 40 + 1.5 * rate * (hours - 40);
	else
		gross_pay = rate * hours;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "Hours = " << hours << endl;
	cout << "Hours pay rate = R" << rate << endl;
	cout << "Gross pay = R" << gross_pay << endl;

	system("pause");
	
	return 0;
}

