// Display 6.2 File IO with Checks on open.cpp : Defines the entry point for the console application.
// Reeads three numbers from the file infile.dat, sums the numers
// and writes the sume to the file outfile.dat

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("infile.dat");
	if (in_stream.fail())
	{
		cout << "Input file open failed.\n";
		exit(1);
	}

	out_stream.open("outfile.dat");
	if (out_stream.fail())
	{
		cout << "Output file opening failed.\n";
			exit(1);
	}

	int first, second, third;

	in_stream >> first >> second >> third;
	out_stream << "The sum of the first 3\n"
		<< "numbers in the infile.dat\n"
		<< "is " << (first + second + third)
		<< endl;

	in_stream.close();
	out_stream.close();

	return 0;
}

