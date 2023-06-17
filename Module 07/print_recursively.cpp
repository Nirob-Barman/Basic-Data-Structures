#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int _value)
    {
        this->value = _value;
        this->next = NULL;
    }
};

void print_recursion(Node *node)
{
    // base case
    if (node == NULL)
        return;
    cout << node->value << " "; // print the value
    print_recursion(node->next);
}

void print_reverse(Node *node)
{
    // base case
    if (node == NULL)
        return;
    print_reverse(node->next);
    cout << node->value << " "; // print reversely
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_recursion(head);
    cout << endl;
    print_reverse(head);

    return 0;
}