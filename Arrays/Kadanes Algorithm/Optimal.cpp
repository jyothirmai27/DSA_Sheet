// Time Complexity - O(N)
// Space Complexity - O(1)
// Kadane's Algo

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          int curr_sum=0,max_sum=nums[0];
          for(int i=0;i<nums.size();i++)
          {
            curr_sum = curr_sum + nums[i];
            max_sum = max(max_sum,curr_sum);
            curr_sum = max(curr_sum,0);
          }
           
        return max_sum;
    }
};
