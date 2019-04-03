

 // File:   main.cpp
 // Author: Chad
 // Purpose: Sales Tax
 // Created on February 22, 2019, 8:05 AM
 

#include <iostream>

using namespace std;


 

int main(int argc, char** argv) {
   int 	PPrice	 = 95;
	double	State	 = PPrice * .04,
			County	 = PPrice * .02,
			TotalTax = State + County;

	
	cout << "Total sales Tax = $ " << TotalTax << endl;
    
        return 0;
}

