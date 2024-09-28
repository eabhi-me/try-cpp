#include<iostream>
#include<vector>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *AddNodeLast(Node* &head, int dt){
        if(head==nullptr){
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
    
Node* constructLL(vector<int>& arr) {
        Node *head = nullptr;
        for(int i = 0; i<arr.size();i++){
            head = AddNodeLast(head, arr[i]);
        }
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

int main(){
    vector<int> arr{1,4,5,7};
    Node *head;
    head = constructLL(arr);
    printNode(head);
    return 0;
}