class Solution {
public:
    int numDistinct(string s, string t) {
        return solve(s,t,0,0);
    }
private:
    map<vector<int>,int>DP;
    int solve(string s,string t,int Tind,int Sind)
    {
        if(Tind==t.size()){return 1;}
        if(Sind>=s.size())return 0;
        vector<int>curr={Tind,Sind};
        if(DP.find(curr)!=DP.end())return DP[curr];
        int count=0;
        for(int i=Sind;i<s.size();i++)
        {
            if(s.size()-i<t.size()-Tind)break;
            if(s[i]==t[Tind]){count+=solve(s,t,Tind+1,i+1);}
        }
        DP[curr]=count;
        return count;
    }
    
};