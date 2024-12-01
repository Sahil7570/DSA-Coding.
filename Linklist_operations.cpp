#include<iostream>
using namespace std;
//Function for creating Linklist
class Node{
 public:
  int val;
  Node* next;
Node(int val){
   this->val=val;
   next=NULL;
    }
};
//Function to display Linklist Elements
void show(Node* head){
Node* temp=head;
while(temp!=NULL){
    cout<<temp->val<<" ";
    temp = temp->next;
}
cout<<endl;
}
//Function to display Linklist Elements using 
//Recursion
void Recursive_Linklist(Node* head){
if(head==NULL){
   return;
}
else{
cout<<head->val<<" ";
Recursive_Linklist(head->next);
}
cout<<endl;
}
//Fuction to print reverse of Linklist
void Reverse_Linklist(Node* head){
if(head==NULL){
   return;
}
else{
 Reverse_Linklist(head->next);
cout<<head->val<<" ";
}
}
int main(){
Node* a=new Node(10);
Node* b=new Node(20);
Node* c=new Node(30);
Node*d=new Node(40);
//Linking Nodes
a->next=b;
b->next=c;
c->next=d;
//Function Calls
show(a);
Recursive_Linklist(a);
Reverse_Linklist(a);
    return 0;
}