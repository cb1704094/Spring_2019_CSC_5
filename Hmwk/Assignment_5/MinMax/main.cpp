/* 
 * Author: Chad Bonnett
 * Created on: April 28, 2019 
 * Purpose: MinMax
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int x,y, z;
    int minN,maxN;
    
    //Initialize Variables
    cout<<"Input 3 numbers"<<endl;
    cin>>x>>y>>z;
    
    //Process/Map inputs to outputs
    minmax(x,y,z,minN,maxN);
    
    //Output data
    cout<<"Min = "<<minN<<endl;
    cout<<"Max = "<<maxN;
    
    //Exit stage right!
    return 0;
}

void minmax(int x, int y, int z, int& aMin, int& aMax){
    if(x<=y){
        if(y<=z){
            aMin=x;
            aMax=z;
        }
        else{
            aMax=y;
            if(x<=z) aMin=x;
            else aMin=z;
        }
    }
    else{
        if(z>=x){
            aMin=y;
            aMax=z;
        }
        else{
            aMax=y;
            if(y<=z) aMin=y;
            else aMin=z;
        }
    }
}

