// Display 2.17 Comments and Named Constants.cpp : Defines the entry point for the console application.
// Author: Leon Nortje
// Email Address: nortje.leon@gmail.com
// Assignment Number: 2
// Description: Program to determine if the user is ill.
// Last Changed: Month Day, Year

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	const double NORMAL = 98.6; //degree Fahrenheit
	double temperature;

	cout << "Enter your temperature: ";
	cin >> temperature;

	if (temperature > NORMAL)
	{
		cout << "You have a fever.\n";
		cout << "Drink lots of liquids and get to bed.\n";
	}
	else
	{
		cout << "You dont have a fever.\n";
		cout << "Go study.\n";
	}
	return 0;
}

