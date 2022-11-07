class Solution {
public:
    void reverseString(vector<char>& s) {
        
        solve(s,0);
    }
    private: 
    void solve(vector<char>&s,int pos)
    {
        if (pos>=s.size()/2)return;
        char temp=s[pos];
        s[pos]=s[s.size()-1-pos];
        s[s.size()-pos-1]=temp;
        solve(s,pos+1);
    }
};