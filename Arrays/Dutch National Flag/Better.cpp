// Time Complexity - O(N) + O(N) = O(N)
// Space Complexity - O(1)
// Count 0's, 1's and 2's 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int count0=0,count1=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                count0++;
            else if(nums[i]==1)
                count1++;
        }
        for(int i=0;i<count0;i++)
        {
            nums[i]=0;
        }
        for(int i=count0;i<count0+count1;i++)
        {
            nums[i]=1;
        }
        for(int i=count0+count1;i<n;i++)
        {
            nums[i]=2;
        }
        
    }
};
