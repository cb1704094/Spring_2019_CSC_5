/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 26, 2019, 12:36 PM
 * Purpose:  Rectangle
 *
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
    int length;
    char letter;
    
    //Initialize or input i.e. set variable values
    cin>>length>>letter;
    
    //Map inputs -> outputs
    
    //Display the outputs
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            cout<<letter;
        }
        if(i<(length-1)) cout<<endl;
    }
    
    //Exit stage right or left!
    return 0;
}

