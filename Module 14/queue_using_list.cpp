#include <bits/stdc++.h>

using namespace std;

class myQueue
{
public:
    list<int> linkedList;
    void push(int value)
    {
        linkedList.push_back(value);
    }
    void pop()
    {
        linkedList.pop_front();
    }
    int front()
    {
        return linkedList.front();
    }
    int size()
    {
        return linkedList.size();
    }
    bool empty()
    {
        // if (linkedList.size() == 0)
        //     return true;
        // else
        //     return false;
        return linkedList.empty();
    }
};

int main()
{
    myQueue q;

    int t;
    cin >> t;
    while (t--)
    {
        int value;
        cin >> value;
        q.push(value);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    // front or pop error handling
    if (!q.empty())
    {
        cout << q.front() << endl;
    }

    return 0;
}