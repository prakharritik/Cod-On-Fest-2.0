//https://leetcode.com/problems/design-circular-deque/
class MyCircularDeque {
public:
    vector<int>q;
    int f , l , count = 0, maxs;
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        maxs=k;
        q.resize(k,0);f=0;l=k-1;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(count==maxs)return false;
        q[f]=value;
        count++;
        f=(f+1)%maxs;
        return true;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(count==maxs)return false;
        q[l]=value;
        count++;
        l=(l-1+maxs)%maxs;
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(count == 0) return false;
        f = (f - 1 + maxs) % maxs;
        count--;
        return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(count == 0) return false;
        l = (l + 1) % maxs;
        count--;
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        if(count==0)return -1;
        else return q[(f - 1 + maxs) % maxs];
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if(count==0)return -1;
        else return q[(l + 1 + maxs) % maxs];
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return count==0;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return (count == maxs);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */