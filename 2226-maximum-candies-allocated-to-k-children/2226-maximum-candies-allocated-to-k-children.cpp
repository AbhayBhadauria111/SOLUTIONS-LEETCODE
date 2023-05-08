class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long l=0;
        long long r=accumulate(candies.begin(),candies.end(),0LL)/k +1;
        long long mid;
        long long ans=INT_MIN;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(mid==0)return 0;
            if(possible(candies,mid,k))
            {
                ans=max(ans,mid);
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        // cout<<ans;
        return int(ans);
    }
private:
    bool possible(vector<int>& candies, long long mid,long long k)
    {
        long long count=0;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]==mid)count++;
            else
            {
                count+=candies[i]/mid;
            }
            
        }
        if(count>=k)return true;
        return false;
    }
};