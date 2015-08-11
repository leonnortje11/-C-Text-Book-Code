// Display 3.5 Multiway if-else Statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int net_income;
	double tax_bill;
	double five_percent_tax, ten_percent_tax;

	cout << "Enter net income (rounded to whole Rand) R";
	cin >> net_income;

	if (net_income <= 15000)
		tax_bill = 0;
	else if ((net_income > 15000) && (net_income <= 25000))
		//5% of amount over R15,000
		tax_bill = (0.05 * (net_income - 15000));
	else //net_income > R25,000
	{
		//five_percent_tax = 5% of income from R15,000 to R25,000
		five_percent_tax = 0.05 * 10000;
		//ten_percent_tax = 10% of income over R25,000
		ten_percent_tax = 0.10 * (net_income - 25000);
		tax_bill = (five_percent_tax + ten_percent_tax);
	}
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Net income = R" << net_income << endl
		<< "Tax bill = R" << tax_bill << endl;

	return 0;
}

