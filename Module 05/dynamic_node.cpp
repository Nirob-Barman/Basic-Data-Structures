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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);

    head->next = a; // a is already pointer
    cout << head->value << endl;
    // cout<<(*(*head).next).value << endl;
    cout << head->next->value << endl;

    return 0;
}