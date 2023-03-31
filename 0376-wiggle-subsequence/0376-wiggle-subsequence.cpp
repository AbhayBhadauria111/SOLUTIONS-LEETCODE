class Solution {
public:
    vector<int>pos;
    vector<int>neg;
    int wiggleMaxLength(vector<int>& nums) {
        pos.resize(nums.size());
        neg.resize(nums.size());
        return max(solve(nums,0,0),solve(nums,1,0));
    }
private:
    int solve(vector<int>& nums,bool sign,int i)
    {
        if(i==nums.size())return 0;
        else
        {
            if(sign and pos[i]!=0)return pos[i];
            if(!sign and neg[i]!=0)return neg[i];
            int temp=INT_MIN;
            if(!sign)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]>nums[i])temp=max(temp,solve(nums,1,j));
                }
                if(temp==INT_MIN)neg[i]=1;
                else neg[i]=1+temp;
                return neg[i];
            }
            else
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]<nums[i])temp=max(temp,solve(nums,0,j));
                }
                
                if(temp==INT_MIN)pos[i]=1;
                else pos[i]=1+temp;
                return pos[i];
            }
        }
    }
};