#include<iostream>
#include<string>
using namespace std;

struct Node{
    string data;
    Node *Next = nullptr;
};

Node *Head  = nullptr;

void deletefromstart(Node *Head){

}

int main(){
    Node *Next = new Node();
    Next->data = "Hello";
    Head->Next = Next;

}
