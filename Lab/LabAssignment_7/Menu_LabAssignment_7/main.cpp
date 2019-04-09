/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on April 3, 2019, 10:36 AM
 * Purpose:  Menu for lab Assignment 7
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random functions amoung other things
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice,nProbs,letter;
    int x,length,small,large,sum=0;
    float y=0,pay=0;
                
    //Initialize or input i.e. set variable values
    nProbs='5';
    do{
        //Present the menu to the user.
        cout<<"\n\nChoose from the following Menu"<<endl<<endl;
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
                //Initialize or input i.e. set variable values
                cout<<"Enter a positive integer no greater than 15 plus a letter:"<<endl;
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
                //Initialize or input i.e. set variable values
                cout<<"Enter a series of integers. Then, enter -99 to complete the series"<<endl;
                cin>>x;
                small=x;
                large=x;

                //Map inputs -> outputs
                while(x!=-99){
                    if(x<small) small=x;
                    if(x>large) large=x;
                    cin>>x;
                }    
                //Display the outputs
                cout<<"Smallest number in the series is "<<small<<endl;
                cout<<"Largest  number in the series is "<<large;
                break;
            }
            case '3':{
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
                break;
            }
            case '4':{
                //Initialize or input i.e. set variable values
                cout<<"Input a positive integer value"<<endl;
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
                //Initialize or input i.e. set variable values
                cout<<"Input a positive integer:"<<endl;
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