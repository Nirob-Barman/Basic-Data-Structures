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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head, tail, value);
    }
    print_linked_list(head);

    // for (int i = 0;i<n;i++)
    // {
    //     for (int j = i + 1;j<n;j++)
    //     {
    //         if(a[i]>a[j])
    //         swap(a[i], a[j]);
    //     }
    // }
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        // cout << "Node " << i->value << endl;
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            // cout <<i->value << " "<<j->value << endl;
            if (i->value > j->value)
                swap(i->value, j->value);
        }
        // cout<<endl;
    }
    print_linked_list(head);
    return 0;
}