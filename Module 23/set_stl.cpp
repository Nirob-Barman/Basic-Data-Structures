#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }

    cout << s.count(1000) << endl;
    cout << s.count(100) << endl;

    if (s.count(10))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}

// input
// 7
// 10 2 20 3 100 5 7

// output
// 2
// 3
// 5
// 7
// 10
// 20
// 100

// input
// 11
// 10 2 10 20 100 7 3 100 5 3 7
// output
// 2
// 3
// 5
// 7
// 10
// 20
// 100
