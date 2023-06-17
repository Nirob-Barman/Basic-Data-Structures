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

void insert_at_tail(Node *&head, int _value)
{
    Node *newNode = new Node(_value);

    if (head == NULL)
    {
        head = newNode;
        // cout << "Insert at head" << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp in the last node
    temp->next = newNode;
    // cout << endl;
    // cout << "Insert at tail successfully" << endl;
}

void print_linked_list(Node *head)
{
    cout << "Your linked list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int value;
    Node *head = NULL;
    while (true)
    {
        cin >> value;
        // cout<<value << endl;
        if (value == -1)
            break;

        insert_at_tail(head, value);
    }
    print_linked_list(head);
    return 0;
}