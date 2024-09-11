#include<iostream>
using namespace std;
struct Node{
    string data;
    Node *next;
    Node(string d){
        data = d;
        next = nullptr;
    }
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
    cout << "Null" <<endl;
}

Node *InsertNodeInSequence(Node* head, string d){
    if(head==nullptr){
        Node *newNode = new Node(d);
        head = newNode;
        return head;
    }
    if(head->data>d){
        Node *newNode = new Node(d);
        newNode->next = head;
        head = newNode;
        return head;
    }
    Node *curr = head;
    while(curr->next!=nullptr && curr->next->data<d){
        curr = curr->next;
    }
    Node *newNode = new Node(d);
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

struct dNode{
    string data;
    dNode *next;
    dNode *prev;
    dNode(string d){
        data = d;
        next = nullptr;
        prev = nullptr;
    }
};

void printdNode(dNode* head){
    if(!head){
        cout << "Head pointer is NuLL, No Element in the list";
    }
    dNode *curr = head;
    cout << "Null <--> ";
    while(curr!=nullptr){
        cout << curr->data << " <--> ";
        curr = curr->next;
    }
    cout << "Null" <<endl;
}

dNode *InsertdNodeInSequence(dNode *head, string dt){
    if(head==nullptr){
        dNode *temp = new dNode(dt);
        head = temp;
    }
    if(head->data>dt){
        dNode *newdNode = new dNode(dt);
        newdNode->next = head;
        if((head) != NULL)
        (head)->prev = newdNode;
        head = newdNode;
        return head;
    }
    dNode *curr = head;
    while(curr->next!=nullptr && curr->next->data<dt){
        curr = curr->next;
    }
    dNode *newdNode = new dNode(dt);
    newdNode->next = curr->next;
    curr->next = newdNode;
    newdNode->prev=curr;
    return head;
}

dNode *ReverseNode(dNode *head){
    dNode *temp = nullptr;
    dNode *curr = head;
    while(curr){
        temp = curr->prev; // Storing the values of prev in temp
        curr->prev = curr->next; // swaping the pointer
        curr->next = temp;   // swaping the pointer
        curr = curr->prev; // Move to next node
    }
    if(temp){
        head = temp->prev; // check if the null node or only one node
    }
    return head;

}

int main(){
    Node *head1 = nullptr;
    head1 = InsertNodeInSequence(head1,"Ram");
    head1 = InsertNodeInSequence(head1,"Suresh");
    printNode(head1);

    Node *head2 = nullptr;
    head2 = InsertNodeInSequence(head2,"Janak");
    head2 = InsertNodeInSequence(head2,"Jay");
    printNode(head2);

    cout << endl << "New Double Node" <<endl;
    dNode *head3 = new dNode("Sambhu");
    head3 = InsertdNodeInSequence(head3,"Shayam");
    head3 = InsertdNodeInSequence(head3,"ZOO");
    printdNode(head3);

    head3 = ReverseNode(head3);
    printdNode(head3);

    return 0;
}