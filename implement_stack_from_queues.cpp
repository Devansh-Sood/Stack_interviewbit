/* the new element always enter q2 ,then empty q1 to q2 and after swapping queues the new element is always at the top of q1*/
#include <bits/stdc++.h> 
  
using namespace std; 
  
class Stack { 
    queue<int> q1, q2; 
  
    // To maintain current number of elements in stack 
    int curr_size; 
  
public: 
    Stack() 
    { 
        curr_size = 0; 
    } 
  
    void push(int x) 
    {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>q=q1;
        q1=q2;
        q2=q;
        curr_size++;
    }
  
    void pop() 
    { 
  
        // if no elements are there in q1 
        if (q1.empty()) 
            return; 
        q1.pop(); 
        curr_size--; 
    } 
  
    int top() 
    { 
        if (q1.empty()) 
            return -1; 
        return q1.front(); 
    } 
  
    int size() 
    { 
        return curr_size; 
    } 
}; 
  
int main() 
{ 
    Stack s; 
    s.push(1); 
    s.push(2); 
    s.push(3); 
  
    cout << "current size: " << s.size() 
         << endl; 
    cout << s.top() << endl; 
    s.pop(); 
    cout << s.top() << endl; 
    s.pop(); 
    cout << s.top() << endl; 
  
    cout << "current size: " << s.size() 
         << endl; 
    return 0; 
} 