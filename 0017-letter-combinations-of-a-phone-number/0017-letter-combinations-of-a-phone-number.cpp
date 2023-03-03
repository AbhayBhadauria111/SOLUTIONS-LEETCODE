class Solution {
public:
    vector<string>ans;
    map<char,string>dict{{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
    void solve(int curr,string s,string digits)
    {
        if(curr==digits.size() and s!=""){ans.push_back(s);return;}
        string temp=dict[digits[curr]];
        string t=s;
        for(int i=0;i<temp.size();i++)
        {
            t=s;
            t+=temp[i];
            solve(curr+1,t,digits);
        }
    }
    vector<string> letterCombinations(string digits) {
    solve(0,"",digits);
    return ans;
    }
};