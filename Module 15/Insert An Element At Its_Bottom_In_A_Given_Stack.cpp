#include <bits/stdc++.h>

using namespace std;

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    // Write your code here.
    stack<int> newStack;

    while (!myStack.empty())
    {
        newStack.push(myStack.top());
        myStack.pop();
    }
    newStack.push(x);

    while (!newStack.empty())
    {
        myStack.push(newStack.top());
        newStack.pop();
    }
    return myStack;
}

int main()
{
    stack<int> myStack;

    myStack.push(3);
    myStack.push(6);
    myStack.push(9);

    int x;
    cout << "Enter an element to push at the bottom: ";
    cin >> x;
    cout << endl;

    stack<int> modifiedStack = pushAtBottom(myStack, x);

    cout << "Modified Stack: ";
    while (!modifiedStack.empty())
    {
        cout << modifiedStack.top() << " ";
        modifiedStack.pop();
    }
    cout << endl;
    return 0;
}