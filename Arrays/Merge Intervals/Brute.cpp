// Leetcode - https://leetcode.com/problems/merge-intervals/
// Time Complexity - O(N*N) + O(NlogN) = O(N^2)
// Space Complexity - O(1) // O(N) for returning the output

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if(intervals.size()==0)
            return ans;
        sort(intervals.begin(),intervals.end());
        int start,end,n=intervals.size();
        for(int i=0;i<n;i++)
        {
           start = intervals[i][0];
            end = intervals[i][1];
          // checks for already merged interval (with the previous interval)
            if(!ans.empty())
            {
                if(ans.back()[1]>=start)
                {
                    continue;
                }
            }
            for(int j=i+1;j<n;j++)
            {
                if(end>=intervals[j][0])
                {
                    end = max(end,intervals[j][1]);
                }
            }
            vector<int> v;
            v.push_back(start);
            v.push_back(end);
            ans.push_back(v);
        }
        return ans;
        
    }
};

