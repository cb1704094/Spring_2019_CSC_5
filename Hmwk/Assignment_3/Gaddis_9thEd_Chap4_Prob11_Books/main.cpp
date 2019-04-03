/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created onMarch 12, 2019, 2:26 PM
 * Purpose:  Books
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
    int nBooks,points;
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>nBooks;
    
    //Map inputs -> outputs
    switch(nBooks){
        case 0:
            points=0;
            break;
        case 1:
            points=5;
            break;
        case 2:
            points=15;
            break;
        case 3:
            points=30;
            break;
        default:
            points=60;
    }
    
    //Display the outputs
    cout<<"Books purchased = "<<setw(2)<<nBooks<<endl;
    cout<<"Points earned   = "<<setw(2)<<points;

    //Exit stage right or left!
    return 0;
}