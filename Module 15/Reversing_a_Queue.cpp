#include <bits/stdc++.h>

using namespace std;

queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.
    stack<int> tempStack;

    while (!q.empty())
    {
        tempStack.push(q.front());
        q.pop();
    }

    while (!tempStack.empty())
    {
        q.push(tempStack.top());
        tempStack.pop();
    }
    return q;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        queue<int> myQueue;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            myQueue.push(num);
        }

        cout << "Original Queue: ";
        queue<int> tempQueue = myQueue;
        while (!tempQueue.empty())
        {
            cout << tempQueue.front() << " ";
            tempQueue.pop();
        }
        cout << endl;

        queue<int> reversedQueue = reverseQueue(myQueue);

        cout << "Reversed Queue: ";
        while (!reversedQueue.empty())
        {
            cout << reversedQueue.front() << " ";
            reversedQueue.pop();
        }
        cout << endl;
    }
    return 0;
}