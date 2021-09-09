//https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int R = matrix.size();
        int C = matrix[0].size();
        unordered_set<int> rows,cols;

        for (int i = 0; i < R; i++) {
          for (int j = 0; j < C; j++) {
            if (matrix[i][j] == 0) {
              rows.insert(i);
              cols.insert(j);
            }
          }
        }

        for (int i = 0; i < R; i++) {
          for (int j = 0; j < C; j++) {
            if (rows.find(i)!=rows.end() || cols.find(j)!=cols.end()) {
              matrix[i][j] = 0;
            }
          }
        }
    }
};