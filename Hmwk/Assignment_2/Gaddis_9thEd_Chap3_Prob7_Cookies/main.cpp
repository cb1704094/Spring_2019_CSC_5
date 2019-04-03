/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 2, 2019, 11:36 AM
 * Purpose: Cookies  
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
    float cookies,totalCalories;
   
    //Initialize or input i.e. set variable values
   cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookies;
    
    //Map inputs -> outputs
    totalCalories=cookies*75;
    
    //Display the outputs
  cout<<"You consumed "<<totalCalories<<" calories.";
    
    //Exit stage right or left!
    return 0;
}
