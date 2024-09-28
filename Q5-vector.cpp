#include<iostream>
#include<vector>
using namespace std;

/*Sort an Array of O's and 1's */

void sortarray(vector<int>& v){
int noz=0;
int noo=0;

for(int i=0;i<v.size();i++){
if(v[i]==0) noz++;
else noo++;
}

for(int i=0;i<v.size();i++){
if(i<noz-1) v[i]=0;
else v[i]=1;
}

}
void printarray(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
vector<int> v;
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
cout<<"Unsorted array : ";
printarray(v);
sortarray(v);
cout<<endl;
cout<<"sorted array : ";
printarray(v);
    return 0;
}




/* SECOND METHOD

void sortarray(vector<int>& v){
int s=0;
int end=v.size()-1;
for(int i=0;i<v.size();i++){
if(v[end]==1) end++;
if(v[s]==0) s++;
if(v[s]==1 & v[end]==0){
swap(v[s],v[end]);
}
}
}
void printarray(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
vector<int> v;
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);

cout<<"Unsorted array : ";
printarray(v);
sortarray(v);
cout<<endl;
cout<<"sorted array : ";
printarray(v);
    return 0;
}
*/
