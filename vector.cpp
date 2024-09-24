#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(5);
v.push_back(44);
v.push_back(2);
v.push_back(45);
v.push_back(34);
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
    return 0;
}