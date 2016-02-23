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
#include <iomanip>
//Required to setw, column width

using namespace std;

void make_neat(ifstream& messy_file, ofstream& neat_file, int number_after_decimal, int field_width);
//Stream parameters must be call-by-reference


int main()
{
    
    ifstream fin;
    ofstream fout;
    
 
    
    fin.open("rawdata.dat");
    if (fin.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on open file for error.
    
    fout.open("neat.dat");
    if (fout.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on writing to file for error.
    
  
    make_neat(fin, fout, 5, 12);
    //Call the function to fix the file content
    
    fin.close();
    fout.close();
    
    return 0;
}

void make_neat(ifstream& messy_file, ofstream& neat_file, int number_after_decimal, int field_width)
//Fix content to new file
{
    
    neat_file.setf(ios::fixed);
    neat_file.setf(ios::showpoint);
    neat_file.setf(ios::showpos);
    neat_file.precision(number_after_decimal);
    
    
    double next;
    while (messy_file >> next)
    {
        cout << setw(field_width) << next << endl;
        //Write content to screen
        neat_file << setw(field_width) << next << endl;
        //Write content to the new file.
    }
}