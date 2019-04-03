/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 3, 2019, 8:15 PM
 * Purpose:  Room 
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
    int cap,people;
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>cap>>people;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if(people>cap){
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<people-cap<<" to avoid fire violation.";
    }
    else{
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<cap-people<<" will be allowed without violation.";
    }

    //Exit stage right or left!
    return 0;
}
