#include <bits/stdc++.h>

using namespace std;

int main()
{
    // list<int>myList;
    // cout << myList.size() << endl;
    // list<int> myList(10);
    // cout << myList.size() << endl;

    // list<int> myList(10, 5);
    // // cout << myList.front() << endl;
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // list<int>list2={1,2,3,4,5};
    // list<int> myList(list2);
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // int a[5] = {10, 20, 30, 40, 50};
    // list<int> myList(a, a + 5);
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    vector<int> v = {100, 200, 300, 400, 500};
    list<int> myList(v.begin(), v.end());
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    for (int value : myList)
        cout << value << endl;
    return 0;
}