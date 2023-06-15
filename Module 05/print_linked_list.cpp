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

    // cout << head->value << endl;
    // cout << head->next->value << endl;
    // cout << head->next->next->value << endl;
    // cout << head->next->next->next->value << endl;
    // cout << head->next->next->next->next->value << endl;

    // while (head != NULL)
    // {
    //     cout << head->value << endl;
    //     head = head->next;
    // }
    // while (head != NULL)
    // {
    //     cout << head->value << endl;
    //     head = head->next;
    // }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }

    return 0;
}