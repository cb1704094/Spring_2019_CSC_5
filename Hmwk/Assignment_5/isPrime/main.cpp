/* 
 * Author: Chad Bonnett
 * Created on: April 28, 2019 
 * Purpose: isPrime 
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int x;
    
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>x;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<x<<" is ";
    if(isPrime(x)==true) cout<<"prime.";
    else cout<<"not prime.";
    
    //Exit stage right!
    return 0;
}

bool isPrime(int x){
    int sqrtX;
    sqrtX=floor(sqrt(x));
    for(int i=2;i<=sqrtX;i++){
        if(x%i==0) return false;
    }
    return true;
}

