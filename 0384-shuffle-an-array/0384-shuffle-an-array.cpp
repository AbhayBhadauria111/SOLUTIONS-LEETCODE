class Solution {
    vector<int>original;
public:
    Solution(vector<int>& nums) {
        original=nums;
    }
    
    vector<int> reset() {
        return original;
    }
    
    vector<int> shuffle() {
        vector<int>temp=original;
        vector<int>ret;
        while(temp.size())
        {
            int ind=rand()%temp.size();
            ret.push_back(temp[ind]);
            temp[ind]=temp.back();
            temp.pop_back();
        }
        return ret;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */