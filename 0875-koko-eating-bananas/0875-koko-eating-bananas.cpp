class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low=1;
        long long high=100000000000000;
        cout<<high;
        int timetaken;
        while(low<high)
        {
            timetaken=0;
            long long mid=low+(high-low)/2;
            // cout<<high<<" "<<low<<" "<<(high+low)/2<<" "<<mid<<endl;
            for(int x:piles)
            {
                if(x%mid==0)timetaken+=x/mid;
                else timetaken+=x/mid+1;
            }
            if(timetaken>h)low=mid+1;
            else high=mid;
        }
        return int(high);
    }
};