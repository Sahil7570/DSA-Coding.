#include<iostream>
using namespace std;
int main(){
int items[5];
for(int i=0;i<5;i++){
    items[i]=10;
}
//displaying the current stock
cout<<"Current Stock is : ";
for(int i=0;i<5;i++){
    cout<<items[i]<<" ";
}
cout<<endl;
//asking user to purchase and select the quantity 
int item;
cout<<"Enter the Number of item to purchase : ";
cin>>item;
int quantity;
cout<<"Select the quantity : ";
cin>>quantity;
//cheking if its enough stock
if(quantity>10){
    cout<<"it's out of stock"<<endl;
}
else{
    items[item-1]=items[item-1]-quantity;
}
//displaying updated stock
cout<<"Updated stock is : ";
for(int i=0;i<5;i++){
cout<<items[i]<<" ";
}
    return 0;
}