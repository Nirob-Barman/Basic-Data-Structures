#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    list<int> linkedList;
    void push(int value)
    {
        linkedList.push_back(value);
    }
    void pop()
    {
        linkedList.pop_back();
    }
    int top()
    {
        return linkedList.back();
    }
    int size()
    {
        return linkedList.size();
    }
    bool empty()
    {
        if (linkedList.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack Stack;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        Stack.push(value);
    }
    while (!Stack.empty())
    {
        cout << Stack.top() << endl;
        Stack.pop();
    }
    return 0;
}