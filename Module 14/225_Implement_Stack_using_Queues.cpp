#include <bits/stdc++.h>

using namespace std;

class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        queue<int> newQueue;
        int last;
        while (!q.empty())
        {
            // newQueue.push(q.front());
            // q.pop();
            int k = q.front();
            q.pop();
            if (q.empty())
            {
                // last element
                // not to be pushed
                last = k;
                break;
            }
            newQueue.push(k);
        }
        q = newQueue;
        return last;
    }

    int top()
    {
        queue<int> newQueue;
        int last;
        while (!q.empty())
        {
            // newQueue.push(q.front());
            // q.pop();
            int k = q.front();
            q.pop();
            if (q.empty())
            {
                // last element
                last = k;
            }
            newQueue.push(k);
        }
        q = newQueue;
        return last;
    }

    bool empty()
    {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main()
{
    MyStack *obj = new MyStack();

    obj->push(5);
    obj->push(10);
    obj->push(15);

    int param_2 = obj->pop();    // Removes the top element (15) and returns it
    int param_3 = obj->top();    // Returns the new top element (10)
    bool param_4 = obj->empty(); // Returns false since the stack is not empty

    std::cout << "Popped element: " << param_2 << std::endl;
    std::cout << "Top element: " << param_3 << std::endl;
    std::cout << "Is stack empty? " << (param_4 ? "Yes" : "No") << std::endl;

    return 0;
}