#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> myList = {20, 40, 30, 10, 50, 10, 10};
    // myList.remove(10); // remove all 10
    // myList.sort(); // sort the list in ascending order
    // myList.sort(greater<int>()); // sort the list in descending order

    // myList.unique();
    
    // myList.sort();
    // myList.unique();

    // myList.sort(greater<int>());
    // myList.unique();

    myList.reverse(); // reverse the list
    
    for (int value : myList)
        cout << value << endl;
    return 0;
}