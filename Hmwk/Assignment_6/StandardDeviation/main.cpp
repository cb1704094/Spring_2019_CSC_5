/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on May 10, 2019
 * Purpose:  The standard deviation is calculated from an array X size n with 
 *           the equation std=sqrt(sum((xi-mean)2/(n-1))). Sum the square of 
 *           difference of each value with the mean.  Divide that sum by n-1. 
 *           Take the square root and you have the standard deviation.
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
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    //print(test,SIZE,5);
    cout<<"The average            = "<<fixed<<setprecision(7)<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<fixed<<setprecision(7)<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}

void  init(float test[],int s){
    for(int i=0;i<s;++i){
        cin>>test[i];
    }
}

void  print(float test[],int s,int t){
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

float avgX(float test[],int s){
    float avg=0.0;
    for(int i=0;i<s;++i){
        avg+=test[i];
    }
    avg/=s;
    return avg;    
}

float stdX(float test[],int s){
    float avg,std=0;
    avg=avgX(test,s);
    for(int i=0;i<s;++i){
        std+=pow(test[i]-avg,2);
    }
    std/=s-1;
    std=sqrt(std);
    return std;
}