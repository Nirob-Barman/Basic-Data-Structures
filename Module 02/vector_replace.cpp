#include <bits/stdc++.h>

using namespace std;

int main()
{
    // replace
    // vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2, 2, 2};
    // replace(v.begin(), v.end(), 2, 100);
    // replace(v.begin(), v.end() - 1, 2, 100);
    // for (int x : v)
    //     cout << x << " ";
    // cout << endl;

    // find
    vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2, 2, 2};

    // vector<int>::iterator it;
    // it = find(v.begin(), v.end(), 3);

    auto it = find(v.begin(), v.end(), 3);
    // auto it = find(v.begin(), v.end(), 100);
    // cout << *it;

    if (it == v.end())
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;

    return 0;
}