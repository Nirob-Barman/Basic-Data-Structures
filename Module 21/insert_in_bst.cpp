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

Node *inputTree()
{
    int value;
    cin >> value;
    Node *Root;
    if (value == -1)
        Root = NULL;
    else
        Root = new Node(value);

    queue<Node *> q;
    if (Root)
        q.push(Root);

    while (!q.empty())
    {
        Node *parentNode = q.front();
        q.pop();

        // processing
        int leftValue, rightValue;
        cin >> leftValue >> rightValue;

        Node *leftChild, *rightChild;
        if (leftValue == -1)
            leftChild = NULL;
        else
            leftChild = new Node(leftValue);

        if (rightValue == -1)
            rightChild = NULL;
        else
            rightChild = new Node(rightValue);

        parentNode->left = leftChild;
        parentNode->right = rightChild;

        if (parentNode->left)
            q.push(parentNode->left);
        if (parentNode->right)
            q.push(parentNode->right);
    }
    return Root;
}

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
    }
}

void insertInBst(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }

    if (x < root->value)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
            insertInBst(root->left, x);
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
            insertInBst(root->right, x);
    }
}

int main()
{
    Node *root = inputTree();
    level_order_print(root);
    cout << endl;
    // int x;
    // cin >> x;
    // insertInBst(root, x);

    insertInBst(root, 13);
    insertInBst(root, 32);
    insertInBst(root, 27);
    insertInBst(root, 22);
    level_order_print(root);
    cout << endl;
    return 0;
}

// input
// 20 10 30
// -1 15 25 35
// -1 -1 -1 -1 -1 -1
// output
// 20 10 30 15 25 35
// 20 10 30 15 25 35 13

// input
// 20 10 30
// -1 15 25 35
// -1 -1 -1 -1 -1 -1
// insertInBst(root, 13);
// insertInBst(root, 32);
// insertInBst(root, 27);
// insertInBst(root, 22);
// output
// 20 10 30 15 25 35
// 20 10 30 15 25 35 13 22 27 32