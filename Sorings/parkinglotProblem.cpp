#include<iostream>
using namespace std;
int main(){
int parkingspace[10]={0};
//cheking current occupied space
cout<<"Enter current occupied space : ";
for(int i=0;i<10;i++){
    cin>>parkingspace[i];
}
//displaying occupied space
cout<<"Current occupied space : "<<endl;
for(int i=0;i<10;i++){
    cout<<parkingspace[i]<<" ";
}
cout<<endl;
//taking spaceto be occupied
int space;
cout<<"Enter space to be occupied : ";
cin>>space;
space=space;
//cheking that space is empty or not
if(parkingspace[space-1]==0){
    parkingspace[space-1]=1;
    cout<<"Space "<<space<<" is updated";
}
else{
cout<<"Space is already occupied";
}
cout<<endl;
//displaying updated parking lot
cout<<"Updated parking space"<<endl;
for(int i=0;i<10;i++){
    cout<<parkingspace[i]<<" ";
}
    return 0;
}