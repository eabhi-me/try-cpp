#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int x){
        this->data=x; 
        this->next=nullptr;
    }
};
class Stack{
    public:
        Node* top;
        Stack(){
            top = nullptr;
        }

        void push(int d){
            if(top==nullptr){
                cout << "Pushing the element " << d <<endl;
                top = new Node(d);
                return;
            }
            Node *temp = new Node(d);
            temp->next = top;
            top = temp;
            cout << "Pushing the element " << d <<endl;
        }

        int pop(){
            if(top==nullptr){
                cout << "Underflow"<<endl;
                return -1;
            }
            Node *temp = top;
            top = top->next;
            cout << "Poping the element ";
            cout << temp->data;
            free(temp);

        }
        bool isEmpty(){
            if(top==nullptr){
                return true;
            }
            return false;
        }
        int peek(){
            cout << top->data<<endl;
        }
        int display(){
            Node *curr = top;
            while (curr!=nullptr){
                cout << curr->data <<"-->";
                curr = curr->next;
            }
            cout<< "Null"<<endl;
        }
};

int main(){
    Stack s1;
    s1.push(50);
    s1.push(30);
    s1.display();
    s1.pop();
    return 0;
}


