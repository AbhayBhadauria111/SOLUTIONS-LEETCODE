class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size();
        int mid;
        int diff=0;
        while(low<high)
        {
         mid=(low+high)/2;
        diff=arr[mid]-(mid+1);
            if(diff<k)
            {
                low=mid+1;
            }
            else high=mid;
        }
        return low+k;
    }
};