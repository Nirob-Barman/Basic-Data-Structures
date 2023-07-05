#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> s1, s2;
        for (char c : s)
        {
            if (c == '#')
            {
                if (!s1.empty())
                    s1.pop();
            }
            else
                s1.push(c);
        }
        for (char c : t)
        {
            if (c == '#')
            {
                if (!s2.empty())
                    s2.pop();
            }
            else
                s2.push(c);
        }
        // if (s1 == s2)
        //     return true;
        // else
        //     return false;
        return s1 == s2;
    }
};

int main()
{
    Solution solution;

    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << endl;
    cout << "Enter string t: ";
    cin >> t;
    cout << endl;

    bool isSame = solution.backspaceCompare(s, t);

    if (isSame)
    {
        cout << "The modified strings are the same." << endl;
    }
    else
    {
        cout << "The modified strings are different." << endl;
    }
    return 0;
}