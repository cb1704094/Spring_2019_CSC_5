/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on May 3, 2019
 * Purpose:  Menu Template
 *          
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
int fctrl(int);
bool isPrime(int);
void minmax(int,int,int,int&,int&);
int collatz(int);
int collatz5(int);
float psntVal(float, float, int);
void getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);
void inputScr(int&,int&);
void convertTime(int,int&,char&);
void outputScr(int,int,int,char);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            case 7:    problem7();break;
            case 8:    problem8();break;
            default:   def(inN);
	}
    }while(inN>=1 && inN<=8);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Choose from the following Menu"<<endl;
    cout<<"1 Factorial"<<endl;
    cout<<"2 IsPrime"<<endl;
    cout<<"3 MinMax"<<endl;
    cout<<"4 CollatzSequence"<<endl;
    cout<<"5 CollatzSequence With Output of Sequence"<<endl;
    cout<<"6 Gaddis_9thEd_Chap6_Prob9_Present_Value"<<endl;
    cout<<"7 Gaddis_9thEd_Chap6_Prob10_Average"<<endl;
    cout<<"8 Savitch_9thEd_Chap5_Prob1_TimeConverter"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    int x;
    
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>x;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<x<<"! = "<<fctrl(x);
}

void problem2(){
    int x;
    
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>x;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<x<<" is ";
    if(isPrime(x)==true) cout<<"prime.";
    else cout<<"not prime.";
}

void problem3(){
    int x,y, z;
    int minN,maxN;
    
    //Initialize Variables
    cout<<"Input 3 numbers"<<endl;
    cin>>x>>y>>z;
    
    //Process/Map inputs to outputs
    minmax(x,y,z,minN,maxN);
    
    //Output data
    cout<<"Min = "<<minN<<endl;
    cout<<"Max = "<<maxN;    
}

void problem4(){
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";
}

void problem5(){
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz5(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
}

void problem6(){
    float f,r;
    int n;
    
    //Initialize Variables
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>f;
    cout<<"Input the Number of Years"<<endl;
    cin>>n;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>r;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"The Present Value = $"<<fixed<<setprecision(2)<<psntVal(f,r,n);        
}

void problem7(){
    int a,b,c,d,e;
    
    //Initialize Variables
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    getScre(a,b,c,d,e);
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"The average test score = "<<fixed<<setprecision(1)<<calcAvg(a,b,c,d,e);
}

void problem8(){
    char ans, maFlag;
    int mh, sh, m;
    
    //Initialize Variables
    cout<<"Military Time Converter to Standard Time"<<endl;
    cout<<"Input Military Time hh:mm"<<endl;
        do{
        inputScr(mh,m);
        if(mh>=24 || m>59){
            if(m>0 || mh>24) cout<<mh<<":"<<m<<" is not a valid time"<<endl;
        }
        else{
        convertTime(mh,sh,maFlag);    
        outputScr(mh,sh,m,maFlag);
        }
        cout<<"Would you like to convert another time (y/n)"<<endl;
        cin>>ans;
            
    } while(ans=='Y' || ans=='y');
}


int fctrl(int n){
    if(n==1) return 1;
    else return n*fctrl(n-1);
}

bool isPrime(int x){
    int sqrtX;
    sqrtX=floor(sqrt(x));
    for(int i=2;i<=sqrtX;i++){
        if(x%i==0) return false;
    }
    return true;
}

void minmax(int x, int y, int z, int& aMin, int& aMax){
    if(x<=y){
        if(y<=z){
            aMin=x;
            aMax=z;
        }
        else{
            aMax=y;
            if(x<=z) aMin=x;
            else aMin=z;
        }
    }
    else{
        if(z>=x){
            aMin=y;
            aMax=z;
        }
        else{
            aMax=y;
            if(y<=z) aMin=y;
            else aMin=z;
        }
    }
}

int collatz(int n){
    int counter=1;
    while(n!=1){
        if(n%2==0) n=n/2;
        else n=(n*3)+1;
        counter++;
    }   
    return counter;
}

int collatz5(int n){
    int counter=1;
    while(n!=1){
        cout<<n<<", ";
        if(n%2==0) n=n/2;
        else n=(n*3)+1;
        counter++;
    }
    cout<<n<<endl;
    return counter;
}

float psntVal(float f, float r, int n){
    return f/pow(1+(r/100),n); 
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

void inputScr(int& h, int&m){
    scanf("%i:%i",&h,&m);
}

void convertTime(int mh,int& sh, char& maFlag){
    if(mh>=12){
        sh=mh-12;
        maFlag='P';
    }
    else{
        sh=mh;
        maFlag='A';
    }
    if(sh==0) sh=12;
}

void outputScr(int mh, int sh,int m,char maFlag){
    cout<<fixed<<setw(2)<<setfill('0')<<mh<<":"<<m<<" = "<<sh<<":"<<m;
    if(maFlag=='A') cout<<" AM";
    else cout<<" PM";
    cout<<endl;
}