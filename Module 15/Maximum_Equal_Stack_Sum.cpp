#include <bits/stdc++.h>

using namespace std;

int getSum(stack<int> s)
{
    int sum = 0;
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    return sum;
}

int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3)
{
    // Write your code here
    int sum1 = getSum(stk1);
    int sum2 = getSum(stk2);
    int sum3 = getSum(stk3);
    // cout << sum1 << " " << sum2 << " " << sum3 << endl;

    while (true)
    {
        if (sum1 == sum2 && sum2 == sum3)
            break;

        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= stk1.top();
            stk1.pop();
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= stk2.top();
            stk2.pop();
        }
        else
        {
            sum3 -= stk3.top();
            stk3.pop();
        }
    }
    return sum1;
}

int main()
{
    stack<int> stk1, stk2, stk3;

    // Push some elements into stk1
    stk1.push(8);
    stk1.push(5);
    stk1.push(3);

    // Push some elements into stk2
    stk2.push(6);
    stk2.push(9);
    stk2.push(4);
    stk2.push(2);
    stk2.push(2);

    // Push some elements into stk3
    stk3.push(3);
    stk3.push(2);
    stk3.push(1);
    stk3.push(2);

    int sum = maxSum(stk1, stk2, stk3);

    cout << "Maximum Sum: " << sum << endl;
    return 0;
}