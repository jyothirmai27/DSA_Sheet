// LeetCode - https://leetcode.com/problems/find-the-duplicate-number/
// Time Complexity - O(NlogN) + O(N) = O(NlogN)
// Space Complexity - O(1)
// Sorting technique
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};
