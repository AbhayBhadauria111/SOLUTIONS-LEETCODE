class Solution {
    string solve(int ind,int last,string temp,unordered_set<string>&strings)
    {
        if(ind==last)
        {
            // cout<<temp<<" ";
            if(strings.find(temp)==strings.end())
            {
                // cout<<temp<<" ";
                return temp;
            }
            else return "";
            // return ?temp:"";
        }
        else
        {
            string take,nottake;
            take=solve(ind+1,last,temp+"0",strings);
            nottake=solve(ind+1,last,temp+"1",strings);
            if(take.size()>=nottake.size())return take;
            else return nottake;
        }
    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string>strings(nums.begin(),nums.end());
        return solve(0,nums[0].size(),"",strings);
    }
};