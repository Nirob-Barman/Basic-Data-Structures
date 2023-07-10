#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int _value)
    {
        this->value = _value;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order_print(Node *Root)
{

    if (Root == NULL)
    {
        cout << "Root is NULL" << endl;
        cout << "No tree structure" << endl;
        return;
    }

    queue<Node *> q;
    q.push(Root);

    while (!q.empty())
    {
        Node *frontNode = q.front();
        q.pop();

        // process the children / frontNode
        cout << frontNode->value << " ";

        // if (frontNode->left != NULL)
        //     q.push(frontNode->left);
        // if (frontNode->right != NULL)
        //     q.push(frontNode->right);

        // Null returns false. So not NULL means true indicates a node
        if (frontNode->left)
            q.push(frontNode->left);
        if (frontNode->right)
            q.push(frontNode->right);

        // if (frontNode->right)
        //     q.push(frontNode->right);
        // if (frontNode->left)
        //     q.push(frontNode->left);
    }
}

int main()
{
    Node *Root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    Root->left = a;
    Root->right = b;

    a->left = c;
    a->right = h;

    c->right = e;

    b->right = d;

    d->left = f;
    d->right = g;

    h->right = i;

    level_order_print(Root);

    return 0;
}