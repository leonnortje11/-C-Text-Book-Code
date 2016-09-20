//  Program to demonstrate the class BankAccount
//  main.cpp
//  Display 10.6 Class with Constructors
//
//  Created by Leon Nortje on 2016/09/18.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//

#include <iostream>
using namespace std;

//  Class for a bank account
class BankAccount
{
public:
    BankAccount(int dollars, int cents, double rate);
    //Initializes the accout balance to $dollars.cents and
    //initializes the interest rate to rate percent.
    
    BankAccount(int dollars, double rate0);
    //Initializes the account balance to $dollar.00 and
    //initializes the interest rate to rate percent.
    
    BankAccount();
    //Initializes the account balance to $0.00
    //and the interest rate to 0.00%
    
    void set(int dollars, int cents, double rate);
    //Postcondition: The account balance has been set to $dollars.cents;
    //The interest rate has been set to rate percent.
    
    void set(int dollars, double rate);
    //Postcondition: The account balance has been set to $dollars.00.
    //The interest rate has been set to rate percent.
    
    void update();
    //Postcondition: One year of simple interest has been added
    //to the account balance
    
    double get_balance();
    //returns the correct account balance.
    
    double get_rate();
    //Returns the current account interest rate as a percentage.
    
    void output(ostream$ outs);
    //
    
};

int main()

{
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
