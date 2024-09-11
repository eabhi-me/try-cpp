#include<iostream>
#include<string>
using namespace std;

struct Node{
    string data;
    Node *next = nullptr;
    Node(string x){
        data=x;
    }
    Node header(int n, string what){
        int count = n;
        string dataDescription = what;
    }
};

Node *InsertNodeInSequence(Node *head, string ele){
    if(head==nullptr){
        head = new Node(ele);
        return head;
    }

    if(head->data>ele){
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

int searchNodePos(Node* head, string Name){
    if(head==nullptr){
        return -1;
    }
    int pos = 1;
    Node *curr = head;
    while(curr!=nullptr){
        if(curr->data==Name){
            return pos;
        }
        else{
            curr=curr->next;
            pos++;
        }
    }
    return -1;
}

int searchNodeRecursive(Node* head, string Name){
    if(head==nullptr){
        return -1;
    }
    if(head->data==Name){
        return 1;
    }
    else{
       int res =  searchNodeRecursive(head->next,Name);
       if(res==-1){
        return -1;
       }
       else{
        return res+1;
       }
    }
    
}

int main(){
    Node *head = nullptr;
    head = InsertNodeInSequence(head,"Abhi");
    head = InsertNodeInSequence(head,"Hello");
    head = InsertNodeInSequence(head,"Mayur");
    cout << "Name found at pos " << searchNodeRecursive(head,"Hello")<<endl;
    printNode(head);
    return 0;
}
