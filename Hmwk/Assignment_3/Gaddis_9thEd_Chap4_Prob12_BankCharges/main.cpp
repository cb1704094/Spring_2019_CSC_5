/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 11, 2019, 10:45PM
 * Purpose:  Bank Charges
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float balance,cFee=0.0,mFee=10.0,lBalance=0.0,nBalance=0.0;
    int nChecks;
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balance>>nChecks;
    
    //Map inputs -> outputs
    if(nChecks<20){
        cFee=0.10*nChecks;
    }
    else if(nChecks<40){
        cFee=0.08*nChecks;    
    }
    else if(nChecks<60){
        cFee=0.06*nChecks;    
    }
    else {
        cFee=0.04*nChecks;    
    }
    
    if(balance<400.0){
        lBalance=15.0;
    }
    
    nBalance=balance-cFee-mFee-lBalance;
    
    //Display the outputs
    cout<<fixed<<setprecision(2);
    cout<<"Balance     $ "<<setw(8)<<balance<<endl;
    cout<<"Check Fee   $ "<<setw(8)<<cFee<<endl;
    cout<<"Monthly Fee $ "<<setw(8)<<mFee<<endl;
    cout<<"Low Balance $ "<<setw(8)<<lBalance<<endl;
    cout<<"New Balance $ "<<setw(8)<<nBalance;
    
    //Exit stage right or left!
    return 0;
}