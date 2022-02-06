// Time Complexity - O(NlogN) + O(N) = O(NlogN)
// Space Complexity - O(N) ( to return the answer of the merged intervals)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        if(n==0)
            return ans;
        sort(intervals.begin(),intervals.end());
        vector<int> temp=intervals[0];
        for(auto it:intervals)
        {
            if(it[0]<=temp[1])
            {
                temp[1] = max(temp[1],it[1]);
            }
            else
            {
                ans.push_back(temp);
                temp=it;
            }
        }
        ans.push_back(temp);
        return ans;   
    }
};
