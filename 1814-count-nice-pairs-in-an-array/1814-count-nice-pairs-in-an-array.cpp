class Solution {
public:
    int rev(int x)
    {
        queue<int>s;
        while(x)
        {
            int temp=x%10;
            x/=10;
            if(s.empty() and temp==0)continue;
            s.push(temp);
        }
        int ret=0;
        while(!s.empty())
        {
        ret=ret*10+s.front();
            s.pop();
        }
        return ret;
    }
    int countNicePairs(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
        nums[i]-=rev(nums[i]);
        }
        map<int,long long>count;
        for(auto x:nums)
        {
            if(count.find(x)==count.end())count[x]=1;
            else count[x]++;
        }
        long long ans=0;
        for(auto x:count)
        {
            if(x.second>1)
            {
               long long temp=(x.second*(x.second-1)/2)%(1000000007);
                ans=(ans+temp)%(1000000007);
            }
        }
        return int(ans)%1000000007;
        
    }
};