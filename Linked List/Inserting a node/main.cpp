#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;
    Node *new_node = new Node();
    new_node->data = 10;
    new_node->next = NULL;

    new_node = head;

    while (new_node)
    {
        cout << new_node->data;
    }
}