class Solution {
public:
    int findLucky(vector<int>& arr) {
     map<int,int> dict;
        for(auto x:arr)
        {
            if(dict.find(x)==dict.end())dict[x]=1;
            else dict[x]++;
        }
        int res=-1;
        for(auto x:dict)
            if(x.first==x.second and x.first>res)res=x.first;
        return res;
    }
};