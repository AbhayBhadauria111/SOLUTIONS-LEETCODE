class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int ans=0;
        if(numOnes>=k)return k;
        else
        {
            ans+=numOnes;
            k-=numOnes;
        }
        if(numZeros>=k)return ans;
        else
        {
            k-=numZeros;
        }
        return ans-k;
    }
};