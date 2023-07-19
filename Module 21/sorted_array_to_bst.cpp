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

Node *arrayToBst(int a[], int n, int left, int right)
{
    if (left > right)
        return NULL;
    int mid = (left + right) / 2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = arrayToBst(a, n, left, mid - 1);
    Node *rightRoot = arrayToBst(a, n, mid + 1, right);

    root->left = leftRoot;
    root->right = rightRoot;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    Node *root = arrayToBst(a, n, 0, n - 1);

    level_order_print(root);
    cout << endl;
    // // int x;
    // // cin >> x;
    // // insertInBst(root, x);

    // insertInBst(root, 13);
    // insertInBst(root, 32);
    // insertInBst(root, 27);
    // insertInBst(root, 22);
    // level_order_print(root);
    // cout << endl;
    return 0;
}

// input
// 6
// 2 5 8 12 15 18
// output
// 8 2 15 5 12 18