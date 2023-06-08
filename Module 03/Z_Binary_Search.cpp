#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == x)
        //     {
        //         flag = true;
        //         break;
        //     }
        // }

        int low = 0, high = n;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (x == a[mid])
            {
                flag = true;
                break;
            }
            else if (x > a[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }

        if (flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}