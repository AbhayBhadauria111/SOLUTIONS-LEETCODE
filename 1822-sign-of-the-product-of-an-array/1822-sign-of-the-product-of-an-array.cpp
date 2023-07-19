class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool negcount=1;
        for(auto x:nums)
        {
            if(x==0)return 0;
            if(x<0)negcount=negcount^1;
        }  
        return (negcount==1)?1:-1;
    }
    
};