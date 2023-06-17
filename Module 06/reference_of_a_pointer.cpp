#include <bits/stdc++.h>

using namespace std;

void fun(int *p)
{
    // *p = 20;
    // *p = NULL;
    cout << "p in fun = " << p << endl;
    // p = NULL;
}

int main()
{
    int value = 10;
    int *ptr = &value;
    fun(ptr);
    // cout << *ptr << endl;
    // cout << value << endl;
    cout << ptr << endl;
    return 0;
}