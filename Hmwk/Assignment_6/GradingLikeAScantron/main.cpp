/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on May 10, 2019
 * Purpose:  Input the Key to the test, then input the student answers to 
 *           the test. Compare and grade the results using C=Correct and 
 *           W=Wrong. 3 arrays are all you need!
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(const string &);
void read(const char [],string &);
int  compare(const string &,const string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string key,answers,score;
    char fileKey[]="key.dat",fileAns[]="answer.dat";
    float pRight;
    
    //Initialize or input i.e. set variable values
    read(fileKey,key);
    read(fileAns,answers);
    
    //Score the exam
    pRight=compare(key,answers,score);
    
    //Display the outputs
    cout<<"Key     ";print(key);
    cout<<"Answers ";print(answers);
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight/score.size()*100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}

void print(const string &s){}

void read(const char file[],string &s){
    string line;
    ifstream myfile(file);
    if (myfile.is_open()){
        while ( getline (myfile,line) ){
            cout << line << '\n';
        }
        myfile.close();
    }
    else{
        cout<<"Unable to open file."<<endl;
    }
}

int  compare(const string &k,const string &a,string &s){}

