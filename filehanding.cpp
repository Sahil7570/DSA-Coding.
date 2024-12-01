#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream out;
    out.open("writeInthisFile..txt");
    out<<"I am writing in this file";
    out.close();
    ifstream in;
    string st,st2;
    in.open("writeInthisFile..txt");
    in>>st;
    while(in.eof()==0){
        getline(in,st2);
        cout<<st2;
    }
    in.close();
   
}
