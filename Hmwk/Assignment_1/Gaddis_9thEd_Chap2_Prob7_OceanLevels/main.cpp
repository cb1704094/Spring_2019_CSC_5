

/* 
 * File:   main.cpp
 * Author: Chad
 * Purpose: Ocean levels
 * Created on February 20, 2019, 9:18 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double currentLevel = 0.00; 
    double risingLevel = 1.5;
    
    cout<< "In 5 years, the ocean's level will be " <<risingLevel*5<< " mm higher"
            <<" than the current level.\n";
    cout<< "In 7 years, the ocean's level will be " <<risingLevel*7<< " mm higher"
            <<" than the current level.\n";
    cout<< "In 10 years, the ocean's level will be  " <<risingLevel*10<< " mm higher"
            <<" than the current level.\n";
    
    
    return 0;
}

