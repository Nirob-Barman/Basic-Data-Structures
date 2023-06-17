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

void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    // cout << "Insert at head successfully" << endl;
}

void insert_at_position(Node *head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;

        // Error handling, otherwise segmentation error
        if (temp == NULL)
        {
            // cout << "Invalid Index" << endl;
            return;
        }
    }
    // cout<< temp->value << endl; // temp = position - 1

    newNode->next = temp->next;
    temp->next = newNode;

    // cout << endl;
    // cout << "Insert at position " << position << endl;
}
void insert_at_tail(Node *&head, Node *&tail, int _value)
{
    Node *newNode = new Node(_value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
    // cout << "Insert at tail successfully" << endl;
}

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
    Node *d = new Node(50);
    Node *tail = d;

    head->next = a;
    // cout << a->value << endl;
    a->next = b;
    b->next = c;
    // cout<<a->next->value << endl;
    // cout << b->value << endl;
    c->next = d;

    print_linked_list(head);
    cout << "Tail -> " << tail->value << endl;

    int pos, value;
    cin >> pos >> value;
    if (pos > size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    {
        insert_at_head(head, value);
    }
    else if (pos == size(head))
    {
        insert_at_tail(head, tail, value);
    }
    else
    {
        insert_at_position(head, 3, 100);
    }

    print_linked_list(head);
    cout << "Tail -> " << tail->value << endl;
    return 0;
}