class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        sort(ranges.begin(),ranges.end());
        int start=left;
        for(int i=0;i<ranges.size();i++)
        {
            if(start>right)return true;
            if(ranges[i][0]<=start)
            {
                start=max(start,ranges[i][1]+1);
            }
        }
        return start>right;
    
    }
};