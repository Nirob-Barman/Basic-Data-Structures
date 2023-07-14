#include <bits/stdc++.h>

using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    bool freq[3005] = {false};
    queue<pair<TreeNode<int> *, int>> q;
    // q.push({root, 1});
    if (root)
        q.push({root, 1});
    vector<int> v;
    while (!q.empty())
    {
        pair<TreeNode<int> *, int> parent = q.front();

        q.pop();
        TreeNode<int> *node = parent.first;
        int level = parent.second;
        if (freq[level] == false)
        {
            v.push_back(node->data);
            freq[level] = true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    return v;
}

int main()
{

    return 0;
}