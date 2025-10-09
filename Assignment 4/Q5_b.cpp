#include <iostream>
#include <queue>
using namespace std;

class Stack 
{
    queue<int> q;
    public:
    void push(int x) 
    {
        q.push(x);
        int len=q.size();
        // Rotate all previous elements behind the new element
        for (int i=0;i<len-1;i++) 
        {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() 
    {
        if (q.empty()) 
        {
            cout <<"Stack Empty\n";
            return;
        }
        q.pop();
    }

    int top() 
    {
        if(q.empty()) 
        return -1;

        return q.front();
    }

    bool empty() 
    {
        return q.empty();
    }
};

int main() 
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Top: "<<s.top()<<endl;

    s.pop();
    cout <<"Top after pop: "<<s.top()<<endl;

    s.pop();
    s.pop();
    s.pop(); //testing popping from empty stack

    return 0;
}
