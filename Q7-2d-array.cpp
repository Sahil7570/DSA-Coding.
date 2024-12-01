#include<iostream>
using namespace std;
int main(){
int m;
cout<<"Enter no of rows/cols : ";
cin>>m;
int arr[m][m];
cout<<"Enter Elements in array : ";
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}

for(int i=m-1;i>=0;i--){
    for(int j=m-1;j>=i+1;j--){
        swap(arr[i][j],arr[j][i]);
    }
}

cout<<"Rotated martix is  : ";
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}