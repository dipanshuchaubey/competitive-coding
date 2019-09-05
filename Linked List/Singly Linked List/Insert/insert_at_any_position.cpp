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

void insertAtPosition(Node* start_node, int position, int data_to_enter) {
    int i = 1;

    while(start_node != NULL) {
        if(i == position-1) {
            Node* new_node = new Node();

            new_node->data = data_to_enter;
            new_node->next = start_node->next;

            start_node->next = new_node;
            break;
        }

        i++;
        start_node = start_node->next;

    }
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

    int position;
    int data_to_enter;

    cout << "\nEnter position at which new node will be inserted: \t";
    cin >> position;

    cout << "\nEnter data that will be inserted: \t";
    cin >> data_to_enter;

    insertAtPosition(first, position, data_to_enter);

    cout << "\nList after inserting at a random position: \t";
    printList(first);

    return 0;
}
