/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 2, 2019, 11:50 PM
 * Purpose:  Insurance
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
   float replacementCost; 
  
   //Initialize or input i.e. set variable values
   cout<<"Insurance Calculator"<<endl;
   cout<<"How much is your house worth?"<<endl;
   cin>>replacementCost;
   
   //Map inputs -> outputs
  
   
    //Display the outputs
   cout<<"You need $"<<replacementCost*.80<<" of insurance.";
  
    //Exit stage right or left!
    return 0;
}