/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on April 7, 2019, 8:25 PM
 * Purpose:  Write a program that asks the user for a positive integer value. 
 * The program should use a loop to get the sum of all the integers from 1 up 
 * to the number entered. For example, if the user enters 50, the loop will 
 * find the sum of 1, 2, 3, 4, ... 50.
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
    cout<<"Input a positive integer value"<<endl;
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

