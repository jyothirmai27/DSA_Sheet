// LeetCode - https://leetcode.com/problems/sort-colors/
// Time Complexity - O(nlogn)
// Space Complexity - O(1)
// Sorting technique

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
         sort(nums.begin(),nums.end());
    }
}

