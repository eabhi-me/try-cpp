#include<iostream>
using namespace std;

// double linked list;
class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int val){
        this->data = val;
        this->next=nullptr;
        this->prev = nullptr;
    }
};

void printNode(Node* head){
    if(!head){
        cout << "Head pointer is NuLL, No Element in the list";
    }
    Node *curr = head;
    cout << "Null <--> ";
    while(curr!=nullptr){
        cout << curr->data << " <--> ";
        curr = curr->next;
    }
    cout << "Null" <<endl;
}

Node *InsertNodeInSequence(Node *head, int dt){
    if(head==nullptr){
        Node *temp = new Node(dt);
        head = temp;
    }
    if(head->data>dt){
        Node *newNode = new Node(dt);
        newNode->next = head;
        if((head) != NULL)
        (head)->prev = newNode;
        head = newNode;
        return head;
    }
    Node *curr = head;
    while(curr->next!=nullptr && curr->next->data<dt){
        curr = curr->next;
    }
    Node *newNode = new Node(dt);
    newNode->next = curr->next;
    curr->next = newNode;
    newNode->prev=curr;
    return head;
}

Node *deleteNodeBegin(Node *head){
    Node *temp = head;
    head->next->prev=nullptr;
    head = temp->next;

}

int main(){
    Node *head1 = nullptr;
    head1 = InsertNodeInSequence(head1,45);
    head1 = InsertNodeInSequence(head1,10);
    head1 = InsertNodeInSequence(head1,79);

}
