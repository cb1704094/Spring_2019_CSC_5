/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 30, 2019, 8:25 PM
 * Purpose:  Write a program that calculates how much a person would earn over 
 * a period of time if his or her salary is one penny the first day and two 
 * pennies the second day, and continues to double each day. The program should 
 * ask the user for the number of days. The output earnings should be displayed 
 * in a dollar amount, not the number of pennies. Input Validation: Do not 
 * accept a number less than 1 for the number of days worked.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
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
    int x;
    float y=0,pay=0;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter the number of days worked:"<<endl;
    cin>>x;
    
    //Map inputs -> outputs
    if(x>0){
        for(int i=0;i<x;i++){
            y+=pow(2,i);    
        }
        pay=y*0.01;
        cout<<setprecision(2);
        cout<<"Pay = $"<<pay;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
