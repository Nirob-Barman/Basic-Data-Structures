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

void delete_head(Node *&head)
{
    // if (head == NULL)
    // {
    //     cout << "Invalid Index" << endl;
    //     cout << "Head is not available" << endl;
    //     return;
    // }
    Node *deletedNode = head;
    head = head->next;
    delete deletedNode;
    // cout << "Delete head successfully" << endl;
}

void delete_from_position(Node *head, int position)
{
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    // cout << "Delete successfully from position " << position << endl;
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

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);

    int pos;
    cin >> pos;
    if (pos >= size(head))
        cout << "Invalid Index" << endl;
    else if (pos == 0)
        delete_head(head);
    else
        delete_from_position(head, pos);

    print_linked_list(head);

    return 0;
}