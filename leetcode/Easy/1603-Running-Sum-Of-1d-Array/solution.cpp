// LeetCode Problem: Running Sum of 1d Array
// Link: https://leetcode.com/problems/running-sum-of-1d-array/
// Difficulty: Easy
// Language: cpp

#include <vector>

using namespace std;

class Solution
 {
public:
    vector<int> runningSum(vector<int>& nums)
     {
        
        for (int i = 1; i < nums.size(); ++i)
         {
            nums[i] += nums[i - 1];
        }
        
        return nums;
    }
};