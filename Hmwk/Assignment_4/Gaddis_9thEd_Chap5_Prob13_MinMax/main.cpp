/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on march 26, 2019, 12:36 PM
 * Purpose:  MinMax
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
    int x, smallest, largest;
    
    //Initialize or input i.e. set variable values
    cin>>x;
    smallest=x;
    largest=x;
        
    //Map inputs -> outputs
    while(x!=-99){
        if(x<smallest) smallest=x;
        if(x>largest) largest=x;
        cin>>x;
    }    
    //Display the outputs
    cout<<"Smallest number in the series is "<<smallest<<endl;
    cout<<"Largest  number in the series is "<<largest;

    //Exit stage right or left!
    return 0;
}

