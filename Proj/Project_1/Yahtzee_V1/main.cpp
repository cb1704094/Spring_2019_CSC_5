/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Purpose: Yahtzee version 1
 * Created on April 8, 2019, 7:43 PM
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