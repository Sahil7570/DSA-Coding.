#include<iostream>
#include<vector>
using namespace std;
int changevect(vector<int>& t){
t.at(4)=60;
}
int main(){
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.push_back(50);
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;
changevect(v);
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
    return 0;
}