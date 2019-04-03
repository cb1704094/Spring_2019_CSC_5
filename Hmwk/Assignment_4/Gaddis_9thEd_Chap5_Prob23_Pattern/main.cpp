/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 28, 2019, 12:36 PM
 * Purpose:  Pattern
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
    int x;
    
    //Initialize or input i.e. set variable values
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
