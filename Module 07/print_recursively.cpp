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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

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

void print_reverse_method(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    print_reverse_method(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
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
    cout << endl;
    print_linked_list(head);
    cout << endl;

    print_reverse_method(head, head);
    print_linked_list(head);
    return 0;
}