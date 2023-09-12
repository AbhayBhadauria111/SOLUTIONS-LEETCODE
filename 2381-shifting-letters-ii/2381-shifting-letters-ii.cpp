class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int>S(s.size()+1,0);
        for(auto x:shifts)
        {
            if(x[2]==0)
            {
                S[x[0]]-=1;
                S[x[1]+1]+=1;
                // if(x[1]==s.size()-1)S[x[1]]++;
            }
            else
            {
                S[x[0]]+=1;
                S[x[1]+1]-=1;
                // if(x[1]==s.size()-1)S[x[1]]--;
            }
        }
        int curr=0;
        // for(auto x:S)cout<<x<<" ";
        for(int i=0;i<s.size();i++)
        {
            curr+=S[i];
            if(curr>0)
            {
                int temp=s[i]-'a';
                temp=(temp+curr)%26;
                temp+='a';
                s[i]=char(temp);
            }
            else
            {   int t=curr;
                curr=abs(curr);
                curr=curr%26;
                curr=26-curr;
                int temp=s[i]-'a';
                temp=(temp+curr)%26;
                temp+='a';
                s[i]=char(temp);
                curr=t;
            }
            // cout<<s<<" ";
        }
        return s;
    }
};