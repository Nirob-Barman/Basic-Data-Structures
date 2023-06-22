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

// void delete_at_head(Node *&head)
// {
//     Node *deleteNode = head;
//     head = head->next;
//     delete deleteNode;
//     head->prev = NULL;
// }

void delete_at_head(Node *&head, Node *&tail)
{

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

void delete_at_position(Node *head, int position)
{
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;

    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete deleteNode;
}

// void delete_at_tail(Node *&tail)
// {
//     Node *deleteNode = tail;
//     tail = tail->prev;
//     delete deleteNode;

//     tail->next = NULL;
// }

void delete_at_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

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

int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connection
    head->next = a;

    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = c;

    c->prev = b;

    int pos;
    cin >> pos;
    // cout << pos << endl;

    if (pos >= size(head))
        cout << "Invalid connection" << endl;
    else if (pos == 0)
    {
        // delete_at_head(head);
        delete_at_head(head, tail);
    }
    else if (pos == size(head) - 1)
    {
        // delete_at_tail(tail);
        delete_at_tail(head, tail);
    }
    else
        delete_at_position(head, pos);

    print_doubly_linked_list(head);
    print_doubly_linked_list_reverse(tail);
    return 0;
}

// input
// 0 -> head deletion
// 4 -> invalid connection
// 3 -> tail deletion
//