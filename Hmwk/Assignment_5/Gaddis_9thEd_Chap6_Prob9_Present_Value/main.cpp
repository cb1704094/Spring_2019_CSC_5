/* 
 * Author: Chad Bonnett
 * Created on: April 27, 2019 
 * Purpose: Present Value 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float psntVal(float, float, int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float f,r;
    int n;
    
    //Initialize Variables
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>f;
    cout<<"Input the Number of Years"<<endl;
    cin>>n;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>r;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"The Present Value = $"<<fixed<<setprecision(2)<<psntVal(f,r,n);
    
    //Exit stage right!
    return 0;
}

float psntVal(float f, float r, int n){
    return f/pow(1+(r/100),n);
    
}
