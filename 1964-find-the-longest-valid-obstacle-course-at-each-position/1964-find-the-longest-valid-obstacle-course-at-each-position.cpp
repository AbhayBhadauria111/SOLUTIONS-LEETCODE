class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        int n=obstacles.size();
        vector<int>ans(n,0);
        vector<int>obs;
        for(int i=0;i<n;i++)
        {
            ans[i]=findloc(obstacles[i],obs);
        }
        return ans;
    }
private:
    int findloc(int val,vector<int>&obs)
    {
        // for(auto x:obs)cout<<x<<" ";
        // cout<<"->";
        if(obs.size()==0)
        {
            obs.push_back(val); 
            // for(auto x:obs)cout<<x<<" ";cout<<endl;
            return 1;
        }
        else
        {
            int l=0,r=obs.size();
            while(l<r)
            {
                int mid=(l+r)/2;
                if(obs[mid]<=val)l=mid+1;
                else r=mid;
            }
            if(l==obs.size())
            {
                // for(auto x:obs)cout<<x<<" ";cout<<endl;
                obs.push_back(val);
                return obs.size();
            }
            else
            {
                // for(auto x:obs)cout<<x<<" ";cout<<endl;
                obs[l]=val;
                return l+1;
            }
        }
    }
};