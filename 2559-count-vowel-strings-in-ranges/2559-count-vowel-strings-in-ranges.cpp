class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> tillcount;
        int count=0;
        for(auto x:words){
            if((x[0]=='a' or x[0]=='e' or x[0]=='i' or x[0]=='o' or x[0]=='u') and (x[x.size()-1]=='a' or x[x.size()-1]=='e' or x[x.size()-1]=='i' or x[x.size()-1]=='o' or x[x.size()-1]=='u'))count++;
        tillcount.push_back(count);}
        vector<int> ans;
        for(auto x:queries)
        {
            if(x[0]==0)ans.push_back(tillcount[x[1]]);
            else ans.push_back(tillcount[x[1]]-tillcount[x[0]-1]);
        }
        return ans;
        
    }
};