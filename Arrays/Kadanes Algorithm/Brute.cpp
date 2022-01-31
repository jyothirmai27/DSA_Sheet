// Leet Code - https://leetcode.com/problems/maximum-subarray/
// Time Complexity - O(N*N*N) = O(N^3)
// Space Complexity - O(1)
// Maximum Subarray Sum - Using 3 loops (Time limit will exceed)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*int curr_sum=0,max_sum=nums[0];
          for(int i=0;i<nums.size();i++)
          {
            curr_sum = curr_sum + nums[i];
            max_sum = max(max_sum,curr_sum);
            curr_sum = max(curr_sum,0);
          }
           
        return max_sum;*/
        int n = nums.size();
        int sum = 0 ,max_sum = nums[0];
        for(int i=0;i<n;i++)
        { 
            for(int j=i;j<n;j++)
            {
                for(int k=i;k<=j;k++)
                { 
                    sum = sum + nums[k];
                    max_sum = max(sum,max_sum); 
                }
                sum = 0;  
            }
        }
        return max_sum;
    }
};
