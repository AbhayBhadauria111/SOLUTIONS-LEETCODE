class Solution {
private:
    int solve(unordered_map<char,int>&D)
    {
        int count=0;
        for(auto &x:D)
        {
            if(x.second>0)
            {
                x.second--;
                count+=solve(D);
                x.second++;
            }
        }
        return count+1;
    }
public:
    int numTilePossibilities(string tiles){
        unordered_map<char,int>D;
        for(auto x:tiles)D[x]++;
        return solve(D)-1;
    }
};