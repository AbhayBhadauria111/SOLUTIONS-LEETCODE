class Solution {
    bool issym(int num)
    {
        int sum=0;
        vector<int>V;
        while(num>0)
        {
            sum+=num%10;num/=10;
            V.push_back(sum);
        }
        if(V.size()%2!=0)return false;
        int n=V.size();
        if(V[n/2-1]!=(V[n-1]-V[n/2-1]))return false;
        return true;
    }
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++)
        {
            ans+=issym(i);
        }
        return ans;
    }
};