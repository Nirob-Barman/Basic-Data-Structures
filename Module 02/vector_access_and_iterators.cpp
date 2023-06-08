#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it;
    // cout << v[v.size() - 1] << endl;
    cout << v.back() << endl;
    cout << v.front() << endl;

    for (it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;

    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;
    return 0;
}