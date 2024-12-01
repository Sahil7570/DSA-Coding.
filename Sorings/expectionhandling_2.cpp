#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"Enter any digit : ";
cin>>m;
cout<<"Enter any digit : ";
cin>>n;
try{
    if(n==0){
        throw "Not divisible by zero";
    }
    else{
 int c=m/n;
cout<<c;
}
}
catch(const char* e){
cout<<"Error Occured at line 14 : "<<e;
}
    return 0;
}