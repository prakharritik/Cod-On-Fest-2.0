//https://leetcode.com/problems/unique-paths/

class Solution {
public:
    
    int rec(int n,int m,int i,int j,vector<vector<int>> &a){
        
        if(i>=n || j>=m)
            return 0;
        if(i==n-1 && j==m-1)
            return 1;
        if(a[i][j]!=-1)
            return a[i][j];
        else return a[i][j]=rec(n,m,i+1,j,a)+rec(n,m,i,j+1,a);
       
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> a(n,vector<int>(m,-1));
        
       return rec(n,m,0,0,a);
    }
};