class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ind=0;
        for(int i=1;i<arr[arr.size()-1];i++)
        {
            if(arr[ind]!=i)
            {
                k--;
            }
            else
                ind++;
            if(k==0)return i;
        }
    return arr[arr.size()-1]+k;
    }
};