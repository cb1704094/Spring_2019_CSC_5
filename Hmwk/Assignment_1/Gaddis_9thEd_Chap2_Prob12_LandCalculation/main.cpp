

/* 
 * File:   main.cpp
 * Author: Chad
 *Purpose: Land calculation
 * Created on February 22, 2019, 9:59 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double acre = 43560; 
    double land = 391876;
    
    double conversion = land/acre;
    
    cout<<land<< " sq. ft = " << conversion<<" acres"<< endl;
    
    return 0;
}

