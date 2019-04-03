/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 3, 2019, 6:30 AM
 * Purpose:  Sums 
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
    int x[10];
    int sumP=0,sumN=0,sum=0;
    
    //Initialize or input i.e. set variable values
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    for(int i=0;i<10;i++){
        cin>>x[i];
    }
    
    //Map inputs -> outputs
    for(int i=0;i<10;i++){
        sum+=x[i];
        if(x[i]>0){
            sumP+=x[i];
        }
        else {
            sumN+=x[i];
        }
    }
    
    //Display the outputs
    cout<<"Negative sum = "<<setw(3)<<sumN<<endl;
    cout<<"Positive sum = "<<setw(3)<<sumP<<endl;
    cout<<"Total sum    = "<<setw(3)<<sum;

    //Exit stage right or left!
    return 0;
}