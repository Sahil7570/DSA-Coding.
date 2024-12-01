#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
this->val=val;
this->next=NULL;
    }
};

void insertAtEnd(Node* head,int val){
Node* temp=new Node(val);
while(head->next!=NULL) head=head->next;
head->next=temp;
}
void show(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
cout<<endl;
}

int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;
   show(a);
   insertAtEnd(a,50);
   show(a); 
    return 0;
}