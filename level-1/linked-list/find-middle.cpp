#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int dt){
        this->data = dt;
        this->next = nullptr;
    }
    // Node(int dt, Node *nxt){
    //     this->data = dt;
    //     this->next = nxt;
    // }
};

void printNode(Node* head){
    if(!head){
        cout << "Head pointer is NuLL, No Element in the list";
    }
    Node *curr = head;
    while(curr!=nullptr){
        cout << curr->data << " --> ";
        curr = curr->next;
    }
    cout << "Null";
}

Node *findMiddleNode(Node *head){
    Node *fast=head, *slow = head;
    while((fast!=nullptr) && (fast->next!=nullptr)){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
int main(){
    Node *head = new Node(40);
    head->next = new Node(50);
    head->next->next = new Node(100);
    head->next->next->next = new Node(500);
    head->next->next->next->next = new Node(80);
    Node *middle = findMiddleNode(head);
    cout <<"Middle of the Node is"<< middle->data; 
    return 0;
}