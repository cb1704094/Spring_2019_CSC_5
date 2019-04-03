

/* 
 * File:   main.cpp
 * Author: Chad
 * Purpose: Military Budget as a percentage of the Federal Budget
 * Created on February 27, 2019, 5:50 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float  milBdgt,fedBdgt,mlPrcnt;
    
    milBdgt=7.0e11f;
    fedBdgt=4.1e12f;
    
    mlPrcnt= (milBdgt / fedBdgt) * 100;
    
    cout<< "The Military budget is " << mlPrcnt << "%"<< endl;
    cout<< "of the Federal budget." << endl;
    
    

    
    
    return 0;
}

