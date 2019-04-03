/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 10, 2019, 11:02 AM
 * Purpose:  Sort Names
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
    string name[3],temp;
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    for(int i=0;i<3;i++){
        cin>>name[i];
    }
    
    //Map inputs -> outputs
    for(int i=0;i<2;i++){
        for(int j=1;j<3;j++){
            if(name[j].compare(name[j-1])<0){
                temp=name[j-1];
                name[j-1]=name[j];
                name[j]=temp;
            }
        }
    }
    
    //Display the outputs
    cout<<name[0]<<endl<<name[1]<<endl<<name[2];

    //Exit stage right or left!
    return 0;
}

