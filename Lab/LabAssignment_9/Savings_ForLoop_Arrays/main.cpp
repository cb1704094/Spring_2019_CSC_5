/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 2nd, 2019, 12:36 PM
 * Purpose:  Savings Function using Arrays
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int NMCMPDS=51;  //Number of compounding periods in years
    float presVal,         //Present Value in $'s
          intRate,         //Interest Rate in %/yrs
          futVal1[NMCMPDS],//Future Value using double pow function
          futVal2[NMCMPDS];//Future Value using loops corrected to pennies
    
    //Initialize or input i.e. set variable values
    presVal=1000.0f; //$100
    intRate=0.06f;  //6%
    futVal1[0]=futVal2[0]=presVal;//Future Values initialized to present Value
    
    //Display the headings and the initial values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Future Value 1   Future Value 2"<<endl;
    cout<<setw(4)<<0<<setw(16)<<futVal1[0]<<setw(18)<<futVal2[0]<<endl;
    
    //Map inputs -> outputs
    for(int year=1;year<NMCMPDS;year++){
        futVal1[year]=presVal*pow(1+intRate,year);
        futVal2[year]=futVal2[year-1]*(1+intRate);
        int util=(futVal2[year]+0.005)*100;//Calculate the number of pennies
        futVal2[year]=util/100.0f; //Convert back to dollars
        cout<<setw(4)<<year<<setw(16)<<futVal1[year]
                <<setw(18)<<futVal2[year]<<endl;
    }

    //Exit stage right or left!
    return 0;
}
