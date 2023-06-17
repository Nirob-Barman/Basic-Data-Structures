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
    cout << "Insert at head successfully" << endl;
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
            cout << "Invalid Index" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl;
    cout << "Insert at position " << position << endl;
}

void insert_at_tail(Node *&head, int _value)
{
    Node *newNode = new Node(_value);

    if (head == NULL)
    {
        head = newNode;
        cout << "Insert at head" << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp in the last node
    temp->next = newNode;
    cout << endl;
    cout << "Insert at tail successfully" << endl;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Invalid Index" << endl;
        cout << "Head is not available" << endl;
        return;
    }
    Node *deletedNode = head;
    head = head->next;
    delete deletedNode;
    cout << "Delete head successfully" << endl;
}

void delete_from_position(Node *head, int position)
{
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Index" << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << "Invalid Index" << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << "Delete successfully from position " << position << endl;
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
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at tail" << endl;           // done
        cout << "Option 2: Insert at head" << endl;           // done
        cout << "Option 3: Insert at any position" << endl;   // done
        cout << "Option 4: Delete head" << endl;              // done
        cout << "Option 5: Delete from any position" << endl; // done
        cout << "Option 6: Print Linked List" << endl;        // done
        cout << "Option 7: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter the value: ";
            int value;
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (op == 2)
        {
            cout << "Enter the value: " << endl;
            int value;
            cin >> value;
            insert_at_head(head, value);
        }
        else if (op == 3)
        {
            int pos, value;
            cout << "Enter Position: ";
            cin >> pos;
            cout << "Value:";
            cin >> value;
            if (pos == 0)
            {
                cout << "You can't insert at head position" << endl;
                cout << "Inserting at head position" << endl;
                insert_at_head(head, value);
            }
            else
                insert_at_position(head, pos, value);
        }
        else if (op == 4)
        {
            delete_head(head);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter Position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
                delete_from_position(head, pos);
        }
        else if (op == 6)
            print_linked_list(head);
        else if (op == 7)
            break;
    }

    return 0;
}