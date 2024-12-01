#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter size of Array : ";
cin>>n;
int BubbleSort[n];
cout<<"Enter Elements : ";
for(int i=0;i<n;i++){
    cin>>BubbleSort[i];
}
for(int i=0;i<n-1;i++){
    bool flag=false;
    for(int j=0;j<n-1-i;j++){
        if(BubbleSort[j]>BubbleSort[j+1]){
            swap(BubbleSort[j],BubbleSort[j+1]);
            flag=true;
        }
    }
    if(flag==false) break;
}
cout<<"Sorted Array is : ";
for(int i=0;i<n;i++){
    cout<<BubbleSort[i]<<" ";
}
return 0;
}