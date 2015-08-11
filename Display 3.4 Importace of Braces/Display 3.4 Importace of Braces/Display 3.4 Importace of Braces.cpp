// Display 3.4 Importance of Braces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double fuel_guage_reading;

	cout << "Enter fuel guage reading: ";
	cin >> fuel_guage_reading;

	cout << "First with braces:\n";
	if (fuel_guage_reading < 0.75)
	{
		if (fuel_guage_reading < 0.25)
			cout << "Fuel very low. Caution\n";
	}
	else 
	{
		cout << "Fuel over 3/4. Dont stop now!\n";
	}

	// Now without braces and the program will perform a diffirent function
	cout << "Now without braces:\n";
	if (fuel_guage_reading < 0.75)
		if (fuel_guage_reading < 0.25)
			cout << "Fuel very low. Caution\n";
		else
			cout << "Fuel over 3/4. Dont stop now!\n";


	return 0;
}

