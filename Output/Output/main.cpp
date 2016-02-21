//
//  main.cpp
//  Output
//
//  Created by Leon Nortje on 2016/02/21.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    
    ifstream in_stream;
    ofstream out_stream;
    
    in_stream.open("/Users/leon.nortje/Dropbox/UNISA/Code-from-TEXT-Book/Output/Output/infile.dat");
    if (in_stream.fail())
        {
            cout << "Input file open failed.\n";
            exit(1);
        }
    out_stream.open("/Users/leon.nortje/Dropbox/UNISA/Code-from-TEXT-Book/Output/Output/outfile.dat");
    
    
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
