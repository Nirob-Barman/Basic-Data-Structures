#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int value)
    {
        v.push_back(value);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack Stack;
    Stack.push(10);
    Stack.push(20);
    cout << Stack.top() << endl;
    Stack.pop();
    cout << Stack.top() << endl;

    // Stack.pop();
    // cout << Stack.top() << endl;

    Stack.pop();
    if (Stack.empty() == false)
        cout << Stack.top() << endl;

    cout << "--------" << endl;
    myStack Stack2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin>>value;
        Stack2.push(value);
    }

    while (!Stack2.empty())
    {
        cout << Stack2.top() << endl;
        Stack2.pop();
    }

    return 0;
}