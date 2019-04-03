/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 2, 2019, 7:54 PM
 * Purpose:  Pay 
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    float pi,pas,rp,nas,nms;
    
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary."<<endl;
    cin>>pas;
    
    //Map inputs -> outputs
    pi=(pas/12)*0.076;
    rp=pi*6;
    nms=(pas/12)+pi;
    nas=nms*12;
    
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Retroactive pay    = $"<<setw(7)<<rp<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<nas<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<nms;

    //Exit stage right or left!
    return 0;
}