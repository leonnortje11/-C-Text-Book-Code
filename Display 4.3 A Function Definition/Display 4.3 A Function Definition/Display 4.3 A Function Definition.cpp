// Display 4.3 A Function Definition.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
using namespace std;

double total_cost(int number_par, double price_par);
//Function declaration
//Computes the total cost, including 5% sales tax,
//on number_par items at a cost of price_par each.

int main()
{
	double price, bill;
	int number;

	cout << "Enter the number of items purchasd: ";
	cin >> number;
	cout << "Enter the price per item R";
	cin >> price;

	bill = total_cost(number, price);
	//Function call
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << number << " items at "
		<< "R" << price << "each.\n"
		<< "Final bill, including tax, is R" << bill
		<< endl;

	system("pause");

	return 0;
}

double total_cost(int number_par, double price_par)
{
	const double TAX_RATE = 0.05;
	double subtotal;

	subtotal = price_par * number_par;
	return (subtotal + subtotal * TAX_RATE);
}

