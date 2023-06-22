#include <bits/stdc++.h>

using namespace std;

int main()
{
    // list<int> myList = {10, 20, 30};
    // // cout << myList.max_size() << endl;
    // myList.clear();
    // cout << myList.size() << endl;
    // for (int value : myList)
    // {
    //     cout << value << endl;
    // }

    // list<int> myList = {10, 20, 30};
    // // myList.clear();
    // myList.resize(2);
    // cout << myList.size() << endl;
    // for (int value : myList)
    // {
    //     cout << value << endl;
    // }

    // list<int> myList = {10, 20, 30};
    // myList.resize(2);
    // myList.resize(5);
    // cout << myList.size() << endl;
    // for (int value : myList)
    // {
    //     cout << value << endl;
    // }

    list<int> myList = {10, 20, 30};
    myList.resize(2);
    myList.resize(5, 100);
    cout << myList.size() << endl;
    for (int value : myList)
    {
        cout << value << endl;
    }

    return 0;
}