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

    // connection
    head->next = a;
    a->next = b;
    b->next = c;
    // c->next = a;
    // c->next = b;
    // c->next = head;
    // c->next = c;

    // no cycle
    c->next = NULL;

    Node *slow = head;
    Node *fast = head;

    bool cycle = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            cycle = true;
            // cout << "Cycles detected" << endl;
            break;
        }
    }
    if (cycle)
        cout << "Cycles detected" << endl;
    else
        cout << "No cycles detected" << endl;

    return 0;
}