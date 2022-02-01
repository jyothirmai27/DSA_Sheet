// Time Complexity - O(N)
// Space Complexity - O(N)
// Hashing technique

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        int res;
        vector<int> temp(n+1,0);
        for(int i=0;i<n;i++)
        {
            temp[nums[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(temp[i] >=2)
            {
                res = i;
            }
        }
        return res;
        
    }
};
