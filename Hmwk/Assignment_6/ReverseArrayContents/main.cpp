/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on May 10, 2019
 * Purpose:  Input an array, Then output the contents in reverse.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void  init(int [],int);//Initialize the array
void  print(int [],int,int);//Print the array
void  revrse(int [],int);;//Reverse the array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    //print(test,SIZE,10);
    
    //Reverse the Values
    revrse(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,10);

    //Exit stage right or left!
    return 0;
}

void  init(int test[],int s){
    int t=s/10;
    int x;
    for(int i=0;i<t;++i){
        for(int j=0;j<10;++j){
            cin>>x;
            test[(i*10)+j]=x;
        }
    }
}

void  print(int test[],int s,int t){
    int j=0;
    for(int i=0;i<s;++i){
        if(j<t){ 
            cout<<test[i]<<" ";
            j++;
        }
        else{
            cout<<endl<<test[i]<<" ";
            j=1;
        }
    }
    cout<<endl;
}

void  revrse(int test[],int s){    
    int temp;
    for(int i=0;i<s/2;++i){
        temp=test[i];
        test[i]=test[s-i-1];
        test[s-i-1]=temp;
    }
}