/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March, 2019, 2:28 PM
 * Purpose:  Trig
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
#define PI 3.14159265
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float degree,sine,cosine,tangent;
    
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>degree;
    
    //Map inputs -> outputs
    sine=sin(degree*PI/180);
    cosine=cos(degree*PI/180);
    tangent=tan(degree*PI/180);
    
    //Display the outputs
    cout<<fixed;
    cout<<setprecision(0)<<"sin("<<degree<<") = "<<setprecision(4)<<sine<<endl;
    cout<<setprecision(0)<<"cos("<<degree<<") = "<<setprecision(4)<<cosine<<endl;
    cout<<setprecision(0)<<"tan("<<degree<<") = "<<setprecision(4)<<fixed<<tangent;

    //Exit stage right or left!
    return 0;
}