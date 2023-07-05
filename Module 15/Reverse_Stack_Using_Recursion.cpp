#include <bits/stdc++.h>

using namespace std;

void reverseStack(stack<int> &st)
{
    // Write your code here
    if (st.empty())
        return;
    int top = st.top();
    st.pop();

    reverseStack(st);
    // assume reversed stack except first top

    stack<int> tempStack;
    while (!st.empty())
    {
        tempStack.push(st.top());
        st.pop();
    }
    tempStack.push(top);

    while (!tempStack.empty())
    {
        st.push(tempStack.top());
        tempStack.pop();
    }
}

int main()
{
    int n;
    cin >> n;

    stack<int> myStack;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        myStack.push(num);
    }

    cout << "Original Stack: ";
    stack<int> tempStack = myStack;
    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    reverseStack(myStack);

    cout << "Reversed Stack: ";
    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;
    return 0;
}