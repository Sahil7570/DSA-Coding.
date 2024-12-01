#include<iostream>
using namespace std;
int main(){
    int slots[15]={0};
    //cheking current slots
    cout<<"Enter the current status books : ";
    for(int i=0;i<15;i++){
        cin>>slots[i];
    }
    //displaying current slots
    cout<<"Current status of Books are : "<<endl;
       for(int i=0;i<15;i++){
        cout<<slots[i]<<" ";
    }
    //telling the user about availability
    
    int slot;
    cout<<"Enter any slot to check availability : ";
    cin>>slot;
    //using try block for expection handling
    try{
    if(slot>15){
        throw "Enter valid slot number";
    }
     else if(slots[slot-1]==1){
    cout<<"It is borrowed";
}
else{
    throw "It is unavailable";
}
}
catch(const char* e){
cout<<"Errror Occured : "<<e;
}

    return 0;
}