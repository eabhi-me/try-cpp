#include <iostream>

struct Node {
    int data;
    Node* next;
};

void printList(Node* head) {
    if (head == nullptr) {
        return;
    }
    std::cout << head->data << "->";
    printList(head->next); 
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, nullptr}}};
    printList(head);
    return 0;
}
