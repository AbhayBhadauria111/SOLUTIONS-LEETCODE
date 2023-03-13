class Solution {
public:
    int primesum(int n)
    {
        int ret=0;
        while(n!=1)
        {
            for(int i=2;i<n+1;i++)
            {
                if(n%i==0)
                {
                    ret+=i;
                    n/=i;
                    break;
                }
            }
        }
        return ret;
    }
    int smallestValue(int n) {
        unordered_set<int>repeat;
        int ans=INT_MAX;
        while(repeat.find(n)==repeat.end())
        {
            repeat.insert(n);
            int temp=primesum(n);
            ans=min(temp,ans);
            n=temp;
        }
        return ans;
        
    }
};