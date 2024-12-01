#include<iostream>
using namespace std;

/*Write a program to store and print roll no 
and marks of 4 students taking data as input*/

int main(){
int data[2][4];
cout<<"Enter Your Rollno and Marks : ";
for(int i=0;i<2;i++){

for(int j=0;j<4;j++){
cin>>data[i][j];
}
cout<<endl;
}
 cout<<endl;   
    cout<<"marks and rollno are : "<<endl;
for(int i=0;i<2;i++){

for(int j=0;j<4;j++){
cout<<data[i][j]<<" ";
}
cout<<endl;
}
   
}