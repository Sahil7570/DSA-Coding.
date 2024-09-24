#include<iostream>
#include<vector>
using namespace std;
/*Find the last occurrence of x or index
 of x in the vector or arrray.*/

int main(){
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(10);
v.push_back(60);
int x,index=-1;
cout<<"Enter any Number : ";
cin>>x;
for(int i=v.size()-1;i>=0;i--){
if(v[i]==x){
index=i;
break;
}
}
cout<<"Index is : "<<index;

    return 0;
}