

/*
 * File:   main.cpp
 * Author: Chad
 * Purpose: Total Purchase
 * Created on February 20, 2019, 8:33 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double itemOne = 15.95, itemTwo = 24.95, itemThree = 6.95, itemFour = 14.95,
            itemFive = 3.95;
    double subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
    double tax = 0.07* subtotal;
    double total = tax + subtotal;
    
    cout<< "Price of item 1 = $" << itemOne<< endl;
    cout<< "Price of item 2 = $" << itemTwo<< endl;
    cout<< "Price of item 3 = $" << itemThree<< endl;
    cout<< "Price of item 4 = $" << itemFour<< endl;
    cout<< "price of item 5 = $" << itemFive<< endl<< endl;
    cout<< "Subtotal = $" << subtotal<< endl;
    cout<< "Tax = $" << tax<< endl;
    cout<< "Total = $" << total<< endl<< endl;
    
    
    
    
    return 0;
}

