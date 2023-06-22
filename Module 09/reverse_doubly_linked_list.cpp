#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int _value)
    {
        this->value = _value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_doubly_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_doubly_linked_list_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void print_reverse_method(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    // connection
    head->next = a;

    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = c;

    c->prev = b;
    c->next = d;

    d->prev = c;

    print_doubly_linked_list(head);
    print_doubly_linked_list_reverse(tail);

    cout << endl
         << endl;

    print_doubly_linked_list(head);
    print_reverse_method(head, tail);
    print_doubly_linked_list(head);
    return 0;
}