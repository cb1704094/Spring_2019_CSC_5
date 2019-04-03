/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Created on March 24th, 2019, 10:36 AM
 * Purpose:  Menu Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random functions amoung other things
#include <iomanip>   //Format Library
#include <cmath> //Math Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int CNVPNDL=100;//Convert Pennies to Dollars

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice,nProbs;
    
    //Initialize or input i.e. set variable values
    nProbs='8';
    do{
        //Present the menu to the user.
        cout<<"Choose from the following Menu"<<endl<<endl;
        cout<<"1 Race"<<endl;
        cout<<"2 Bank Charges"<<endl;
        cout<<"3 Books"<<endl;
        cout<<"4 Sort Names"<<endl;
        cout<<"5 Rock Paper Scissors"<<endl;
        cout<<"6 Compatible Signs"<<endl;
        cout<<"7 Roman Conversion"<<endl;
        cout<<"8 ISP"<<endl;        
        cout<<endl;
        cin>>choice;
        cout<<endl;
        //Select the problem to execute
        switch(choice){
            case '1':{
                //Declare Variables
                string name[3];
                int time[3]; 
                int tempTime;
                string tempName;

                //Initialize or input i.e. set variable values
                cout<<"Race Ranking Program"<<endl;
                cout<<"Input 3 Runners"<<endl;
                for(int i=0;i<3;i++){
                    cin>>name[i]>>time[i];        
                }
                //Map inputs -> outputs
                for(int j=0;j<2;j++){
                    for(int i=1;i<3;i++){
                        if(time[i]<time[i-1]){
                            tempName = name[i-1]; 
                            tempTime = time[i-1];
                            name[i-1] = name[i];
                            time[i-1] = time[i];
                            name[i] = tempName;
                            time[i] = tempTime;
                        }        
                    }    
                }
                //Display the outputs
                cout<<"Their names, then their times";
                for(int i=0;i<3;i++){
                    cout<<endl<<name[i]<<"\t"<<setw(3)<<time[i];}    
                
                cout<<endl;
                break;
            }
            case '2':{
                float balance,cFee=0.0,mFee=10.0,lBalance=0.0,nBalance=0.0;
                int nChecks;
                //Initialize or input i.e. set variable values
                cout<<"Monthly Bank Fees"<<endl;
                cout<<"Input Current Bank Balance and Number of Checks"<<endl;
                cin>>balance>>nChecks;
                //Map inputs -> outputs
                if(nChecks<20){
                    cFee=0.10*nChecks;
                }
                else if(nChecks<40){
                    cFee=0.08*nChecks;    
                }
                else if(nChecks<60){
                    cFee=0.06*nChecks;    
                }
                else {
                    cFee=0.04*nChecks;    
                }
                if(balance<400.0){
                    lBalance=15.0;
                }
                nBalance=balance-cFee-mFee-lBalance;
                //Display the outputs
                cout<<fixed<<setprecision(2);
                cout<<"Balance     $ "<<setw(8)<<balance<<endl;
                cout<<"Check Fee   $ "<<setw(8)<<cFee<<endl;
                cout<<"Monthly Fee $ "<<setw(8)<<mFee<<endl;
                cout<<"Low Balance $ "<<setw(8)<<lBalance<<endl;
                cout<<"New Balance $ "<<setw(8)<<nBalance;
                cout<<endl;
                break;
            }
            case '3':{
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
    cout<<"Points earned   = "<<setw(2)<<points<<endl;
                break;
            }
            case '4':{
                //Declare Variables
                string name[3],temp;
                //Initialize or input i.e. set variable values
                cout<<"Sorting Names"<<endl;
                cout<<"Input 3 names"<<endl;
                for(int i=0;i<3;i++){
                    cin>>name[i];
                }
                //Map inputs -> outputs
                for(int i=0;i<2;i++){
                    for(int j=1;j<3;j++){
                        if(name[j].compare(name[j-1])<0){
                            temp=name[j-1];
                            name[j-1]=name[j];
                            name[j]=temp;
                        }
                    }
                }
                //Display the outputs
                cout<<name[0]<<endl<<name[1]<<endl<<name[2];
                cout<<endl;
                break;
            }
            case '5':{
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
                cout<<endl;
                break;
            }
            case '6':{
                //Declare Variables
                string s1,s2;
                //Initialize or input i.e. set variable values
                cout<<"Horoscope Program which examines compatible signs."<<endl;
                cout<<"Input 2 signs."<<endl;
                cin>>s1>>s2;
                //Map inputs -> outputs
                //Display the outputs
                if(s1=="Aries" || s1=="Leo" || s1=="Sagittarius"){
                    if(s2=="Aries" || s2=="Leo" || s2=="Sagittarius"){
                        cout<<s1<<" and "<<s2<<" are compatible Fire signs.";
                    }
                    else {
                        cout<<s1<<" and "<<s2<<" are not compatible signs.";            
                    }
                }
                else if(s1=="Taurus" || s1=="Virgo" || s1=="Capricorn"){
                    if(s2=="Taurus" || s2=="Virgo" || s2=="Capricorn"){
                        cout<<s1<<" and "<<s2<<" are compatible Earth signs.";
                    }
                    else {
                        cout<<s1<<" and "<<s2<<" are not compatible signs.";  
                    }     
                }
                else if(s1=="Gemini" || s1=="Libra" || s1=="Aquarius"){
                    if(s2=="Gemini" || s2=="Libra" || s2=="Aquarius"){
                        cout<<s1<<" and "<<s2<<" are compatible Air signs.";
                    }
                    else {
                        cout<<s1<<" and "<<s2<<" are not compatible signs.";  
                    }        
                }
                else if(s1=="Cancer" || s1=="Scorpio" || s1=="Pisces"){
                    if(s2=="Cancer" || s2=="Scorpio" || s2=="Pisces"){
                        cout<<s1<<" and "<<s2<<" are compatible Water signs.";
                    }      
                    else {
                        cout<<s1<<" and "<<s2<<" are not compatible signs.";
                    }
                }
                cout<<endl;
                break;
            }
            case '7':{
                //Declare Variables
                int aYear,n1,n10,n100,n1000;
                string rYear="";

                //Initialize or input i.e. set variable values
                cout<<"Arabic to Roman numeral conversion."<<endl;
                cout<<"Input the integer to convert."<<endl;
                cin>>aYear;

                //Map inputs -> outputs
                n1=aYear%10;
                n10=(aYear/10)%10;
                n100=(aYear/100)%10;
                n1000=(aYear/1000)%10;

                //Display the outputs
                if(aYear<1000 || aYear>3000){
                    cout<<aYear<<" is Out of Range!";
                }
                else{
                    switch(n1000){
                        case 1:
                            rYear+="M";
                            break;
                        case 2:
                            rYear+="MM";
                            break;
                        case 3:
                            rYear+="MMM";
                            break;
                    }
                    switch(n100){
                        case 1:
                            rYear+="C";
                            break;
                        case 2:
                            rYear+="CC";
                            break;
                        case 3:
                            rYear+="CCC";
                            break;
                        case 4:
                            rYear+="CD";
                            break;
                        case 5:
                            rYear+="D";
                            break;
                        case 6:
                            rYear+="DC";
                            break;
                        case 7:
                            rYear+="DCC";
                            break;
                        case 8:
                            rYear+="DCCC";
                            break;
                        case 9:
                            rYear+="CM";
                            break;
                    }
                    switch(n10){
                        case 1:
                            rYear+="X";
                            break;
                        case 2:
                            rYear+="XX";
                            break;
                        case 3:
                            rYear+="XXX";
                            break;
                        case 4:
                            rYear+="XL";
                            break;
                        case 5:
                            rYear+="L";
                            break;
                        case 6:
                            rYear+="LX";
                            break;
                        case 7:
                            rYear+="LXX";
                            break;
                        case 8:
                            rYear+="LXXX";
                            break;
                        case 9:
                            rYear+="XC";
                            break;
                    }
                    switch(n1){
                        case 1:
                            rYear+="I";
                            break;
                        case 2:
                            rYear+="II";
                            break;
                        case 3:
                            rYear+="III";
                            break;
                        case 4:
                            rYear+="IV";
                            break;
                        case 5:
                            rYear+="V";
                            break;
                        case 6:
                            rYear+="VI";
                            break;
                        case 7:
                            rYear+="VII";
                            break;
                        case 8:
                            rYear+="VIII";
                            break;
                        case 9:
                            rYear+="IX";
                            break;
                    }
                    cout<<aYear<<" is equal to "<<rYear;
                }  
                cout<<endl;
                break;
            }
            case '8':{
                //Declare Variables
                string p;
                int h;
                float bill;

                //Initialize or input i.e. set variable values
                cout<<"ISP Bill"<<endl;
                cout<<"Input Package and Hours"<<endl;
                cin>>p>>h;

                //Map inputs -> outputs
                if(p=="A"){
                    if(h<=10){
                        bill=9.95;
                    }
                    else{
                        bill=9.95+((h-10)*2.0);
                    }
                }
                else if(p=="B"){
                    if(h<=20){
                        bill=14.95;
                    }
                    else{
                        bill=14.95+((h-20)*1.0);
                    }   
                }
                else if(p=="C"){
                    bill=19.95;
                }

                //Display the outputs
                cout<<"Bill = $ "<<bill;  
                cout<<endl;
                break;
            }            
            default:
                cout<<"Exiting Menu"<<endl<<endl;
        }
    }while(choice<=nProbs);

    //Exit stage right or left!
    return 0;
}