/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 10, 2019, 7:16 AM
 * Purpose:  Race
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
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
    string name[3];
    int time[3]; 
    int tempTime;
    string tempName;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    for(int i=0;i<3;i++){
        cin>>name[i]>>time[i];        
    }
    
    //Map inputs -> outputs
    for(int j=0;j<2;j++){
        for(int i=1;i<3;i++){
            if(time[i]<time[i-1]){
                tempName = name[i-1]; 
                tempTime = time[i-1];
                name[i-1] = name[i];
                time[i-1] = time[i];
                name[i] = tempName;
                time[i] = tempTime;
            }        
        }    
    }
    
    //Display the outputs
    cout<<"Their names, then their times";
    for(int i=0;i<3;i++){
        cout<<endl<<name[i]<<"\t"<<setw(3)<<time[i];    
    }


    //Exit stage right or left!
    return 0;
}