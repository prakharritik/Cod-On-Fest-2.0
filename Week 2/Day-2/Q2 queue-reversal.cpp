//https://practice.geeksforgeeks.org/problems/queue-reversal/1
queue<int> rev(queue<int> q)
{
    stack<int> s;
    while(!q.empty()){
        int x=q.front();
        s.push(x);
        q.pop();
    }
    while(!s.empty()){
        int x=s.top();
        s.pop();
        q.push(x);
    }
    return q;
}