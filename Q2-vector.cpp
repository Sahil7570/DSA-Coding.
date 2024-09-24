#include<iostream>
#include<vector>
using namespace std;
/*Find the doublet whose sum is equal to an given 
number x in an arrya.*/

int main(){
int x;
cout<<"Enter target : ";
cin>>x;
vector<int> v;
int n;
cout<<"Enter size of array : ";
cin>>n;
cout<<"Enter elements in array : ";
for(int i=0;i<n;i++){
    int e;
    cin>>e;
    v.push_back(e);
}
for(int i=0;i<v.size()-2;i++){
    for(int j=i+1;j<v.size()-1;j++){
if(v[i]+v[j]==x){
    cout<<"("<<v[i]<<","<<v[j]<<")"<<endl;
}
    }
}
    return 0;
}