class Solution {
public:
    int minLength(string s) {
        vector<char>S;
        for(char i :s)
        {
            if(S.empty())
            {
                S.push_back(i);
            }
            else
            {
                S.push_back(i);
                int n=S.size();
                while(n>=2 and ((S[n-2]=='A' and S[n-1]=='B') or (S[n-2]=='C' and S[n-1]=='D')))
                  {
                      S.pop_back();
                      S.pop_back();
                      n-=2;
                  }
                // for(auto x:S)cout<<x<<" ";cout<<endl;
                      
            }
        }
        return S.size();
    }
};