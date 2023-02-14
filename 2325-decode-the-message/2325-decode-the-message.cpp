class Solution {
public:
    string decodeMessage(string key, string message) {
        string ans;
        int i=97;
        remove(key.begin(),key.end(),' ');
        map<char,char>decode;
        for(char x:key)
            if(decode.find(x)==decode.end())
            decode[x]=char(i++);
        for(char x:message)
        {
            if(x==' ')ans+=' ';
            else ans+=decode[x];
        }
        return ans;
    }
};