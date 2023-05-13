class Solution {
    ;
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int>DP(high+1,-1);
        for(int i=high;i>=0;i--)
        {
            int temp=0;
            if(i>=low)temp++;
            DP[i]=(temp+((i+zero<=high)?DP[i+zero]:0)+((i+one)<=high?DP[i+one]:0))%(1000000007);
        }
        return DP[0];
    }
};