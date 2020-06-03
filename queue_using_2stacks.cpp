#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Queue
{
    stack<int> st1,st2;
    void enQueue(int d)
    {
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(d);
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
    }


int deQueue()
{
    if(st1.empty())
    {
        cout<<"queue is empty";
        exit(0);
    }
    int a=st1.top();
    st1.pop();
    return a;
}
    
};
int main() 
{ 
    Queue q; 
    q.enQueue(1); 
    q.enQueue(2); 
    q.enQueue(3); 
  
    cout << q.deQueue() << '\n'; 
    cout << q.deQueue() << '\n'; 
    cout << q.deQueue() << '\n'; 
  
    return 0; 
} 
