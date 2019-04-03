/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 27, 2019, 12:36 PM
 * Purpose:  PayInPennies
 *           
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