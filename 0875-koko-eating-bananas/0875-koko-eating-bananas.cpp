class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end());
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(check(mid,piles)<=h)high=mid;
            else low=mid+1;
        }
        return low;
    }
private:
    int check(int mid,vector<int>& piles)
    {
        int ret=0;
        for(auto x:piles)
            ret+=(x+mid-1)/mid;
        return ret;
    }
};