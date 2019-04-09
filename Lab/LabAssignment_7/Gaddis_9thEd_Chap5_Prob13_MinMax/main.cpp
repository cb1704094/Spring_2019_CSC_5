/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on April 6, 2019, 8:25 PM
 * Purpose:  Write a program with a loop that lets the user enter a series 
 * of integers. The user should enter -99 to signal the end of the series. 
 * After all the numbers have been entered, the program should display the 
 * largest and smallest numbers entered.
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
    int x, small, large;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter a series of integers. Then, enter -99 to complete the series"<<endl;
    cin>>x;
    small=x;
    large=x;
        
    //Map inputs -> outputs
    while(x!=-99){
        if(x<small) small=x;
        if(x>large) large=x;
        cin>>x;
    }    
    //Display the outputs
    cout<<"Smallest number in the series is "<<small<<endl;
    cout<<"Largest  number in the series is "<<large;

    //Exit stage right or left!
    return 0;
}

