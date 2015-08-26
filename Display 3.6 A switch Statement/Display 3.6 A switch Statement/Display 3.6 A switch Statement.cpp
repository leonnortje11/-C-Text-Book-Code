// Display 3.6 A switch Statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char grade;
	cout << "Enter your midterm grade and press Return: ";
	cin >> grade;

	switch (grade)
	{
	case 'A':
		cout << "Excellent. "
			<< "You need not take the final.\n";
		break;
	case 'B':
		cout << "Very good. ";
		grade = 'A';
		cout << "Your midterm grade is now "
			<< grade << endl;
		break;
	default:
		cout << "That is not a possible grade.\n";
	}

	cout << "End of program.\n";
	
	return 0;
}

