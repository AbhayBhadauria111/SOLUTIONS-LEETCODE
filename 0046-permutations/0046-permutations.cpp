class Solution {
public:
    vector<vector<int>>ans;
    void swap(int i,vector<int>&arr,int s)
    {
        int temp=arr[i];
        arr[i]=arr[s];
        arr[s]=temp;
    }
    void solve(vector<int>&nums,int start)
    {
        if(start==nums.size()-1){ans.push_back(nums);return;}
        for(int i=start;i<nums.size();i++)
        {
            swap(i,nums,start);
            solve(nums,start+1);
            swap(i,nums,start);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums,0);
        return ans;
    }
};
            
            
        