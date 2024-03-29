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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int value)
    {
        sz++;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deletedNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deletedNode;
            return;
        }
        head->prev = NULL;
        delete deletedNode;
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myQueue q;

    int t;
    cin >> t;
    while (t--)
    {
        int value;
        cin >> value;
        q.push(value);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}