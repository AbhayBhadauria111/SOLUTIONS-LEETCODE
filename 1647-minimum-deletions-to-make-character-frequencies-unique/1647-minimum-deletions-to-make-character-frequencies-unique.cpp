class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>D;
        unordered_set<int>freqset;
        for(int i=0;i<s.size();i++)
        {
            D[s[i]]+=1;
        }
        int ans=0;
        for(auto x:D)
        {
            int tempfreq=x.second;
            while(freqset.find(tempfreq)!=freqset.end())
            {
                tempfreq--;
                ans++;
            }
            if(tempfreq>0)freqset.insert(tempfreq);
        }
        return ans;
    }
};