#include<iostream>
#include<vector>
using namespace std;
/*MOVE ALL NEGATIVE NUMBER AT BEGINNING AND
ALL POSITIVE NUMBERS AT END.*/

void arrangeelements(vector<int>& v){
int s=0,end=v.size()-1;
while(s<end){
if(v[s]<0) s++;
if(v[end]>0) end++;
if(v[s]>0 && v[end]<0)
{
    swap(v[s],v[end]);
    s++;
    end--;
}
}
}

void printarray(vector<int> v){
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main(){
vector<int> v;
int n;
cout<<"Enter size of Array : ";
cin>>n;
cout<<"Enter elements in vector : ";
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
cout<<"Unsorted array : ";
printarray(v);
cout<<endl;
arrangeelements(v);
cout<<"sorted array : ";
printarray(v);
    return 0;
}