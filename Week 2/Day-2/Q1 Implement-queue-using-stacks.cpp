//https://leetcode.com/problems/implement-queue-using-stacks/
class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    int peekEl=-1;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(s1.empty())
            peekEl = x;
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(s2.empty()){
        while(!s1.empty())
        {
           int ans=s1.top();
            s2.push(ans);
            s1.pop();
            
        }
       }
        int x = s2.top();
        s2.pop();
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        return s2.empty() ? peekEl : s2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty() && s2.empty();
    }
};