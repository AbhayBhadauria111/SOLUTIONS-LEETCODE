class Solution {
    private:
    double time(vector<int>& dist,int speed)
    {
        double ret=0;
        for(int i=0;i<dist.size()-1;i++)ret+=(dist[i]+speed-1)/speed;
        ret+=dist[dist.size()-1]/(double)speed;
        return ret;
    }
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        if(hour<=dist.size()-1)return -1;
        int r=1e9;
        int l=1;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(time(dist,mid)<=hour)
                r=mid;
            else
                l=mid+1;
        }
        return l;
    }
};