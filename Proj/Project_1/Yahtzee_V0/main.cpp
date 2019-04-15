/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 * Purpose: Yahtzee version 0 
 * Created on April 3, 2019, 6:26 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int dieRoll();
int doRound(int, int, int[16], int[16], int[16]);
int startGame();
int scoreRound(int,int[5]);
void displayScreen();
void displaySubScreen(int[5],int[16],int[16]);


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
