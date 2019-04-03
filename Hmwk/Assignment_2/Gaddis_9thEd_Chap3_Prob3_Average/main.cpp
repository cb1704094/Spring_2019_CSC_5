/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 2, 2019 at 9:08 AM
 * Purpose:  Average
 *           
 */

//System Libraries
#include <iostream>
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
   //Declare Variables
    unsigned short x1,x2,x3,x4,x5;
    float average;
    
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>x1>>x2>>x3>>x4>>x5;
    
    //Map inputs -> outputs
    average=static_cast<float>(x1+x2+x3+x4+x5)/5;
    
    //Display the outputs
    cout<<"The average ="<<setw(4)<<setprecision(1)<<fixed<<average;

    //Exit stage right or left!
    return 0;
}

