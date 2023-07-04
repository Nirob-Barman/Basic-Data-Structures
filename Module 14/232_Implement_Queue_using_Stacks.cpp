#include <bits/stdc++.h>

using namespace std;

class MyQueue
{
public:
    stack<int> st;
    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        stack<int> newSt;
        int last;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                last = k;
                break;
            }
            newSt.push(k);
        }

        // pushing the previous element in the previous stack except the first ones
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }

        return last;
    }

    int peek()
    {
        stack<int> newSt;
        int last;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                last = k;
            }
            newSt.push(k);
        }

        // pushing the previous element in the previous stack except the first ones
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }

        return last;
    }

    bool empty()
    {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main()
{
    MyQueue *obj = new MyQueue();

    obj->push(5);
    obj->push(10);
    obj->push(15);

    int param_2 = obj->pop();    // Removes and returns the front element (5)
    int param_3 = obj->peek();   // Returns the new front element (10)
    bool param_4 = obj->empty(); // Returns false since the queue is not empty

    std::cout << "Popped element: " << param_2 << std::endl;
    std::cout << "Front element: " << param_3 << std::endl;
    std::cout << "Is queue empty? " << (param_4 ? "Yes" : "No") << std::endl;

    return 0;
}