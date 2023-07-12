class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int count=0,last=-1,flag=0,arr[26]={0};
        if(s.length()!=goal.length())return false;
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]-'a']+=1;
            if(arr[s[i]-'a']>1)flag=1;
            if(s[i]!=goal[i])
            {
                count+=1;
                if(count>2)return false;
                if(count==2)
                {
                    if(s[i]!=goal[last] or s[last]!=goal[i])return false;
                }
                if(count==1)
                {
                    last=i;
                }
            }
        }
        // cout<<flag<<count;
        if(flag==0 and count==0 or count==1)return false;
        return true;
    }
};