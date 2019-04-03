/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 30th, 2019, 10:36 AM
 * Purpose:  Menu Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random functions amoung other things
#include <iomanip>   //Format Library
#include <cmath> //Math Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int CNVPNDL=100;//Convert Pennies to Dollars

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice,nProbs;
    
    //Initialize or input i.e. set variable values
    nProbs='5';
    do{
        //Present the menu to the user.
        cout<<"Choose from the following Menu"<<endl<<endl;
        cout<<"1 Rectangle"<<endl;
        cout<<"2 MinMax"<<endl;
        cout<<"3 PayInPennies"<<endl;
        cout<<"4 Sum"<<endl;
        cout<<"5 Pattern"<<endl;
        cout<<endl;
        cin>>choice;
        cout<<endl;
        //Select the problem to execute
        switch(choice){
            case '1':{
                //Declare Variables
    int length;
    char letter;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter a positive interger no greater than 15"<<endl;
    cin>>length>>letter;
    
    //Map inputs -> outputs
    
    //Display the outputs
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            cout<<letter;
        }
        if(i<(length-1)) cout<<endl;
    }
    
                break;
            }
            case '2':{
                //Declare Variables
    int x, smallest, largest;
    
    //Initialize or input i.e. set variable values
    cout<<"Input a series of integers with -99 being the end of the series"<<endl;
    cin>>x;
    smallest=x;
    largest=x;
        
    //Map inputs -> outputs
    while(x!=-99){
        if(x<smallest) smallest=x;
        if(x>largest) largest=x;
        cin>>x;
    }    
    //Display the outputs
    cout<<"Smallest number in the series is "<<smallest<<endl;
    cout<<"Largest  number in the series is "<<largest;

                break;
            }
            case '3':{
                 //Declare Variables
    int x;
    float y=0,pay=0;
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates how much a person would earn over a period of time"<<endl;
    cout<<"if his or her salary is one penny the first day and two pennies the second day,"<<endl; 
    cout<<"and continues to double each day."<<endl<<endl;
    cout<<"Enter a number of days in which you were paid for working"<<endl;
    cin>>x;
    
    //Map inputs -> outputs
    if(x>0){
        for(int i=0;i<x;i++){
            y+=pow(2,i);    
        }
        pay=y*0.01;
        cout<<setprecision(2);
        cout<<"Pay = $"<<pay;
    }
           
            }
            case '4':{
                //Declare Variables
    int x, sum=0;
    
    //Initialize or input i.e. set variable values
    cout<<"Enter a positive integer value"<<endl;
    cin>>x;
    
    //Map inputs -> outputs
    for(int i=1;i<=x;i++){
        sum+=i;
    }
    
    //Display the outputs
    cout<<"Sum = "<<sum;
                break;
            }
            case '5':{
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
                break;
            }            
            default:
                cout<<"Exiting Menu"<<endl<<endl;
        }
    }while(choice<=nProbs);

    //Exit stage right or left!
    return 0;
}
