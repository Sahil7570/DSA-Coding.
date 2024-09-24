#include<iostream>
#include<vector>
using namespace std;

/* Basic Operations on Vectors */

int main(){

vector<int> v;
v.push_back(5);   //Inserting Element in Vector
v.push_back(44);
v.push_back(2);
v.push_back(45);
v.push_back(34);

v.pop_back();  //Removing Element

cout<<v.at(2); //Accessing Element

cout<< v.capacity(); //Check the Capacity

cout<<v.size(); //Check the size

for(int i=0;i<v.size();i++){ //Taking Input from User
    cout<<v.at(i)<<" ";
}

    return 0;
}