// Display 2.4 The Type CHAR.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	char symbol1, symbol2, symbol3;

	cout << "Enter two initials, without any period:\n";
	cin >> symbol1 >> symbol2;
	cout << "The two initials are:\n";
	cout << symbol1 << symbol2 << endl;

	cout << "Once more with a space:\n";
	symbol3 = ' ';
	cout << symbol1 << symbol3 << symbol2 << endl;
	cout << "Thats all.";

	system("pause");

	return 0;

}

