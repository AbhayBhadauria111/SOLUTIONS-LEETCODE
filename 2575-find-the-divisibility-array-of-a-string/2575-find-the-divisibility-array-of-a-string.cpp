class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>ans(word.size(),0);
        long long curr=0;
        for(int i=0;i<word.size();i++)
        {
            curr=curr*10+int(word[i]-'0');
            long long rem=curr%m;
            if(rem==0)ans[i]=1;
            else ans[i]=0;
            curr=rem;
        }
        return ans;
    }
};