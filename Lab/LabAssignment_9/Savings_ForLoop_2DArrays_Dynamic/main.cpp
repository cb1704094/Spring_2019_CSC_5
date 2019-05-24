/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 9th, 2019, 12:36 PM
 * Purpose:  Savings Function using 2D Arrays
 *           and the MVC design pattern
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float **alocate(int,int);
void savings(float **,float,float,int,int);
void display(float **,int,int);
void destroy(float **,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int cols=2,            //Number of Columns for future value array
        nmcmpds=51;        //Number of compounding periods in years
    float presVal,         //Present Value in $'s
          intRate,         //Interest Rate in %/yrs
          **futVal;        //Future Value using double pow function
          //Future Value using loops corrected to pennies
    
    //Initialize or input i.e. set variable values
    futVal=alocate(nmcmpds,cols);
    presVal=1000.0f; //$100
    intRate=0.06f;  //6%
    futVal[0][0]=futVal[0][1]=presVal;//Future Values initialized to present Value
    
    //Display the headings and the initial values
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Future Value 1    Future Value 2"<<endl;
    cout<<setw(4)<<0<<setw(16)<<futVal[0][0]<<setw(18)<<futVal[0][1]<<endl;
    
    //Fill the Savings arrays
    savings(futVal,presVal,intRate,nmcmpds,cols);
    
    //Output the resulting table
    display(futVal,nmcmpds,cols);
    
    //Deallocate Memory
    destroy(futVal,nmcmpds);

    //Exit stage right or left!
    return 0;
}

float **alocate(int row,int col){
    float **array=new float*[row];
    for(int i=0;i<row;i++){
        array[i]=new float[col];
    }
    return array;
}

void destroy(float **a,int rows){
    for(int i=0;i<rows;i++){
        delete []a[i];
    }
    delete []a;
}

void display(float **futVal,int nmcmpds,int cols){
    for(int year=1;year<nmcmpds;year++){
        cout<<setw(4)<<year<<setw(16)<<futVal[year][0]
                <<setw(18)<<futVal[year][1]<<endl;
    }
}

void savings(float ** futVal,float presVal,float intRate,int nmcmpds,int cols){
    for(int year=1;year<nmcmpds;year++){
        futVal[year][0]=presVal*pow(1+intRate,year);
        futVal[year][1]=futVal[year-1][1]*(1+intRate);
        int util=(futVal[year][1]+0.005)*100;//Calculate the number of pennies
        futVal[year][1]=util/100.0f; //Convert back to dollars
    }
}
