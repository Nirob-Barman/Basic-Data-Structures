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

int maxHeight(Node *Root)
{
    if (Root == NULL)
        return 0;
    int leftSubTreeHeight = maxHeight(Root->left);
    int rightSubTreeHeight = maxHeight(Root->right);
    return max(leftSubTreeHeight, rightSubTreeHeight) + 1;
}

int main()
{
    Node *Root = inputTree();
    cout << maxHeight(Root) << endl;
    return 0;
}

/*
input:
10 20 50 30
40 70 60 -1 -1 -1
-1 -1 80 -1 -1 -1 -1
output: 4
input:
10 20 30
70 150 120 40
80 90 130 -1 60 50
-1 -1 100 -1 -1 140 -1 -1 -1 -1
-1 110 -1 -1
-1 -1
output: 5
*/