#include<iostream>
#include<vector>
using namespace std;

/*Sort array of 0's, 1's and 2's using Dutch algorithm*/

void sortarray(vector<int>& v){
    int low=0,mid=0,high=v.size()-1;
  while(mid<=high){

  
if(v[mid]==2){ 
    swap(v[mid],v[high]);
   high--; }
else if(v[mid]==0) {
    swap(v[mid],v[low]);
    low++,mid++;
    }
else mid++;
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