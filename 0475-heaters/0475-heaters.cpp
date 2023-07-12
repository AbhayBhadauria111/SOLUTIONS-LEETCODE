class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int low=0,high=max(abs(heaters.back()-houses[0]),abs(houses.back()-heaters[0]));
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(canCover(mid,houses,heaters))high=mid;
            else low=mid+1;
        }
        return low;
    }
private:
    bool canCover(int mid,vector<int>& houses, vector<int>& heaters)
    {
        int i=0;
        for(auto x:houses)
        {
            while(i<heaters.size() and abs(x-heaters[i])>mid )i++;   
            if(i==heaters.size() and abs(x-heaters[i-1])>mid )return false;
        }
        return true;
        
    }
};