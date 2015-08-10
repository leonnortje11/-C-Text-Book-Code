// Display 2.12 A while Loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int count_down;
	cout << "How many greetings do you want? ";
	cin >> count_down;

	//while loop
	while (count_down > 0)
	{
		cout << "Hello \n";
		count_down = count_down - 1;
	}

	cout << endl;
	cout << "Thats all!\n";

	return 0;
}

