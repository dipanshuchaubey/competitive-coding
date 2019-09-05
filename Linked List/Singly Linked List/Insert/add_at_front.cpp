#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << "\t";
        n = n->next;
    }
}

void insertAtFront(Node **start_node, int data)
{
    Node *new_node = new Node();

    new_node->data = data;
    new_node->next = *start_node;

    *start_node = new_node;
}

int main()
{

    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout << "Default List: \t";
    printList(first);

    insertAtFront(&first, 0);

    cout << "\nList after inserting at front: \t";
    printList(first);

    return 0;
}
