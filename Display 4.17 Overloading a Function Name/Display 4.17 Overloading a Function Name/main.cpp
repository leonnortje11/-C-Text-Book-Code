//
//  main.cpp
//  Display 4.17 Overloading a Function Name
//
//  Created by Leon Nortje on 2016/02/20.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//  //Illustrates overloading the function name ave.

#include <iostream>
using namespace std;

double ave(double n1, double n2);
//Returns the average of the two numbers n1 and n2.

double ave(double n1, double n2, double n3);
//Returns the average of the three numbers n1, and n3.

int main()
{
    
    cout << "The average of 2.0, 2.5, and 3.0 is "
    << ave(2.0, 2.5, 3.0) << endl;
    //Call Overloading function.
    
    cout << "The average of 4.5 and 5.5 is "
    << ave(4.5, 5.5) << endl;
    //Call Overloading function.
    
    
    return 0;
}

double ave(double n1, double n2)
//Overloading function with two arguments.
{
    return ((n1 + n2)/2.0);
}


double ave(double n1, double n2, double n3)
//Overloading function with three arguments.
{
    return ((n1 + n2 + n3)/3.0);
}