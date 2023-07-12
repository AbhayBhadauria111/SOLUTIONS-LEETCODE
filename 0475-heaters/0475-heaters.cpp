class Solution {
    int binary(int target,vector<int>& heaters)
    {
        int i=0,j=heaters.size()-1;
        int ret=0;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(heaters[mid]==target){return mid;}
            if(heaters[mid]<target)
            {
                ret=mid;
                i=mid+1;
            }
            else j=mid-1;
        }
        return ret;
    }
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int ans=INT_MIN;
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        // for(auto x:heaters)cout<<x<<" ";cout<<endl;
        for(auto house:houses)
        {
            int ind=binary(house,heaters);
            int cur_rad=INT_MAX;
            if(heaters[ind]==house)cur_rad=0;
            else
            {
                cur_rad=abs(heaters[ind]-house);
                if(ind+1<heaters.size())cur_rad=min(cur_rad,abs(heaters[ind+1]-house));
            }
            // cout<<house<<" "<<cur_rad<<" "<<heaters[ind]<<endl;
            ans=max(ans,cur_rad);
        }
        return ans;
    }
};