//***********************************************************************************
// Software Sales Program
// Programmer: Caleb Cox
// Completed : 10/06/2018
// Status    : Completed
//
// This program calculates and displays the discounted cost of an order in relation
// to the quantity of the order. If there is no discount, a message indicating so
// will be displayed.
//***********************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int PKG = 199; //Holds price of one package
    int quantity; //Holds user input of quantity
    double initial_cost;
    double discount_rate;
    double discount_price;
    double total;
    
    //Get quantity of order from user
    cout << "How many units are being purchased? ";
    cin >> quantity;
    
    
    initial_cost = PKG * quantity; //Find initial cost of order
    
    
    //Determine the discount rate, if any
    if (quantity >= 100)
    {
        discount_rate = .5;
        
        //Calculations for total price
        discount_price = initial_cost * discount_rate;
        total = initial_cost - discount_price;
        cout << fixed << showpoint << setprecision(2);
        cout << "The total cost of the purchase is $" << total << endl;
        
    }
    else if (quantity < 100 && quantity >= 50)
    {
        discount_rate = .4;
        
        //Calculations for total price
        discount_price = initial_cost * discount_rate;
        total = initial_cost - discount_price;
        cout << fixed << showpoint << setprecision(2);
        cout << "The total cost of the purchase is $" << total << endl;

    }
    else if (quantity < 50 && quantity >= 20)
    {
        discount_rate = .3;
        
        //Calculations for total price
        discount_price = initial_cost * discount_rate;
        total = initial_cost - discount_price;
        cout << fixed << showpoint << setprecision(2);
        cout << "The total cost of the purchase is $" << total << endl;

    }
    else if (quantity < 20 && quantity >= 10)
    {
        discount_rate = .2;
        
        //Calculations for total price
        discount_price = initial_cost * discount_rate;
        total = initial_cost - discount_price;
        cout << fixed << showpoint << setprecision(2);
        cout << "The total cost of the purchase is $" << total << endl;

    }
    else if (quantity < 10 && quantity > 0)
    {
        //Calculations for total price
        total = initial_cost;
        cout << fixed << showpoint << setprecision(2);
        cout << "The total cost of the purchase is $" << total << endl;
        cout << "No discount applied to orders of less than 10 units." << endl;
    }
    else
    {
        cout << "That is not a valid request." << endl;
    }
    
    cout <<"---------------------------------------------------------" << endl;
    return 0;
}
