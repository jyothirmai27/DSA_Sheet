// Time Complexity - O(N)
// Space Complexity - O(1)
// Floyd's Cycle detection algo - slow & fast pointer concept

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      
        int slow = nums[0];
        int fast = nums[0];
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        
        fast = nums[0];
        while(fast != slow)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
       
    }
};
