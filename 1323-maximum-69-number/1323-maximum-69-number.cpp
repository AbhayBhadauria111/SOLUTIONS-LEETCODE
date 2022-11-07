class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        string ans;
        int flag=0;
        for(auto x:s)
        {
            if(flag==0 and x=='6'){ans+='9';flag=1;}
            else ans+=x;
        }
        return stoi(ans);
    }
};