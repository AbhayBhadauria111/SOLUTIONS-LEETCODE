class Solution {
public:
    bool canship(int cap,vector<int>& weights,int days)
    {
        int i=1;
        int temp=0;
        for(int x:weights)
        {
          if(temp+x<=cap)temp+=x;
            else
            {
                temp=x;
                i++;
            }
        }
        return i<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int cap=*max_element(weights.begin(),weights.end());
        while(true)
        {
            if(canship(cap,weights,days))return cap;
            else cap++;
        }
        return cap;
    }
};