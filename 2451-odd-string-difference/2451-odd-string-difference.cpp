class Solution {
public:
    string oddString(vector<string>& words) {
        vector<vector<int>>diffarrays;
        for(int i=0;i<words.size();i++)
        {
            vector<int>temp;
            for(int j=1;j<words[i].size();j++)
            {
                temp.push_back(int(words[i][j])-int(words[i][j-1]));
            }
            diffarrays.push_back(temp);
        }
        map<vector<int>,int>D;
        for(auto x:diffarrays)
        {
            D[x]++;
        }
        for(int i=0;i<diffarrays.size();i++)
        {
            if(D[diffarrays[i]]==1)
            return words[i];
        } 
        return "";
        
    }
};