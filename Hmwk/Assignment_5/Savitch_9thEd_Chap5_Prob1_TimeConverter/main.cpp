/* 
 * Author: Chad Bonnett
 * Created on: April 27, 2019 
 * Purpose: Time Converter 
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void inputScr(int&,int&);
void convertTime(int,int&,char&);
void outputScr(int,int,int,char);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
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
    
 
    //Exit stage right!
    return 0;
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
