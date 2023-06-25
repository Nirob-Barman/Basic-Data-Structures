#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    Node(int _value)
    {
        this->value = _value;
        this->prev = NULL;
        this->next = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sizeCount = 0;

    void push(int value)
    {
        sizeCount++; // keep track of the number of nodes in the stack
        // insert at tail
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        // must ensure that the stack has at least one element
        sizeCount--;

        // delete at tail
        Node *deletedNode = tail;
        tail = tail->prev;

        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;

        delete deletedNode;
    }
    int top()
    {
        // must ensure that the stack has at least one element
        return tail->value;
    }
    int size()
    {
        return sizeCount;
    }
    bool empty()
    {
        if (sizeCount == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack Stack;

    // debugging the error message
    // Stack.push(10);
    // Stack.push(20);
    // cout << Stack.top() << endl;
    // Stack.pop();
    // cout << Stack.top() << endl;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        Stack.push(value);
    }
    while (!Stack.empty())
    {
        cout << Stack.top() << endl;
        Stack.pop();
    }
    return 0;
}