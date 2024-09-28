#include<iostream>
#include<vector>
using namespace std;

/*Write a program to merg and sort to arrays */
vector<int> mergesort(vector<int>& v1,vector<int>& v2){
int n=v1.size();
int m=v2.size();
vector<int> res(m+n);
int i=0,j=0,k=0;
while(i<=n-1 && j<=m-1){
if(v1[i]<v2[j]){
  res[k]=v1[i];
  i++;
}
else{
    res[k]=v2[j];
    j++;
}
k++;
}
if(i==n){
    while(j<=m-1){
        res[k]=v2[j];
j++;
k++;
    }
}
if(j==m){
    while(i<=n-1){
        res[k]=v1[i];
i++;
k++;
    }
}
return res;
}
int main(){
vector<int> v1;
v1.push_back(4);
v1.push_back(2);
v1.push_back(3);
v1.push_back(1);

vector<int> v2;
v2.push_back(5);
v2.push_back(6);
v2.push_back(8);
v2.push_back(10);
v2.push_back(12);
v2.push_back(17);
v2.push_back(8);

vector<int> v3=mergesort(v1,v2);
for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" ";
}
    return 0;
}