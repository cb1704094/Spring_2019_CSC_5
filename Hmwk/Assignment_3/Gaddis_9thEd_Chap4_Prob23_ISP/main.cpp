/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 12, 2019, 6:05 PM
 * Purpose:  Creation of Template to be used for all
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string p;
    int h;
    float bill;
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>p>>h;
    
    //Map inputs -> outputs
    if(p=="A"){
        if(h<=10){
            bill=9.95;
        }
        else{
            bill=9.95+((h-10)*2.0);
        }
    }
    else if(p=="B"){
        if(h<=20){
            bill=14.95;
        }
        else{
            bill=14.95+((h-20)*1.0);
        }   
    }
    else if(p=="C"){
        bill=19.95;
    }
    
    //Display the outputs
    cout<<"Bill = $ "<<bill;

    //Exit stage right or left!
    return 0;
}
