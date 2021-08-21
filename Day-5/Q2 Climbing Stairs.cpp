//https://leetcode.com/problems/climbing-stairs/
class Solution {
public:
    int *arr;
    int rec(int n){
        if(arr[n]!=-1)
            return arr[n];
        if(n<=1){
            arr[n]=1;
            return arr[n];
        }
        
        arr[n]=rec(n-1)+rec(n-2);
        return arr[n];
    }
    int climbStairs(int n) {
        arr=new int[n+1];
        for(int i=0;i<=n;i++){
            arr[i] = -1;
        }
        return rec(n);
    }
};