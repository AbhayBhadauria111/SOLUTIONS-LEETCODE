class Solution {
    // int solve(int n,)
public:
    int kthGrammar(int n, int k) {
        if(k==1)return 0;
        else
        {
            // cout<<n<<" "<<k<<endl;
            if(pow(2,(n-2))>=k)
                return kthGrammar(n-1,k);
            return !(kthGrammar(n-1,k-pow(2,(n-2))));
        }    
    }
};
    // 0
    //     01
    //     0110
    //     01101001
    //     3 4