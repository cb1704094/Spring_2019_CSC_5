

/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 3, 2019, 9:14 PM
 * Purpose:  Paycheck 
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    float pay,hours,result;
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>pay>>hours;
    
    //Map inputs -> outputs
    if(hours>40){
        result=(40.0*pay)+(2*(hours-40)*pay);
    }
    else{
        result=hours*pay;
    }
    
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Paycheck = $"<<setw(7)<<result;

    //Exit stage right or left!
    return 0;
}