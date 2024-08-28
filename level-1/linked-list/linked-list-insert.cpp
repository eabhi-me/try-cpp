#include<iostream>
using namespace std;

// Basic Structre of Node
struct Node{
    int data;
    Node* next;
};

// basic Declarion of as Null pointer as Global Node which use anywhere in function
Node *head = nullptr;

// Function to add Node at Begin
void insertNodeAtBegin(int x){
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

// Function to insert node at end
void insertNodeAtEnd(int x){
    Node *temp = new Node();
    temp->data = x;
    if(head==nullptr){
        head = temp;
        // head->next = nullptr;   No need to declare
    }
    Node *curr = head;
    while(curr->next!=nullptr){
        curr = curr->next;
    }
    curr->next = temp;

    // No need for this
    // curr->next = nullptr;
}

// not complete

void insertNodeAtNPos(int val, int pos){
    if(pos==1){
        Node *temp = new Node();
        temp->data = val;
        temp->next = head;
        head = temp;    // Update head to point to the new node
        return;
    }

    Node *curr = head;
    for(int i = 1; i<pos-1 && curr!=nullptr; i++){
        curr = curr->next;
    }
    if(curr==nullptr){
        cout << "Not able to Insert at That Position as there are less node" << endl;
        return ;
    }
    Node *temp = new Node();
    temp->data = val;
    temp->next = curr->next;
    curr->next = temp;

}

void deleteNodeFromStart(Node*& head){
     if(head == nullptr) {
        cout << "List is already empty" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}

void deleteNodefromEnd(Node*& head){
    Node *temp = head;
    while(temp->next->next!=nullptr){
        temp  = temp->next;
    }
    delete temp->next->next;
    temp->next = nullptr;
}



// declaring a function to traverse node and print Linked list
void printNode(Node *head){
    Node *curr = head;
    while(curr!=nullptr){
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL";
}


int main(){
    insertNodeAtBegin(12);
    insertNodeAtBegin(45);
    insertNodeAtEnd(100);
    insertNodeAtEnd(20);
    insertNodeAtNPos(50,5);
    printNode(head);
    cout<<endl << "After Deletion" << endl;
    deleteNodeFromStart(head);


    
    printNode(head);
    return 0;
}
