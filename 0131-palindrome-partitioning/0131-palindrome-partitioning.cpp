class Solution {
public:
    vector<vector<string>>ans;
    vector<vector<string>> partition(string s) {
       ans.clear();
        solve(s,0,{});
        return ans;
    }
private:
    void solve(string s,int ind,vector<string>curr)
    {
        if(ind==s.size())ans.push_back(curr);
        for(int i=ind;i<s.size();i++)
        {
            if(ispal(s,ind,i))
            {
                curr.push_back(s.substr(ind,i-ind+1));
                solve(s,i+1,curr);
                curr.pop_back();
            }
        }
    }
    bool ispal(string s,int start,int end)
    {
        while(start<end)
        {
            if(s[start]!=s[end])return false;
            start++;
            end--;
        }
        return true;
    }
};