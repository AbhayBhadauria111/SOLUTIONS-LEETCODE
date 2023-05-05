class Solution {
public:
    int kthFactor(int n, int k) {
        int div=1;
        int K=0;
        while(div<=n)
        {
            if(n%div==0)
            {
                K++;
            }
            if(k==K)return div;
            div++;
        }
        return -1;
    }
};