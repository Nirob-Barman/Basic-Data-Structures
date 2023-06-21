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

void insert_at_head(Node *&head, Node *tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;

    head->prev = newNode;
    head = newNode;
}

void insert_at_any_position(Node *head, int position, int value)
{
    Node *newNode = new Node(value);

    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    // cout << temp->value << endl;
    newNode->next = temp->next; // 100->30
    temp->next = newNode;       // 20->100

    newNode->next->prev = newNode; // 100<-30
    newNode->prev = temp;          // 20<-100
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        // insert_at_head(head, tail, value);
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;

    newNode->prev = tail;
    tail = tail->next;
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

    int pos, value;
    cin >> pos >> value;
    if (pos == 0)
        insert_at_head(head, tail, value);
    else if (pos == size(head))
        insert_at_tail(head, tail, value);
    else if (pos > size(head))
        cout << "Invalid connection" << endl;
    else
        insert_at_any_position(head, pos, value);

    print_doubly_linked_list(head);
    print_doubly_linked_list_reverse(tail);
    return 0;
}

// input
// 3 100
// 4 100
// 0 100
// 5 100 -> invalid connection