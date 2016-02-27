//
//  main.cpp
//  Display 7.1 program using an Array
//
//  Created by Leon Nortje on 2016/02/27.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int i, score[5], max;
    
    cout << "Enter 5 scores:\n";
    cin >> score[0];
    max = score [0];
    
    for (i = 1; i < 5; i++)
    {
        cin >> score[i];
        if (score[i] > max)
            max = score[i];
        //max is the largest of the values score[0] ... score[i]
        
    }
    
    cout << "The highest score is " << max << endl
        << "The scores and their\n"
        << "differences from the highest are:\n";
    
    for (i = 0; i <5; i++)
        cout << score[i] << " of by "
        << (max - score[i]) << endl;
    
    return 0;
}
