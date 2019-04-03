/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 2, 2019, 12:15 PM
 * Purpose:  Temp
 *           
 */

//System Libraries
#include <iostream>//Input/Output Library
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
   float Celsius,Fahrenheit; 
   
   //Initialize or input i.e. set variable values
   cout<<"Temperature Converter"<<endl;
   cout<<"Input Degrees Fahrenheit"<<endl;
   cin>>Fahrenheit;
           
    //Map inputs -> outputs
   Celsius=(Fahrenheit-32)*5/9;
   
    //Display the outputs
   cout<<fixed<<setprecision(1);
   cout<<Fahrenheit<<" Degrees Fahrenheit = ";
   cout<<Celsius<<" Degrees Centigrade";
   
   
    //Exit stage right or left!
    return 0;
}