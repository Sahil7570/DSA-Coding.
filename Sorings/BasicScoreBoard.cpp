#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
int players[5];
cout<<"Enter scores of each player : "<<endl;
for(int i=0;i<5;i++){
    cout<<"Player "<<i+1<<" scores : ";
    cin>>players[i];
}
//displaying initial scores
cout<<"Initial scores of each player is : ";
for(int i=0;i<5;i++){
    cout<<"Player"<<i+1<<"scores : ";
    cout<<players[i]<<" "<<endl;  
}
//taking specific player and his scorers from user
int player,score;
cout<<"Enter a specif player and his scores to update : ";
cin>>player;
try{
if(player>5){
    throw "Player does not exist";   
}
if(score<0){
    throw "Scores should be non negative";
}
cin>>score;
players[player-1]=score;
}
catch(const char* e){
cout<<"Error Occurred! :"<<e;
return 0;
}
//displaying updated scores
cout<<"updated scores are : ";
for(int i=0;i<5;i++){
    cout<<"Player"<<i+1<<"scores : ";
    cout<<players[i]<<" "<<endl;
}
return 0;
}