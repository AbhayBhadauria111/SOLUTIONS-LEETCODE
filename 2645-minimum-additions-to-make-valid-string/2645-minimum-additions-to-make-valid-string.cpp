class Solution {
public:
    int addMinimum(string word) {
        int ans=0;
        int i=0;
        int j=0;
        vector<char>A={'a','b','c'};
        while(j<word.size())
        {
            while(A[i%3]!=word[j])
            {
                ans++;
                i++;
            }
            j++;
            i++;
        }
        i--;
        if(i%3==0)return ans+2;
        else if(i%3==1)return ans+1;
        return ans;
    }
};