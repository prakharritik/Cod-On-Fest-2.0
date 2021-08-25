//https://leetcode.com/explore/learn/card/recursion-i/255/recursion-memoization/1661/
class Solution {
public:
    vector<int> fi;
    Solution(){fi.resize(31,-1);}
    int fib(int n) {
        if(n==0 || n==1) return n;
        if(fi[n]!=-1) return fi[n];
        return fi[n] = fib(n-1) + fib(n-2);
    }
};