#include<iostream>
#include<vector>
using namespace std;

/*Find the total units of water trapped in buildings . */

int main(){
int n;
cout<<"Enter size of array : ";
cin>>n;
int v[n];
for(int i=0;i<n;i++){
    cin>>v[i];
}

int prev[n];
prev[0]=-1;
int mx=v[0];
for(int i=1;i<n;i++){
    prev[i]=mx;
    if(mx<v[i]) mx=v[i];
}

int next[n];
next[0]=-1;
mx=v[0];
for(int i=n-2;i>=0;i--){
    next[i]=mx;
   if(mx<v[i]) mx=v[i]; 
}

for(int i=0;i<n;i++){
    prev[i]=min(prev[i],next[i]);
}

int water=0;
for(int i=1;i<n-1;i++){
    if(v[i]<prev[i]) {
        water+=(prev[i]-v[i]);
    }
}
cout<<"Unit of Stored water is : "<<water;
    return 0;
}