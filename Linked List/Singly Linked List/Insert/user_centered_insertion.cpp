#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
};

Node *insertIntoList(Node *last_node, int data)
{

    Node *new_node = new Node();

    last_node->next = new_node;

    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << "\t";
        n = n->next;
    }
}

int main()
{
    int data;
    Node *first = new Node();
    first->data = 0;

    Node *current = first;

    while (true)
    {
        cout << "\nEnter number to enter into the list: ";
        cin >> data;

        current = insertIntoList(current, data);

        printList(first);
    }

    return 0;
}
