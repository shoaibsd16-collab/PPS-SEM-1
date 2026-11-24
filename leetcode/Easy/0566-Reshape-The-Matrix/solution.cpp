// LeetCode Problem: Reshape the Matrix
// Link: https://leetcode.com/problems/reshape-the-matrix/
// Difficulty: Easy
// Language: cpp

class Solution 
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        int m = mat.size();
        int n = mat[0].size();
        
        
        if (m * n != r * c)
         {
            return mat;
        }
        
        vector<vector<int>> res(r, vector<int>(c));
        
        for (int i = 0; i < m; ++i) 
        {
            for (int j = 0; j < n; ++j)
             {
                
                int linearIdx = i * n + j;
                res[linearIdx / c][linearIdx % c] = mat[i][j];
            }
        }
        
        return res;
    }
};