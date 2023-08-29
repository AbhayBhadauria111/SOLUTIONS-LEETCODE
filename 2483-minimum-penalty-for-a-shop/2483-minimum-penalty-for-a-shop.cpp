class Solution {
public:
    int bestClosingTime(string customers) {
        int closeP=0,openP=0;
        for(auto x:customers)
        if(x=='Y')closeP++;
        int ans=INT_MAX;
        int minP=INT_MAX;
        for(int i=0;i<customers.size();i++)
        {
            int currP=closeP+openP;
            if(currP<minP)
            {
                minP=currP;
                ans=i;
            }
            if(customers[i]=='Y')
            {
                closeP--;
            }
            else
            {
                openP++;
            }
        }
        if(openP+closeP<minP)return customers.size();
    return ans;
    }
};