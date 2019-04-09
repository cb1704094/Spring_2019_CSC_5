/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on April 6, 2019, 8:25 PM
 * Purpose:  Write a program that asks the user for a positive integer no 
 * greater than 15. The program should then display a rectangle on the screen 
 * using the character ‘X’. The number entered by the user will be the length 
 * of each side of the rectangle. For example, if the user enters 5 X, the 
 * program should display the following:
 * XXXXX
 * XXXXX
 * XXXXX
 * XXXXX
 * XXXXX
 * If input is 8 Y
 * YYYYYYYY
 * YYYYYYYY
 * YYYYYYYY
 * YYYYYYYY
 * YYYYYYYY
 * YYYYYYYY
 * YYYYYYYY
 * YYYYYYYY
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
    int length;
    char letter;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter a positive integer no greater than 15"<<endl;
    cin>>length>>letter;
    
    //Map inputs -> outputs
    
    //Display the outputs
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            cout<<letter;
        }
        if(i<(length-1)) cout<<endl;
    }
    
    //Exit stage right or left!
    return 0;
}