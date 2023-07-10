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

int countLeafNodes(Node *Root)
{
    if (Root == NULL)
        return 0;

    if (Root->left == NULL && Root->right == NULL)
    {
        return 1;
    }
    else
    {
        int leftChildCount = countLeafNodes(Root->left);
        int rightChildCount = countLeafNodes(Root->right);
        return leftChildCount + rightChildCount;
    }
}

int main()
{
    Node *Root = inputTree();
    cout << countLeafNodes(Root) << endl;
    return 0;
}

/*
input:
10 20 50 30
40 70 60 -1 -1 -1
-1 -1 80 -1 -1 -1 -1
output: 4
*/