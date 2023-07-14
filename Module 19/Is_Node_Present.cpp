#include <bits/stdc++.h>

using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
        return false;

    if (root->data == x)
        return true;

    bool isPresentLeft = isNodePresent(root->left, x);

    bool isPresentRight = isNodePresent(root->right, x);

    // if (isPresentLeft || isPresentRight)
    //     return true;
    // else
    //     return false;

    return (isPresentLeft || isPresentRight);
}

int main()
{
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(3);
    root->left = new BinaryTreeNode<int>(6);
    root->right = new BinaryTreeNode<int>(8);
    root->left->left = new BinaryTreeNode<int>(2);
    root->left->right = new BinaryTreeNode<int>(11);
    root->right->right = new BinaryTreeNode<int>(13);

    int targetValue;
    cin >> targetValue;
    bool isPresent = isNodePresent(root, targetValue);

    if (isPresent)
        cout << "Node with value " << targetValue << " is present in the tree." << endl;
    else
        cout << "Node with value " << targetValue << " is not present in the tree." << endl;
    return 0;
}