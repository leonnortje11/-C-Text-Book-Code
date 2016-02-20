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
    cout << "Enter the price of the round pizza: $";
    cin >> price_round;
    
    cout << "Enter the price of a round pizza: $";
    cin >> price_round;
    cout << "Enter length and width in inches\n"
        << " of a rectangualr pizza: ";
    cin >> length >> width;
    
    cout << "Enter the price of a regtangular pizza: $";
    cin >> price_rectangualr;
    
    unitprice_rectangular = unitprice(length, width, price_rectangualr);
    unit_price_round = unitprice(diameter, price_round);
    //Overloading function call.
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << endl
        << "Round pizza: Diameter = "
        << diameter << " inches\n"
        << "Price = $" << price_round
        << " Per square inch = $" << unit_price_round
        << endl
        << "Rectangular pizza: Length = "
        << length << " inches\n"
        << "rectangular pizza: width = "
        << width << " inches\n"
        << "Price = $" << price_rectangualr
        << " Per square inch = $" << unitprice_rectangular
        << endl;
    
    if (unit_price_round < unitprice_rectangular)
        cout << "The round one is the better buy.\n";
    else
        cout << "The rectangular one is the better buy.\n";
    
    cout << "Buon Appetito!\n";
    return 0;
}


double unitprice(int diameter, double price)
{
    const double PI = 3.14159;
    double radius, area;
    
    radius = diameter/static_cast<double>(2);
    area = PI * radius * radius;
    return (price/area);
}

double unitprice(int length, int width, double price)
{
    double area = length * width;
    return (price/area);
}

