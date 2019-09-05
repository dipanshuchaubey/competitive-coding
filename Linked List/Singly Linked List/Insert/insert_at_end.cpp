#include <iostream>
using namespace std;

class Node {
public:
    Node* next;
    int data;
};

void printList(Node* n) {
    while(n != NULL) {
        cout << n->data << "\t";
        n = n->next;
    }
}

void insertAtEnd(Node* end_node, int data) {
    Node* new_end_node = new Node();

    new_end_node->data = data;
    new_end_node->next = NULL;

    end_node->next = new_end_node;
}

int main() {

    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    first->data = 1;
    first->next = second;


    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout << "Default List: \t";
    printList(first);

    insertAtEnd(third, 4);

    cout << "\nList after inserting at end: \t";
    printList(first);

    return 0;
}
