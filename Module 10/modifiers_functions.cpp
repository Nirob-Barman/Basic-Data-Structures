#include <bits/stdc++.h>

using namespace std;

int main()
{
    // list<int> myList = {10, 20, 30};
    // list<int> newList;
    // // newList.assign(myList.begin(), myList.end());
    // newList = myList;
    // for (int value : newList)
    //     cout << value << endl;

    // list<int> myList = {10, 20, 30};
    // list<int> myList = {10, 20, 30, 40, 50};
    list<int> myList = {10, 20, 30, 40, 50, 30, 30, 80, 30};
    // list<int> newList = {100, 200, 300};
    // vector<int> v = {600, 700, 800};

    // myList.push_back(100);
    // myList.push_front(100);

    // myList.pop_back();
    // myList.pop_back();

    // myList.pop_front();
    // myList.pop_front();

    // myList.insert(next(myList.begin(), 2), 100);
    // myList.insert(next(myList.begin(), 3), 100);
    // myList.insert(next(myList.begin(), 4), 100); // cyclic insertion
    // myList.insert(next(myList.begin(), 5), 100); // cyclic insertion

    // myList.insert(next(myList.begin(), 3), {100, 200, 300});
    // myList.insert(next(myList.begin(), 3), newList.begin(), newList.end()); // same as above
    // myList.insert(next(myList.begin(), 3), v.begin(), v.end()); // same as above

    // myList.erase(next(myList.begin(), 2));
    // myList.erase(next(myList.begin(), 2),next(myList.begin(),5));

    // replace(myList.begin(), myList.end(), 30, 100); // replace all 30 with 100

    // for (int value : myList)
    //     cout << value << endl;

    // auto it = find(myList.begin(), myList.end(), 60);
    auto it = find(myList.begin(), myList.end(), 40);
    cout << *it << endl; // gives value if found, otherwise gives list size
    if (it == myList.end())
        cout << "Not Found" << endl;
    else
        cout << "Found" << endl;
    return 0;
}