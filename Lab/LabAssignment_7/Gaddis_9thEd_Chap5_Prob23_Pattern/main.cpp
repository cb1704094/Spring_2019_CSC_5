/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on April 7, 2019, 8:25 PM
 * Purpose: Write a program to Display the following pattern given an input of 
 * 10.  Outputs an increase from 1 to 10 the decreases from 10 to 1
 * +
 * ++
 * +++
 * ++++
 * +++++
 * ++++++
 * +++++++
 * ++++++++
 * +++++++++
 * ++++++++++
 * ++++++++++
 * +++++++++
 * ++++++++
 * +++++++
 * ++++++
 * +++++
 * ++++
 * +++
 * ++
 * +
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
    int x;
    
    //Initialize or input i.e. set variable values
    cout<<"Input a positive integer:1"<<endl;
    cin>>x;
    
    //Map inputs -> outputs
    
    //Display the outputs
    for(int i=1;i<=x;i++){
        for(int j=0;j<i;j++){
            cout<<"+";
        }    
        cout<<endl<<endl;
    }
    for(int i=x;i>=2;i--){
        for(int j=0;j<i;j++){
            cout<<"+";
        }    
        cout<<endl<<endl;
    }
    cout<<"+";
    
    //Exit stage right or left!
    return 0;
}
