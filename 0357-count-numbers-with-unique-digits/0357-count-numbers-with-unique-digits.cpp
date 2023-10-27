class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)return 1;
        if(n==1)return 10;
        int ans=1;
        int temp=1,mul=9;
        for(int i=0;i<n;i++)
        {
            temp=temp*mul;
            ans+=temp;
            if(i!=0)mul--;
            
        }
        return ans;
    }
};