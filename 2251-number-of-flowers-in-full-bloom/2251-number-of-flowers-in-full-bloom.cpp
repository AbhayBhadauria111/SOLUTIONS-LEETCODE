class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        priority_queue<int,vector<int>,greater<int>>bloom,wither;
        for(auto x:flowers)
        {
            bloom.push(x[0]);
            wither.push(x[1]);
        }
        vector<int>traverse=people;
        sort(traverse.begin(),traverse.end());
        unordered_map<int,int>D;
        int count=0;
        vector<int>ans;
        for(auto x:traverse)
        {
            while(!bloom.empty() and bloom.top()<=x)
            {
                count++;bloom.pop();
            }
            while(!wither.empty() and wither.top()<x)
            {
                count--;wither.pop();
            }
            D[x]=count;
            
        }
        
        for(auto x:people)
        {
            ans.push_back(D[x]);
        }
        return ans;
    }
};