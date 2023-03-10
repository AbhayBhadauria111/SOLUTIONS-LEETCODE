class Solution {
public:
    int countDigits(int num) {
        int ans=0;
        int n=num;
        while(n)
        {
            if(num%(n%10)==0)ans++;
            n=n/10;
        }
        return ans;
    }
};