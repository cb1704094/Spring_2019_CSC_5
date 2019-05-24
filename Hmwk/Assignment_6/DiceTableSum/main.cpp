/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on May 10, 2019
 * Purpose:  Create a 6x6 2D-Table that holds the sum of the rows and columns 
 *           using values 1 to 6.  Just fill a table using for-loops, inner 
 *           loop columns, outer loop rows.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);

    //Exit stage right or left!
    return 0;
}

void fillTbl(int tableSum[][COLS],int r){
    for(int i=0;i<r;++i){
        for(int j=0;j<COLS;++j){
            tableSum[i][j]=(i+1)+(j+1);      
        }
    }
}

void prntTbl(const int tableSum[][COLS],int r){
    cout<<"Think of this as the Sum of Dice Table"<<endl;
    cout<<"           C o l u m n s"<<endl;
    cout<<"     |";
    for(int i=1;i<=COLS;++i){
        cout<<setw(4)<<i;
    }
    cout<<endl;
    cout<<"----------------------------------"<<endl;
    for(int i=0;i<r;++i){
        if(i==1) cout<<"R  2 |";
        else if(i==2) cout<<"O  3 |";
        else if(i==3) cout<<"W  4 |";
        else if(i==4) cout<<"S  5 |";
        else cout<<"   "<<i+1<<" |";
        for(int j=0;j<COLS;++j){
            cout<<setw(4)<<tableSum[i][j];    
        }
        cout<<endl;
    }
}
