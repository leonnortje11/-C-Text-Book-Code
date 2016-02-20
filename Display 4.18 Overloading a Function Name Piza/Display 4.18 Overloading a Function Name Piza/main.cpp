//
//  main.cpp
//  Display 4.18 Overloading a Function Name Piza
//
//  Created by Leon Nortje on 2016/02/20.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//  Determines whether a round pizza or a rectangular pizza is the best buy.

#include <iostream>
using namespace std;

double unitprice(int diameter, double price);
//Returns the price per square inch of round pizza.
//The formal parameter named diameter is the diameter of the pizza
//in inches. The formal parameter named price is the price of the pizza.


double unitprice(int length, int width, double price);
//Returns the price per square inch of rectangular pizza
//with dimensions length by width inches.
//The formal parameter price is the price of the pizza.


int main()
{
   
    int diameter, length, width;
    double price_round, unit_price_round, price_rectangualr, unitprice_rectangular;
    
    cout << "Welcom the the Pizza Consumers Union.\n";
    cout << "Enter the diameter in inches"
        << " of a round pizza: ";
    cin >> diameter;
    
    return 0;
}
