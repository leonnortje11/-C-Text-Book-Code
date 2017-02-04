// Display 6.1 Simple file input output.cpp : Defines the entry point for the console application.
// Reeads three numbers from the file infile.dat, sums the numers
// and writes the sume to the file outfile.dat
// A better version of this program will be given in Display 6.2

#include "stdafx.h"
#include <fstream>

using namespace std;

int main()
{
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("infile.dat");
	out_stream.open("outfile.dat");
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

