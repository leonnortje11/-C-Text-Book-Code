// Display 2.15 A do-while Loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char ans;

	do
	{
		cout << "Hello\n";
		cout << "Do you want another greeting?\n"
			<< "Press y for yes, n for no,\n"
			<< "and then press return: ";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');

	cout << "Good-bye\n";

	system("pause");

	return 0;
}

