class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low=0,high=100000000000000;
        while(low<high)
        {
            long long mid=low+(high-low)/2;
            long long count=0;
            for(int t:time)
                count+=mid/t;
            if(count<totalTrips)low=mid+1;
            else high=mid;
        }
        return high;
    }
};