/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 27, 2019, 11s:36 PM
 * Purpose:  Sum
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
    int x, sum=0;
    
    //Initialize or input i.e. set variable values
    cin>>x;
    
    //Map inputs -> outputs
    for(int i=1;i<=x;i++){
        sum+=i;
    }
    
    //Display the outputs
    cout<<"Sum = "<<sum;
    
    //Exit stage right or left!
    return 0;
}