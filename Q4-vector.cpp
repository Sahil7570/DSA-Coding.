#include<iostream>
#include<vector>
using namespace std;

/*Rotate an arrya k times where k is taken as an input
from user */

void reversewhole(vector<int>& v){
int i=0,j=v.size()-1;
while(i<=j){
    swap(v[i],v[j]);
    i++,j--;
}
}
void reverse2(vector<int>& c,int n){
int i=c.size()-n,j=c.size()-1;
while(i<=j){
swap(c[i],c[j]);
i++,j--;
}
}
void reverse1(vector<int>& e,int n){
    int i=0,j=e.size()-n-1;
while(i<=j){
    swap(e[i],e[j]);
    i++;
    j--;
}
}
void display(vector<int> v){
    cout<<"Simple array is : ";
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;

}
int main(){
    int s;
    cout<<"Enter size of array : ";
    cin>>s;
vector<int> v;
cout<<"enter values in vector : ";
for(int i=0;i<s;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int n;
cout<<"How many times you want to rotate array? : ";
cin>>n;
display(v);
reverse1(v,n);
reverse2(v,n);
reversewhole(v);
display(v);

    return 0;
}