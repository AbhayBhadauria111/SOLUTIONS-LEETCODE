class Solution {
public:
        int countLargestGroup(int n) {
        unordered_map<int,int> sumdig;
        for(int i=1;i<=n;i++)
        {
            int t=sumofdigits(i);
            if(sumdig.find(t)==sumdig.end())sumdig[t]=1;
            else
                sumdig[t]+=1;
        }
        int m=0;
        int ans=0;
        for (auto x:sumdig){
            if(x.second>m)
            {
                ans=1;
                m=x.second;
            }
            else{
                if(x.second==m)ans++;
            }
        }
            return ans;
    }
private:
    int sumofdigits(int num)
    {
        int ret=0;
        while(num)
        {
           ret+=num%10;
            num=num/10;
        }
        return ret;
    }
    
};