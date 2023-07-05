#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                    return false;
                else
                {
                    if (c == ')' && st.top() == '(')
                    {
                        st.pop();
                    }
                    else if (c == '}' && st.top() == '{')
                    {
                        st.pop();
                    }
                    else if (c == ']' && st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                        return false;
                }
            }
        }
        // if (st.empty())
        //     return true;
        // else
        //     return false;
        return st.empty();
    }
};

int main()
{
    Solution solution;

    string input;
    cout << "Enter a string: ";
    cin >> input;

    bool isValidString = solution.isValid(input);

    if (isValidString)
    {
        cout << "The string is valid." << endl;
    }
    else
    {
        cout << "The string is not valid." << endl;
    }
    return 0;
}