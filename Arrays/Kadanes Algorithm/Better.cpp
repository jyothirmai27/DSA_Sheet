// Time Complexity - O(N*N) = O(N^2)
// Space Complexity - O(N) - For calculating prefix sum 
// Prefix sum is calculated to avoid repetitions 

class Solution {
public:
   int n = nums.size();
        int prefix_sum[n];
        prefix_sum[0] = nums[0];
        int sum,max_sum=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix_sum[i] = prefix_sum[i-1] + nums[i];
        }
        for(int i=0;i<n;i++)
        {
            sum = 0;
            for(int j=i;j<n;j++)
            {
               if(i>0)
               {
                   sum = prefix_sum[j] - prefix_sum[i-1];
               }
               else
               {
                    sum = prefix_sum[j];
               }
               max_sum = max(max_sum,sum);
            }
        }
        return max_sum;
    }
};
