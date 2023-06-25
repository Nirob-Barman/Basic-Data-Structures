#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> myStack;
    // myStack.push(10);
    // myStack.push(20);
    // cout << myStack.top() << endl;
    // myStack.pop();
    // cout << myStack.top() << endl;
    // myStack.pop();

    // if (!myStack.empty())
    //     cout << myStack.top() << endl;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        myStack.push(value);
    }

    while (!myStack.empty())
    {
        cout << myStack.top() << endl;
        myStack.pop();
    }

    return 0;
}