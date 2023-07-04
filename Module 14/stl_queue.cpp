#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
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
    return 0;
}