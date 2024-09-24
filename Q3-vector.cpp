#include<iostream>
#include<vector>
using namespace std;

/*Write a Program to reverse an array without using
extra array */

void reversearray(vector<int>& c){
int i=1,j=c.size()-2;
while(i<=j){
    int temp=c[i];
    c[i]=c[j];
    c[j]=temp;
    i++,j--;
}
}
void display(vector<int>& v){
for(int i=0;i<v.size();i++){
cout<<v[i]<<" ";
}
}
int main(){
int n;
cout<<"Enter size of array : ";
cin>>n;
vector<int> v;
cout<<"Enter Elements in vector : ";
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
display(v);
reversearray(v);
cout<<"Reverse array elements are : ";
display(v);

    return 0;
}