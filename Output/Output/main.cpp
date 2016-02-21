//
//  main.cpp
//  Output
//
//  Created by Leon Nortje on 2016/02/21.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//

#include <fstream>
using namespace std;

int main()
{
    
    ifstream in_stream;
    ofstream out_stream;
    
    in_stream.open("infile.dat");
    
    
    int first, second, third;
    in_stream >> first >> second >> third;
    
    
    return 0;
}
