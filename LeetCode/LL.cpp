//<-1-><-2-><-3-><-4-><-5->
//1. Doubly Circular LL
//2. Add Node, Delete Node, printList(index)

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};


void AddNodeAtRoot(struct Node *end, int val){
if(end->next != NULL){
    cout<<"HERE";
    return;
}

cout<<"In add node at Root";
Node *temp = new Node;
temp->data=val;

Node *head = temp;
head->next=NULL;
head->prev=NULL;
}

void AddNode(struct Node* head, int val){

    Node *temp = new Node;
    temp->data=val;
    Node *curr = head;
    curr->next=temp;
    temp->next=head;
    head->prev=temp;
    temp->prev=curr;
}

void deleteNode(struct Node *head, int element){
    Node *curr= head;
    while(curr->data!=element){
        if(curr->data == element){
            Node *temp = curr->prev;
            temp->next = curr->next->next;
            curr->next->prev = temp;
        }
        curr=curr->next;

    }
}


void printLL(struct Node *start){
    Node *temp =start;
    while(temp->next!=start){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){

    struct Node* start =NULL;
    AddNodeAtRoot(start, 5);
    AddNode(start, 6);
    printLL(start);
    return 0;
}