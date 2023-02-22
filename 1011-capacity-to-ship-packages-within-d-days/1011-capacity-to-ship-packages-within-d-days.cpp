class Solution {
public:
    bool canship(int cap,vector<int>& weights,int days)
    {
        int i=1;
        int temp=0;
        for(int x:weights)
        {
          if((temp+x)<=cap)temp+=x;
            else
            {
                temp=x;
                i++;
            }
        }
        return i<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int cap;
        int start=0,end=0;
        for(int i:weights)
        {
            end+=i;
            start=max(start,i);
        }
        end+=1;
        int ans;
        while(start<end)
        {
            cap=(start+end)/2;
            if(canship(cap,weights,days))
            {
                ans=cap;
                end=cap;   
            }
            else
            {
                start=cap+1;
            }
        }
        return ans;
    }
};