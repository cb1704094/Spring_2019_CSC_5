/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on march 11, 2019, 6:48 PM
 * Purpose:  Compatible signs
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
    string s1,s2;
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>s1>>s2;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if(s1=="Aries" || s1=="Leo" || s1=="Sagittarius"){
        if(s2=="Aries" || s2=="Leo" || s2=="Sagittarius"){
            cout<<s1<<" and "<<s2<<" are compatible Fire signs.";
        }
        else {
            cout<<s1<<" and "<<s2<<" are not compatible signs.";            
        }
    }
    else if(s1=="Taurus" || s1=="Virgo" || s1=="Capricorn"){
        if(s2=="Taurus" || s2=="Virgo" || s2=="Capricorn"){
            cout<<s1<<" and "<<s2<<" are compatible Earth signs.";
        }
        else {
            cout<<s1<<" and "<<s2<<" are not compatible signs.";  
        }     
    }
    else if(s1=="Gemini" || s1=="Libra" || s1=="Aquarius"){
        if(s2=="Gemini" || s2=="Libra" || s2=="Aquarius"){
            cout<<s1<<" and "<<s2<<" are compatible Air signs.";
        }
        else {
            cout<<s1<<" and "<<s2<<" are not compatible signs.";  
        }        
    }
    else if(s1=="Cancer" || s1=="Scorpio" || s1=="Pisces"){
        if(s2=="Cancer" || s2=="Scorpio" || s2=="Pisces"){
            cout<<s1<<" and "<<s2<<" are compatible Water signs.";
        }      
        else {
            cout<<s1<<" and "<<s2<<" are not compatible signs.";
        }
    }
  
    //Exit stage right or left!
    return 0;
}

