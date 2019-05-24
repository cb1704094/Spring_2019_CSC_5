/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 16th, 2019, 10:40 AM
 * Purpose:  Pointers and Dynamic Memory
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random function
#include <ctime>     //Time Library
#include <vector>    //Vector Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(vector<int> &);
void prntAry(vector<int> &,int);
void markSrt(vector<int> &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=100;
    vector<int> array(size);
    
    //Initialize or input i.e. set variable values
    fillAry(array);
    
    //Print the Array
    prntAry(array,10);
    
    //Map inputs -> outputs
    markSrt(array);
    
    //Display the outputs
    prntAry(array,10);
 
    //Exit stage right or left!
    return 0;
}

void markSrt(vector<int> &a){
    for(int pos=0;pos<a.size()-1;pos++){
        for(int i=pos+1;i<a.size();i++){
            if(a[pos]>a[i]){
                int temp=a[i];
                a[i]=a[pos];
                a[pos]=temp;
            }
        }
    }
}

void prntAry(vector<int> &array,int perLine){
    cout<<endl;
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";//2 digit random number
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(vector<int> &array){
    //Fill with random values
    for(int i=0;i<array.size();i++){
        array[i]=rand()%90+10;//2 digit random number
    }
}

