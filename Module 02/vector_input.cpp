#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int value : v)
        cout << value << " ";
    cout << endl;

    return 0;
}