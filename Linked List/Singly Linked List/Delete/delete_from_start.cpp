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

void deleteFromStart(Node** start_node) {
    *start_node = start_node->next;

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

    printList(first);

    deleteFromStart(&first);

    printList(first);

    return 0;
}
