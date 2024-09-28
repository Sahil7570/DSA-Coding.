#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
/*Sort an array of 0's,1's and 2's .*/

void sortarray(vector<int>& v){
int nzo=0,noo=0,notw=0;
for(int i=0;i<v.size();i++){
   if(v[i]==0) nzo++;
   else if(v[i]==1) noo++;
   else notw++;
}
for(int i=0;i<v.size();i++){
   if(i<nzo) v[i]=0;
   else if(i<(nzo+noo)) v[i]=1;
   else  v[i]=2;
}
}
void print(vector<int>& v){
for(int i=0;i<v.size();i++){
   cout<<v.at(i)<<" ";
}

}
 int main(){
vector<int> v;
int n;
cout<<"enter size of array : ";
cin>>n;
cout<<"Insert elements in array : ";
for(int i=0;i<n;i++){
   int x;
   cin>>x;
   v.push_back(x);
}
cout<<"Unsorted array : ";
print(v);
cout<<endl;
sortarray(v);
cout<<"Sorted array: ";
print(v);

    return 0;
 }