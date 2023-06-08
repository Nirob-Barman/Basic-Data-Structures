#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum = 0;
        // for (int i = l; i <= r; i++)
        // {
        //     sum += a[i];
        // }
        if (l == 0)
            sum = a[r];
        else
            sum = a[r] - a[l - 1];
        cout << sum << endl;
    }
    return 0;
}