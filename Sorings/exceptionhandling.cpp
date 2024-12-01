#include<iostream>
using namespace std;
class Customer{
    public:
    string name;
    int balance=0,acc_number;

    Customer(string name,int balance,int acc_number){
        this->name=name;
         this->balance=balance;
         this->acc_number=acc_number;
    }
//credit function
    void credit(int amount){
        if(amount>0){
balance+=amount;
cout<<amount<<" rs is credited successfully\n";
    }
    else{
        throw "Enter amount greater than zero";
    }
    }
//deposite function
void deposite(int amount){
    if(amount>0 && amount<=balance){
    balance-=amount;
    cout<<amount<<" rs is deposite successfully\n";
}
else{
    throw "Amount is not available";
}
}
};
int main(){
Customer c1("Sahil",0,10);
try{
c1.credit(100);
c1.credit(20);
c1.deposite(10);
c1.deposite(20);
}

catch(const char* e){
cout<<"Error Occurend in line 39 : "<<e;
}
    return 0;
}