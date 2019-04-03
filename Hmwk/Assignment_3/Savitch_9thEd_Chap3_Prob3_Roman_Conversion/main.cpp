/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 11, 2019, 9:21 PM
 * Purpose:  Roman Conversion
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int aYear,n1,n10,n100,n1000;
    string rYear="";
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>aYear;
    
    //Map inputs -> outputs
    n1=aYear%10;
    n10=(aYear/10)%10;
    n100=(aYear/100)%10;
    n1000=(aYear/1000)%10;
    
    //Display the outputs
    if(aYear<1000 || aYear>3000){
        cout<<aYear<<" is Out of Range!";
    }
    else{
        switch(n1000){
            case 1:
                rYear+="M";
                break;
            case 2:
                rYear+="MM";
                break;
            case 3:
                rYear+="MMM";
                break;
        }
        switch(n100){
            case 1:
                rYear+="C";
                break;
            case 2:
                rYear+="CC";
                break;
            case 3:
                rYear+="CCC";
                break;
            case 4:
                rYear+="CD";
                break;
            case 5:
                rYear+="D";
                break;
            case 6:
                rYear+="DC";
                break;
            case 7:
                rYear+="DCC";
                break;
            case 8:
                rYear+="DCCC";
                break;
            case 9:
                rYear+="CM";
                break;
        }
        switch(n10){
            case 1:
                rYear+="X";
                break;
            case 2:
                rYear+="XX";
                break;
            case 3:
                rYear+="XXX";
                break;
            case 4:
                rYear+="XL";
                break;
            case 5:
                rYear+="L";
                break;
            case 6:
                rYear+="LX";
                break;
            case 7:
                rYear+="LXX";
                break;
            case 8:
                rYear+="LXXX";
                break;
            case 9:
                rYear+="XC";
                break;
        }
        switch(n1){
            case 1:
                rYear+="I";
                break;
            case 2:
                rYear+="II";
                break;
            case 3:
                rYear+="III";
                break;
            case 4:
                rYear+="IV";
                break;
            case 5:
                rYear+="V";
                break;
            case 6:
                rYear+="VI";
                break;
            case 7:
                rYear+="VII";
                break;
            case 8:
                rYear+="VIII";
                break;
            case 9:
                rYear+="IX";
                break;
        }
        cout<<aYear<<" is equal to "<<rYear;
    }

    //Exit stage right or left!
    return 0;
}

