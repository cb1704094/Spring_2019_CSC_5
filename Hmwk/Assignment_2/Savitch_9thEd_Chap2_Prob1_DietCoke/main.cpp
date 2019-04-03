/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 3, 2019, 7:46 AM
 * Purpose:  Diet Coke
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
#define LBTOG 45359.2f
#define AFP 0.001f
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float weight,result,gos;
    
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>weight;
    
    //Map inputs -> outputs
    gos=((weight/100)*LBTOG)/7.0;
    result=floor(gos/(350*AFP));
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<result<<" cans";

    //Exit stage right or left!
    return 0;
}