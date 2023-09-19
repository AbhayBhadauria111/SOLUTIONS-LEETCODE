class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int ans=0;
        for(int size=minSize;size<=maxSize;size++)
        {
            unordered_map<string,int>subscount;
            unordered_map<char,int>countLetters;
            int i=0,j=0;
            while(j<size-1)
            {
                countLetters[s[j]]=countLetters[s[j]]+1;
                j++;
            }
            countLetters[s[j]]+=1;
            while(j<s.size())
            {
                
                if(countLetters.size()<=maxLetters)
                {
                    string temp=s.substr(i,size);
                    subscount[temp]+=1;
                    ans=max(ans,subscount[temp]);
                //     cout<<temp<<" ";
                //     for(auto x:countLetters)cout<<x.first<<x.second<<" ";
                // cout<<endl;
                }
                
                j++;
                if(j<s.size())
                {
                    countLetters[s[j]]+=1;
                }
                countLetters[s[i]]-=1;
                if(countLetters[s[i]]==0)countLetters.erase(s[i]);
                i++;
            }
            // cout<<size<<" =";
            // for(auto x:subscount)cout<<x.first<<x.second<<" ";
            // cout<<endl;
        }
        return ans;
    }
};