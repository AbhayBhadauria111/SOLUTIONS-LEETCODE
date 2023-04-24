class Solution {
public:
    int similarPairs(vector<string>& words) {
        map<vector<int>,int>D;
        for(int i=0;i<words.size();i++)
        {
            vector<int>temp(26,0);
            for(int j=0;j<words[i].size();j++)
            {
                temp[words[i][j]-'a']=1;
            }
            D[temp]++;
        }
        int ans=0;
        for(auto x:D){ans+=(x.second*(x.second-1))/2;}
        return ans;
    }
};