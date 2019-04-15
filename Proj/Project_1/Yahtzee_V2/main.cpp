/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Purpose: Yahtzee version 2
 * Created on April 9, 2019, 9:13 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int dieRoll();
int doRound(int, int, int[16], int[16], int[16]);
int startGame();
int scoreRound(int,int[5]);
int displayScreen();
int displaySubScreen(int[5],int[16],int[16]);


int main(int argc, char** argv) {
    int d1=0, d2=0, d3=0, d4=0, d5=0;
    int r=1, p=1;
    char choice;
    displayScreen();
    cout<<":: ";
    cin>>choice;
    while(choice!='q' && choice!='Q'){
        if(choice=='s' || choice=='S'){
            if(startGame()==-1) return 0;
        }
        cout<<":: ";
        cin>>choice;
    }
    return 0;
}

int startGame(){
    int temp, p1Score[16], p2Score[16];
    for(int i=0;i<16;i++){
        p1Score[i]=-1;
        p2Score[i]=-1;
    }
    for(int i=1;i<=13;i++){
        temp=doRound(i,1,p1Score,p1Score,p2Score);
        if(temp==-1){
            return -1;
            break;
        }
        temp=doRound(i,2,p2Score,p1Score,p2Score);;
        if(temp==-1){
            return -1;
            break;
        }
    }
}

int doRound(int round, int player, int pScore[16], int p1s[16], int p2s[16]){
    int ans, roll=1, success=0, ndice;
    int d[5], r[5], die, score;
    char sc;
    for(int i=0;i<5;i++){
        d[i]=dieRoll();
        r[i]=0;
    }
    do{
        if(roll==3){
            do{
                displaySubScreen(d,p1s,p2s);
                cout<<"[[(Round "<<round<<")(Player "<<player<<")(Roll "<<roll<<")]]"<<endl;                
                cout<<"Which score card row to score? (1-13) : ";
                cin>>ans;
                if(ans>=1 && ans<=13){
                    if(pScore[ans-1]!=-1){
                        cout<<"This row has already been scored. Choose a different row."<<endl;
                        success=0;
                    }
                    else{
                        if(player==1){
                            p1s[ans-1]=scoreRound(ans,d);
                            if(ans>=1 && ans<=6){
                                p1s[13]=0;
                                if(p1s[0]!=-1) p1s[13]+=p1s[0];
                                if(p1s[1]!=-1) p1s[13]+=p1s[1];
                                if(p1s[2]!=-1) p1s[13]+=p1s[2];
                                if(p1s[3]!=-1) p1s[13]+=p1s[3];
                                if(p1s[4]!=-1) p1s[13]+=p1s[4];
                                if(p1s[5]!=-1) p1s[13]+=p1s[5];
                            }
                            p1s[15]=0;
                            p1s[15]+=p1s[13];
                            if(p1s[14]!=-1) p1s[15]+=p1s[14];
                            if(p1s[6]!=-1) p1s[15]+=p1s[6];
                            if(p1s[7]!=-1) p1s[15]+=p1s[7];
                            if(p1s[8]!=-1) p1s[15]+=p1s[8];
                            if(p1s[9]!=-1) p1s[15]+=p1s[9];
                            if(p1s[10]!=-1) p1s[15]+=p1s[10];
                            if(p1s[11]!=-1) p1s[15]+=p1s[11];
                            if(p1s[12]!=-1) p1s[15]+=p1s[12];                                
                        }
