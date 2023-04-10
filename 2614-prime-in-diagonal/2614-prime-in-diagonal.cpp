class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int i=0,j=0;
        int ans=0;
        while(i<nums.size() and j<nums.size())
        {
            if(nums[i][j]>ans)
            {
                if(isprime(nums[i][j]))ans=max(ans,nums[i][j]);
            }
            i+=1;
            j+=1;
        }
        i=0;
        j=nums.size()-1;
        while(i>=0 and j>=0)
        {
           
            if(nums[i][j]>ans)
            {
                if(isprime(nums[i][j]))ans=max(ans,nums[i][j]);
            }
            i+=1;
            j-=1;
        }
        return ans;
    }
private:
    bool isprime(int num)
    {
        if(num==1)return false;
        if(num==2)return true;
        if(num%2==0)return false;
        for(int i=3;i<((int)pow(num,0.5)+1);i=i+2)
        {
            if(num%i==0)return false;
        }
        return true;
            
    }
};