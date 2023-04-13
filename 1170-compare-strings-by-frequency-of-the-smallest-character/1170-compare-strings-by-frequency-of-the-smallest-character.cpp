class Solution {
public:
    unordered_map<string,int>F;
    void fillF(string s)
    {
        vector<int>V(26,0);
        for(char c:s)V[c-'a']++;
        for(auto x:V)if(x>0){F[s]=x;return;}
        F[s]=0;
        return ;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        
        for(auto x:queries)
        {
            fillF(x);
        }
        for(auto x:words)
            fillF(x);
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
            int temp=0;
            for(int j=0;j<words.size();j++)
                if(F[queries[i]]<F[words[j]])temp++;
            ans.push_back(temp);
        }
        return ans;
    }
};