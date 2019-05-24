/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 7th, 2019, 12:36 PM
 * Purpose:  Savings Function using Vectors
 *           and the MVC design pattern
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
#include <vector>    //STL Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void savings(vector<float> &,vector<float> &,float,float);
void display(vector<float> &,vector<float> &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int NMCMPDS=51;  //Number of compounding periods in years
    float presVal,         //Present Value in $'s
          intRate;         //Interest Rate in %/yrs
    vector<float> futVal1(NMCMPDS);//Future Value using double pow function
    vector<float> futVal2(NMCMPDS);//Future Value using loops corrected to pennies
    
    //Initialize or input i.e. set variable values
    presVal=1000.0f; //$100
    intRate=0.06f;  //6%
    futVal1[0]=futVal2[0]=presVal;//Future Values initialized to present Value
    
    //Display the headings and the initial values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Future Value 1   Future Value 2"<<endl;
    cout<<setw(4)<<0<<setw(16)<<futVal1[0]<<setw(18)<<futVal2[0]<<endl;
    
    //Fill the Savings arrays
    savings(futVal1,futVal2,presVal,intRate);
    
    //Output the resulting table
    display(futVal1,futVal2);

    //Exit stage right or left!
    return 0;
}

void display(vector<float> &futVal1,vector<float> &futVal2){
    for(int year=1;year<futVal1.size();year++){
        cout<<setw(4)<<year<<setw(16)<<futVal1[year]
                <<setw(18)<<futVal2[year]<<endl;
    }
}

void savings(vector<float> &futVal1,vector<float> &futVal2,
             float presVal,float intRate){
    for(int year=1;year<futVal1.size();year++){
        futVal1[year]=presVal*pow(1+intRate,year);
        futVal2[year]=futVal2[year-1]*(1+intRate);
        int util=(futVal2[year]+0.005)*100;//Calculate the number of pennies
        futVal2[year]=util/100.0f; //Convert back to dollars
    }
}

