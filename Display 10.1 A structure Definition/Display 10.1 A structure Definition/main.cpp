//  Program to demonstrate the CDAccount structure type
//  main.cpp
//  Display 10.1 A structure Definition
//
//  Created by Leon Nortje on 2016/04/17.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//

#include <iostream>
using namespace std;

//Structure for a bank certificate of deposit:
struct CDAccount
{
    double balance;
    double interest_rate;
    int term; //months until maturity
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
