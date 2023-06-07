class Solution {
    vector<string>ans;
public:
    vector<string> readBinaryWatch(int turnedOn) {
        solve(0,turnedOn,0,0);
        return ans;
    }
private:
    void solve(int ind,int ON,int h,int m)
    {
        if(ON==0)
        {
            if(h<12 and m<=59)
            {
                if(m>=10 and m<=59)ans.push_back(to_string(h)+":"+to_string(m));
                else
                {
                    ans.push_back(to_string(h)+":0"+to_string(m));
                }
            }
        }
        else if(ind==10)return; 
        else
        {
            solve(ind+1,ON,h,m);
            if(ind<=3)
            {
                solve(ind+1,ON-1,h+(1<<(3-ind)),m);
            }
            else
            {
                solve(ind+1,ON-1,h,m+(1<<(9-ind)));
            }
        }
    }
};