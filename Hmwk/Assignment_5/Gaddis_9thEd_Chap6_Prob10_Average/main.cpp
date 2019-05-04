/* 
 * Author: Chad Bonnett
 * Created on: April 27, 2019 
 * Purpose: Average 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int a,b,c,d,e;
    
    //Initialize Variables
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    getScre(a,b,c,d,e);
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"The average test score = "<<fixed<<setprecision(1)<<calcAvg(a,b,c,d,e);
    
    //Exit stage right!
    return 0;
}

void getScre(int &a,int &b,int &c,int &d,int &e){
    cout<<"Input the 5 test scores."<<endl;
    cin>>a>>b>>c>>d>>e; 
    if(a<1 || a>100) cout<<a<<"is an invalid test score."<<endl;
    if(b<1 || b>100) cout<<b<<"is an invalid test score."<<endl;
    if(c<1 || c>100) cout<<c<<"is an invalid test score."<<endl;
    if(d<1 || d>100) cout<<d<<"is an invalid test score."<<endl;
    if(e<1 || e>100) cout<<e<<"is an invalid test score."<<endl;
}

float calcAvg(int a,int b,int c,int d,int e){
    return (a+b+c+d+e-fndLwst(a,b,c,d,e))/4;
}

int fndLwst(int a,int b,int c,int d,int e){
    int minVal;
    if(a<=b) minVal=a;
    else minVal=b;
    if(minVal>c) minVal=c;
    if(minVal>d) minVal=d;
    if(minVal>e) minVal=e;
    return minVal;
}
