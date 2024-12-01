#include<iostream>
using namespace std;

/* Write a program to print sum of all 
elements of array  */

int main(){
int arr[2][2];
cout<<"Enter elements in array : ";
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
cin>>arr[i][j];
    }
cout<<endl;
}
int sum=0;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
       sum=sum+arr[i][j];
           }
}
cout<<"Sum is : "<<sum;

    return 0;
}