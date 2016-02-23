//  main.cpp
//  Output
//
//  Created by Leon Nortje on 2016/02/21.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//

#include <fstream>
//For file I/O
#include <iostream>
//For cout
#include <cstdlib>
//For exit

using namespace std;

int main()
{
    
    char in_file_name[16], out_file_name[16];
    
    ifstream in_stream;
    ofstream out_stream;
    
    cout << "I will sum three numbers taken from an input\n"
    << "file and write the sum to an output file.\n";
    cout << "Enter the input file name (max 15 characters):\n";
    cin >> in_file_name;
    
    cout << "Enter the output file name (max 15 characters):\n";
    cin >> out_file_name;
    
    cout << "I will read numbers from the file "
    << in_file_name << " and \n"
    << "place the sum in the file "
    << out_file_name << endl;
    
    in_stream.open(in_file_name);
    if (in_stream.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on open file for error.
    
    out_stream.open(out_file_name);
    if (out_stream.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on writing to file for error.
    
    int first, second, third;
    in_stream >> first >> second >> third;
    //Reading content from file.
    
    out_stream << "The sum of the first 3\n"
    << "numbers in the infile.dat\n"
    << "is " << (first + second + third)
    << endl;
    //Writing content to file.
    
    in_stream.close();
    out_stream.close();
    
    return 0;
}
