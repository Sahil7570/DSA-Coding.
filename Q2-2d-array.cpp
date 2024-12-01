#include<iostream>
using namespace std;

/* Write a program to find the largest element 
int 2d-array */

int main(){
int mx=-1;
int arr[2][4];
arr[0][0]=mx;
cout<<"Enter elements in array : ";
for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
cin>>arr[i][j];
    }
cout<<endl;
}
for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
        if(arr[i][j]>mx) mx=arr[i][j];
    }
}
cout<<"largest element is : "<<mx;

    return 0;
}