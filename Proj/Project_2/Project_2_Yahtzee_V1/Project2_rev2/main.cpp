/* 
 * File:   main.cpp
 * Author: Chad Bonnett
 *
 * Created on May 26, 2019, 10:13 PM
 * 
 * Added random number generator seed using ctime
 * Added ifdef ifndef directives for OS detection
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>

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
    srand(time(NULL));
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
                        else if(player==2){
                            p2s[ans-1]=scoreRound(ans,d); 
                            if(ans>=1 && ans<=6){
                                p2s[13]=0;
                                if(p2s[0]!=-1) p2s[13]+=p2s[0];
                                if(p2s[1]!=-1) p2s[13]+=p2s[1];
                                if(p2s[2]!=-1) p2s[13]+=p2s[2];
                                if(p2s[3]!=-1) p2s[13]+=p2s[3];
                                if(p2s[4]!=-1) p2s[13]+=p2s[4];
                                if(p2s[5]!=-1) p2s[13]+=p2s[5];
                            }
                            p2s[15]=0;
                            p2s[15]+=p2s[13];
                            if(p2s[14]!=-1) p2s[15]+=p2s[14];
                            if(p2s[6]!=-1) p2s[15]+=p2s[6];
                            if(p2s[7]!=-1) p2s[15]+=p2s[7];
                            if(p2s[8]!=-1) p2s[15]+=p2s[8];
                            if(p2s[9]!=-1) p2s[15]+=p2s[9];
                            if(p2s[10]!=-1) p2s[15]+=p2s[10];
                            if(p2s[11]!=-1) p2s[15]+=p2s[11];
                            if(p2s[12]!=-1) p2s[15]+=p2s[12];
                        }
                        success=1;
                    }
                }
            } while(success!=1);   
            break;
        }
        displaySubScreen(d,p1s,p2s);
        cout<<"[[(Round "<<round<<")(Player "<<player<<")(Roll "<<roll<<")]]"<<endl;
        cout<<"Re-roll (y/n)? : ";
        cin>>sc;
        if(sc=='y' || sc=='Y'){
            cout<<"How many dice/die to roll? : ";
            cin>>ndice;
            if(ndice>=1 && ndice<=5){
                for(int i=1; i<=ndice; i++){
                    do{
                        cout<<"Which die to re-roll? : ";
                        cin>>die;
                        if(die>=1 && die<=5){
                            if(r[die-1]==0){
                                d[die-1]=dieRoll();
                                r[die-1]=1;
                                success=1;
                            }
                            else{
                                cout<<"Die has already been selected for re-roll."<<endl;
                                success=0;
                            }
                        } 
                    } while(success!=1);
                }
            }
            roll++;
            for(int i=0;i<5;i++){
                r[i]=0;
            }
        }
        else if(sc=='n' || sc=='N'){
            do{
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
                        else if(player==2){
                            p2s[ans-1]=scoreRound(ans,d); 
                            if(ans>=1 && ans<=6){
                                p2s[13]=0;
                                if(p2s[0]!=-1) p2s[13]+=p2s[0];
                                if(p2s[1]!=-1) p2s[13]+=p2s[1];
                                if(p2s[2]!=-1) p2s[13]+=p2s[2];
                                if(p2s[3]!=-1) p2s[13]+=p2s[3];
                                if(p2s[4]!=-1) p2s[13]+=p2s[4];
                                if(p2s[5]!=-1) p2s[13]+=p2s[5];
                            }
                            p2s[15]=0;
                            p2s[15]+=p2s[13];
                            if(p2s[14]!=-1) p2s[15]+=p2s[14];
                            if(p2s[6]!=-1) p2s[15]+=p2s[6];
                            if(p2s[7]!=-1) p2s[15]+=p2s[7];
                            if(p2s[8]!=-1) p2s[15]+=p2s[8];
                            if(p2s[9]!=-1) p2s[15]+=p2s[9];
                            if(p2s[10]!=-1) p2s[15]+=p2s[10];
                            if(p2s[11]!=-1) p2s[15]+=p2s[11];
                            if(p2s[12]!=-1) p2s[15]+=p2s[12];
                        }
                        success=1;
                    }
                }
            } while(success!=1);
            break;
        }
        else if(sc=='q' || sc=='Q') return -1;
        else continue;
    } while(true);
    return 1;
}

void displayScreen(){
    #ifdef _WIN32
        system("CLS"); //clear console for Windows
    #endif
    #ifndef test
        system("clear"); //clear console for Linux
    #endif
    cout<<"==================================================================="<<endl;
    cout<<"   CONTROLS                  |                      |  P1  |  P2  |"<<endl;
    cout<<"                             --------------------------------------"<<endl;
    cout<<"   (q) quit game             |             Ones (1) |      |      |"<<endl;
    cout<<"   (s) start game            |             Twos (2) |      |      |"<<endl;
    cout<<"                             |           Threes (3) |      |      |"<<endl;
    cout<<"                             |            Fours (4) |      |      |"<<endl;
    cout<<"                             |            Fives (5) |      |      |"<<endl;
    cout<<"                             |            Sixes (6) |      |      |"<<endl;
    cout<<"                             --------------------------------------"<<endl;
    cout<<"                             |                  Sum |      |      |"<<endl;
    cout<<"                             |                Bonus |      |      |"<<endl;
    cout<<"                             --------------------------------------"<<endl;
    cout<<"                             |  Three of a kind (7) |      |      |"<<endl;
    cout<<"                             |   Four of a kind (8) |      |      |"<<endl;
    cout<<"                             |       Full House (9) |      |      |"<<endl;
    cout<<" ++++++++++++++++++++++++++  |  Small straight (10) |      |      |"<<endl;
    cout<<" + D1 + D2 + D3 + D4 + D5 +  |  Large straight (11) |      |      |"<<endl;
    cout<<" ++++++++++++++++++++++++++  |          Chance (12) |      |      |"<<endl;
    cout<<" +    +    +    +    +    +  |         YAHTZEE (13) |      |      |"<<endl; 
    cout<<" ++++++++++++++++++++++++++  --------------------------------------"<<endl;
    cout<<"                             |          TOTAL SCORE |      |      |"<<endl; 
    cout<<"==================================================================="<<endl;
}

void displaySubScreen(int d[6], int p1s[16], int p2s[16]){
    #ifdef _WIN32
        system("CLS"); //clear console for Windows
    #endif
    #ifndef test
        system("clear"); //clear console for Linux
    #endif
    cout<<"==================================================================="<<endl;
    cout<<"   CONTROLS                  |                      |  P1  |  P2  |"<<endl;
    cout<<"                             --------------------------------------"<<endl;
    cout<<"   (q) quit game             |             Ones (1) |  ";
    if(p1s[0]!=-1) cout<<setw(2)<<p1s[0];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[0]!=-1) cout<<setw(2)<<p2s[0];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<"                             |             Twos (2) |  ";//<<setw(2)<<p1s[1]<<"  |  "<<setw(2)<<p2s[1]<<"  |"<<endl;
    if(p1s[1]!=-1) cout<<setw(2)<<p1s[1];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[1]!=-1) cout<<setw(2)<<p2s[1];
    else cout<<"  ";
    cout<<"  |"<<endl;    
    cout<<"                             |           Threes (3) |  ";//<<setw(2)<<p1s[2]<<"  |  "<<setw(2)<<p2s[2]<<"  |"<<endl;
    if(p1s[2]!=-1) cout<<setw(2)<<p1s[2];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[2]!=-1) cout<<setw(2)<<p2s[2];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<"                             |            Fours (4) |  ";//<<setw(2)<<p1s[3]<<"  |  "<<setw(2)<<p2s[3]<<"  |"<<endl;
    if(p1s[3]!=-1) cout<<setw(2)<<p1s[3];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[3]!=-1) cout<<setw(2)<<p2s[3];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<"                             |            Fives (5) |  ";//<<setw(2)<<p1s[4]<<"  |  "<<setw(2)<<p2s[4]<<"  |"<<endl;
    if(p1s[4]!=-1) cout<<setw(2)<<p1s[4];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[4]!=-1) cout<<setw(2)<<p2s[4];
    else cout<<"  ";
    cout<<"  |"<<endl;    
    cout<<"                             |            Sixes (6) |  ";//<<setw(2)<<p1s[5]<<"  |  "<<setw(2)<<p2s[5]<<"  |"<<endl;
    if(p1s[5]!=-1) cout<<setw(2)<<p1s[5];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[5]!=-1) cout<<setw(2)<<p2s[5];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<"                             --------------------------------------"<<endl;
    cout<<"                             |                  Sum |  ";//<<setw(2)<<p1s[13]<<"  |  "<<setw(2)<<p2s[13]<<"  |"<<endl;
    if(p1s[13]!=-1) cout<<setw(2)<<p1s[13];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[13]!=-1) cout<<setw(2)<<p2s[13];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<"                             |                Bonus |  ";//<<setw(2)<<p1s[14]<<"  |  "<<setw(2)<<p2s[14]<<"  |"<<endl;
    if(p1s[14]!=-1) cout<<setw(2)<<p1s[14];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[14]!=-1) cout<<setw(2)<<p2s[14];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<"                             --------------------------------------"<<endl;
    cout<<"                             |  Three of a kind (7) |  ";//<<setw(2)<<p1s[6]<<"  |  "<<setw(2)<<p2s[6]<<"  |"<<endl;
    if(p1s[6]!=-1) cout<<setw(2)<<p1s[6];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[6]!=-1) cout<<setw(2)<<p2s[6];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<"                             |   Four of a kind (8) |  ";//<<setw(2)<<p1s[7]<<"  |  "<<setw(2)<<p2s[7]<<"  |"<<endl;
    if(p1s[7]!=-1) cout<<setw(2)<<p1s[7];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[7]!=-1) cout<<setw(2)<<p2s[7];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<"                             |       Full House (9) |  ";//<<setw(2)<<p1s[8]<<"  |  "<<setw(2)<<p2s[8]<<"  |"<<endl;
    if(p1s[8]!=-1) cout<<setw(2)<<p1s[8];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[8]!=-1) cout<<setw(2)<<p2s[8];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<" ++++++++++++++++++++++++++  |  Small straight (10) |  ";//<<setw(2)<<p1s[9]<<"  |  "<<setw(2)<<p2s[9]<<"  |"<<endl;
    if(p1s[9]!=-1) cout<<setw(2)<<p1s[9];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[9]!=-1) cout<<setw(2)<<p2s[9];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<" + D1 + D2 + D3 + D4 + D5 +  |  Large straight (11) |  ";//<<setw(2)<<p1s[10]<<"  |  "<<setw(2)<<p2s[10]<<"  |"<<endl;
    if(p1s[10]!=-1) cout<<setw(2)<<p1s[10];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[10]!=-1) cout<<setw(2)<<p2s[10];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<" ++++++++++++++++++++++++++  |          Chance (12) |  ";//<<setw(2)<<p1s[11]<<"  |  "<<setw(2)<<p2s[11]<<"  |"<<endl;
    if(p1s[11]!=-1) cout<<setw(2)<<p1s[11];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[11]!=-1) cout<<setw(2)<<p2s[11];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<" + "<<d[0]<<"  + "<<d[1]<<"  + "<<d[2]<<"  + "<<d[3]<<"  + "<<d[4]<<"  +  |         YAHTZEE (13) |  ";//<<setw(2)<<p1s[12]<<"  |  "<<setw(2)<<p2s[12]<<"  |"<<endl; 
    if(p1s[12]!=-1) cout<<setw(2)<<p1s[12];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[12]!=-1) cout<<setw(2)<<p2s[12];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<" ++++++++++++++++++++++++++  --------------------------------------"<<endl;
    cout<<"                             |          TOTAL SCORE |  ";//<<setw(2)<<p1s[15]<<"  |  "<<setw(2)<<p2s[15]<<"  |"<<endl; 
    if(p1s[15]!=-1) cout<<setw(2)<<p1s[15];
    else cout<<"  ";
    cout <<"  |  ";
    if(p2s[15]!=-1) cout<<setw(2)<<p2s[15];
    else cout<<"  ";
    cout<<"  |"<<endl;
    cout<<"==================================================================="<<endl;
}

int dieRoll(){
    return rand()%6+1;
}

int scoreRound(int row, int d[5]){
    int s[5], score=0, temp;
    for(int i=0;i<5;i++) s[i]=d[i];
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(s[i]>s[j]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    // testing
    for(int i=0;i<5;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    // end of testing
    if(row==1){
        for(int i=0;i<5;i++){
            if(s[i]==1) score+=1;
        }
        return score;
    }
    else if(row==2){
        for(int i=0;i<5;i++){
            if(s[i]==2) score+=2;
        }
        return score;        
    }
    else if(row==3){
        for(int i=0;i<5;i++){
            if(s[i]==3) score+=3;
        }
        return score;
    }
    else if(row==4){
        for(int i=0;i<5;i++){
            if(s[i]==4) score+=4;
        }
        return score;
    }
    else if(row==5){
        for(int i=0;i<5;i++){
            if(s[i]==5) score+=5;
        }
        return score;
    }
    else if(row==6){
        for(int i=0;i<5;i++){
            if(s[i]==6) score+=6;
        }
        return score;
    }
    else if(row==7){ //three of a kind
        if(s[0]==s[1] && s[1]==s[2]) score=s[0]+s[1]+s[2]+s[3]+s[4];
        else if(s[1]==s[2] && s[2]==s[3]) score=s[0]+s[1]+s[2]+s[3]+s[4];  
        else if(s[2]==s[3] && s[3]==s[4]) score=s[0]+s[1]+s[2]+s[3]+s[4];
        else score=0;
        return score;
    }
    else if(row==8){ //four of a kind
        if(s[0]==s[1] && s[0]==s[2] && s[0]==s[3]) score=s[0]+s[1]+s[2]+s[3]+s[4];
        else{
            if(s[1]==s[2] &&s[1]==s[3] && s[1]==s[4]) score=s[0]+s[1]+s[2]+s[3]+s[4];
            else score=0;
        }
        return score;        
    }
    else if(row==9){ //full house (25 points)
        if(s[0]==s[1] && s[1]==s[2] && s[3]==s[4]) score=25;
        else if(s[0]==s[1] && s[2]==s[3] && s[3]==s[4]) score=25;
        else score=0;
        return score;
    }
    else if(row==10){ //small straight (30 points)
        if(s[0]==1 && s[1]==2 && s[2]==3 && s[4]==4) score=30;
        else if(s[0]==1 && s[2]==2 && s[3]==3 && s[4]==4) score=30;
        else if(s[0]==1 && s[1]==2 && s[3]==3 && s[4]==4) score=30;
        else score=0;
        return score;
    } 
    else if(row==11){ //large straight (40 points)
        if(s[0]==1 && s[1]==2 && s[2]==3 && s[3]==4 && s[4]==5) score=40;
        else score=0;
        return score;
    }    
    else if(row==12){ //chance
        score=s[0]+s[1]+s[2]+s[3]+s[4];
        return score;
    }
    else if(row==13){ //yahtzee (50 points)
        if(s[0]==s[1] && s[0]==s[2] && s[0]==s[3] && s[0]==s[4]) score=50;
        else score=0;
        return score;
    }
}