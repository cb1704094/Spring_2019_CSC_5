

/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Purpose: Gas Tax
 * Created on March 23, 2019, 10:12 PM
 * 
 * Description: Calculate the percentage Gas Tax on a gallon of gas, 
 * and the profit made from a gallon of gas given
 * 
 */

//System Libraries

#include <cstdlib>
#include <iostream>    //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
   
    //Set the random number seed
    
     //Declare Variables
    const float EXCISE_TAX = 0.39;
    const float SALES_TAX_P = 0.08;
    const float CAP_TRADE = 0.10;
    const float FED_EXCISE_TAX = 0.184;
    const float COMPANY_PROFIT_P = 0.065;
    float gpg, profit, taxes, temp, sales, cost;
    
    //Initialize or input i.e. set variable values
    cout<<"Gas Tax"<<endl;
    cout<<"Calculate the percentage Gas Tax on a gallon of gas,"<<endl;
    cout<<"and the profit made from a gallon of gas given."<<endl;
    cout<<"Enter the amount it cost you per gallon the last time you put gas in your car: "<<endl;
    cin>>gpg;
    
    //Map inputs -> outputs
    temp = gpg - EXCISE_TAX - CAP_TRADE - FED_EXCISE_TAX;
    sales = temp / (1 + SALES_TAX_P);
    taxes = EXCISE_TAX + CAP_TRADE + FED_EXCISE_TAX + (SALES_TAX_P*sales);
    cost = sales / (1 + COMPANY_PROFIT_P);
    profit = COMPANY_PROFIT_P*cost;
    
    //Display the outputs
    cout<<setprecision(3);
    cout<<"Profit gas companies make per gallon: $ "<<profit<<endl;
    cout<<"Taxes to the government per gallon:   $ "<<taxes;
    
    return 0;
}

