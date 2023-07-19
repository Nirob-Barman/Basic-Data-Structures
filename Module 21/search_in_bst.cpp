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

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->value == x)
        return true;

    if (x < root->value)
    {
        // bool leftSubTree = search(root->left, x);
        // // if (leftSubTree == true)
        // //     return true;
        // // else
        // //     return false;
        // return leftSubTree;

        return search(root->left, x);
    }
    else
        return search(root->right, x);
}

int main()
{
    Node *root = inputTree();
    level_order_print(root);
    cout << endl;

    if (search(root, 6))
        cout << "Yes, Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}