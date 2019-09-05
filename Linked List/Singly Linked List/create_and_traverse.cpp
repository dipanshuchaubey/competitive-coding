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

int main() {

    /* Initialize a node and assign it a NULL value */
    Node* first = NULL;
    /* Allocate the node a new memory location */
    first = new Node();

    /* Enter data */
    first->data = 1;

    /* Initialize a second node */
    Node* second = new Node();
    /* Point the first node to the address of second node */
    first->next = second;
    second->data = 2;

    Node* third = new Node();
    second->next = third;
    third-> data = 3;

    /*  Point the third node to NULL
        which indicates the end of the list
     */
    third->next = NULL;

    /* Print the linked list */
    printList(first);

    return 0;
}
