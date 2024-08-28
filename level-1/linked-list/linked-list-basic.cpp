#include<iostream>
using namespace std;
// structing the node data type
struct Node {
    int data;
    Node *next; // A pointer that point to struct data type
    Node(int x){ // Constructor of structure
        data = x;
        next = nullptr; // pointer pointing to nullptr
    }
};

// declaring a function to traverse node and print Linked list
void printNode(Node *head){
    Node *curr = head;
    while(curr!=nullptr){
        cout << curr->data << "->";
        curr = curr->next;
    }
}
void printNodeRec(Node *head){
    if(head==nullptr){
        return;
    }
    cout <<head->data << "->";
    printNodeRec(head->next);
}

int main(){
    // One way of declaring the linked list simple
    // Node *head = new Node(10);
    // Node *temp1 = new Node(30);
    // Node *temp2 = new Node(40);
    // head->next = temp1;
    // temp1->next = temp2;
    // cout << head->data << "-->" << temp1->data << "-->" << temp2->data << endl;

    // Second way
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(40);
    // cout << head->data << "->" << head->next->data << "->" << head->next->next->data << endl;

    // calling the function to traverse and print the Node Element
    printNode(head);
    
    return 0;

}