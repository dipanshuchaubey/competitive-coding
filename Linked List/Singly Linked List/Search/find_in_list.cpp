#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;
};

bool findInList(Node *n, int data)
{
    while (n != NULL)
    {
        if (n->data == data)
        {
            return true;
        }
        n = n->next;
    }
    return false;
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
    Node *start = new Node();
    Node *middle = new Node();
    Node *end = new Node();

    start->data = 1;
    start->next = middle;

    middle->data = 2;
    middle->next = end;

    end->data = 3;
    end->next = NULL;

    bool result = findInList(start, 0);

    result == true ? cout << "Found" : cout << "NOT Found";

    return 0;
}