class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1,high=sqrt(INT_MAX);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(mid*mid==num)return true;
            if(mid*mid>num)high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};