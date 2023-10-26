class Solution {
    // int count=0;
    long long solve(int last,vector<int>&arr,unordered_map<int,int>&tbl,unordered_map<int,vector<pair<int,int>>>&factors)
    {
        if(tbl.find(last)!=tbl.end()){return tbl[last];}
        // cout<<last<<" ";
        long long temp=1;
        for(auto x:factors[last])
        {
            temp=(temp+solve(x.first,arr,tbl,factors)*solve(x.second,arr,tbl,factors))%(1000000007);
        }
        tbl[last]=temp%(1000000007);
        return tbl[last];
        
    }
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int ans=0;
        unordered_set<int>numset(arr.begin(),arr.end());
        unordered_map<int,int>tbl;
        unordered_map<int,vector<pair<int,int>>>factors;
        for(auto x:numset)
        {
            for(auto y:numset)
            {
                if(x%y==0 and numset.find(x/y)!=numset.end())
                {
                    factors[x].push_back({y,x/y});
                }
            }
        }
        // for(auto x:factors)
        // {
        //     cout<<x.first<<"=";
        //     for(auto y:x.second)
        //     {
        //         cout<<y.first<<" "<<y.second<<"||";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<arr.size();i++)
        {
            ans=(ans+solve(arr[i],arr,tbl,factors))%(1000000007);
        }
        return ans%(1000000007);
    }
};