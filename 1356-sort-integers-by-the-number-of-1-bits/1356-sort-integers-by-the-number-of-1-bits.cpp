class Solution {
    int getbits(int num)
    {
        int ret=0;
        while(num>0)
        {
            // cout<<(num&1)<<" "<<num<<endl;
            ret+=(num & 1);
            num=num>>1;
        }
        return ret;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>A;
        for(auto x:arr)
        {
            A.push_back({getbits(x),x});
        }
        sort(A.begin(),A.end());
        vector<int>ans;
        for(auto x:A)ans.push_back(x.second);
        return ans;
    }
};