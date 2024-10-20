#include<iostream>
using namespace std; 

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next =nullptr;
    }
};

void printNode(Node* head){
    if(!head){
        cout << "Head pointer is NuLL, No Element in the list";
        return;
    }
    Node *curr = head;
    while(curr!=nullptr){
        cout << curr->data << " --> ";
        curr = curr->next;
    }
    cout << "Null"<<endl;
}

void printNodeRecursive(Node* head){
    if(head==nullptr){
        cout << "Null";
        return;
    }
    cout<<head->data<<"-->";
    printNodeRecursive(head->next);
    
}

// No Need to "Node* &head" as we overrite the head form return head
Node *AddNodeLast(Node* head, int dt) {
    if (head == nullptr) {
        head = new Node(dt);
        return head;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new Node(dt);
    return head;
}

Node *AddNodestart(Node* head, int dt){
    Node *temp = new Node(dt);
    if(!head){
        head = temp;
        return head;
    }
    temp->next = head;
    head = temp;
    return head;
}

Node *DeleteNodeEnd(Node* head){
    if(head==nullptr){
        cout << "List is already empty"<<endl;
        return nullptr;
    }
    else if(head->next=nullptr){
        delete head;
        return nullptr;
    }
    Node *curr = head;
    while(curr->next->next!=nullptr){
        curr = curr->next;
    }
    delete curr->next;
    curr->next = nullptr;
    return head;
}

Node *DeleteNodeStart(Node* head){
    if(head->next==nullptr){
        cout << "Empty and cannot delete";
        return head;
    }
    Node *temp = head; 
    head = temp->next;
    delete temp;
    return head;
}

Node *InsertNodeInSequence(Node *head, int ele){
    if(head==nullptr){
        head = new Node(ele);
        return head;
    }

    else if(head->data>ele){
        Node *newNode1 = new Node(ele);
        newNode1->next=head;
        head=newNode1;
        return head;
    }
    Node *temp = head;

    //temp->next->data<ele && temp->next!=nullptr -- this cause segmentstion falut
    // order of logic is matter first check the temp-next is not null then check ascess that temp->next->data
    while(temp->next!=nullptr && temp->next->data<ele){
        temp = temp->next;
    }
    Node *newNode = new Node(ele);
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}


int main(){
    Node *head = nullptr; 
    printNode(head);
    cout << endl;
    head = AddNodeLast(head, 40);
    head = AddNodestart(head,10);
    head = InsertNodeInSequence(head,50);
    printNode(head);

    cout <<endl<< "delete"<<endl;
    head = DeleteNodeStart(head);
    // head = DeleteNodeEnd(head);
    printNode(head);
    cout<<endl << "Squential Insert" << endl;
    head = InsertNodeInSequence(head,45);
    head = InsertNodeInSequence(head,50);
    head = InsertNodeInSequence(head,5);
    head = InsertNodeInSequence(head,20);
    printNode(head);
    return 0;
}