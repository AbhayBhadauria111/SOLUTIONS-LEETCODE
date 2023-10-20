class Solution {
public:
    string finalString(string s) {
        deque<char>ans;
        int icount=0;
        for(auto x:s)
        {
            if(x=='i'){icount+=1;continue;}
            if(icount%2==0)
            {
                ans.push_back(x);
            }
            else
            {
                ans.push_front(x);
            }
        }
        string ret;
        if(icount%2==0)
        {
            while(!ans.empty())
            {
                ret+=ans.front();
                ans.pop_front();
            }
        }
        else
        {
            while(!ans.empty())
            {
                ret+=ans.back();
                ans.pop_back();
            }
        }
        return ret;
        
    }
};