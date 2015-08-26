// Display 3.12 A for Statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int sum = 0;

	for (int n = 1; n <= 0; n++)
		//Note that the variable n is a local variable of the body of the for loop!

		sum = sum + n;

	cout << "The sum of the numbers 1 to 10 is :"
		<< sum << endl;
	
	return 0;
}

