class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int>vis,ans;
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            if(words[i]=="prev")
            {
                if(count>=vis.size())ans.push_back(-1);
                else
                {
                    ans.push_back(vis[vis.size()-count-1]);
                }
                count++;
            }
            else
            {
                count=0;
                vis.push_back(stoi(words[i]));
            }
        }
        return ans;
    }
};