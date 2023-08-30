class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>D;
        for(auto x:arr)D[x]+=1;
        for(auto x:D)
        {
            if(x.second>=0.25*arr.size())return x.first;
        }
        return -1;
    }
};