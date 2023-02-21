class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      for(int i=0;i<n;i++)
      {
          nums[i]=nums[i]<<10;
          nums[i]=nums[i]|nums[i+n];
      }
        int j=2*n-1;
    for(int i=n-1;i>=0;i--)
    {   
        nums[j--]=1023 &nums[i];
        nums[j--]=nums[i]>>10;
    }
        return nums;
    
    
    }
};