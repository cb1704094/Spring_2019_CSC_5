/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on march 11, 2019, 12:46 PM
 * Purpose:  Rock Paper Scissors
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
    string p1,p2;
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>p1>>p2;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if(p1=="P" || p1=="p"){
        if(p2=="R" || p2=="r"){
            cout<<"Paper covers rock.";
        }
        else if(p2=="S" || p2=="s"){
            cout<<"Scissors cuts paper.";
        }
        else{
            cout<<"Nobody wins.";
        }
    }
    else if(p1=="R" || p1=="r"){
        if(p2=="R" || p2=="r"){
            cout<<"Nobody wins.";
        }
        else if(p2=="S" || p2=="s"){
            cout<<"Rock breaks scissors.";
        }
        else{
            cout<<"Paper covers rock.";
        }        
    }
    else if(p1=="S" || p1=="s"){
        if(p2=="R" || p2=="r"){
            cout<<"Rock breaks scissors.";
        }
        else if(p2=="S" || p2=="s"){
            cout<<"Scissors cuts paper.";
        }
        else{
            cout<<"Nobody wins.";
        }         
    }

    //Exit stage right or left!
    return 0;
}