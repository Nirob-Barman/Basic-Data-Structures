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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int value)
    {
        sz++; // increment the size of the queue and keep track of the queue size
        Node *newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--; // decrease the size of the queue
        Node *deletedNode = head;
        head = head->next;
        delete deletedNode;
        if (head == NULL)
        {
            tail = NULL;
        }
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
    // q.push(10);
    // q.pop();
    // q.pop();
    // q.pop();

    // q.push(10);
    // cout << q.front() << endl;

    // q.push(10);
    // q.push(20);
    // q.push(30);
    // cout << "Front: " << q.front() << endl;
    // q.pop();
    // cout << "Front: " << q.front() << endl;

    // q.pop();
    // cout << "Front: " << q.front() << endl;

    // q.pop();
    // // cout << "Front: " << q.front() << endl;
    // // q.pop();

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