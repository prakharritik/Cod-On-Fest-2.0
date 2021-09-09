//https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=matrix[0].size()-1;
        int k=matrix.size()-1;
        int j=0;
        while(i>=0&&j<=matrix.size()-1)
        {
            if(matrix[j][i]==target)
                return true;
            if(matrix[j][i]>target)
            {
                if(i==0)
                    return false;
                else i--;
            }
            if(matrix[j][i]<target)
                j++;
        }
        return false;
    }
};