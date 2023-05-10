class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string,vector<string>>graph;
        unordered_set<string>dish(recipes.begin(),recipes.end());
        unordered_map<string,int>req;
        for(int i=0;i<recipes.size();i++)
        {
            for(auto x:ingredients[i])
            {
                graph[x].push_back(recipes[i]);
                req[recipes[i]]++;
            }
        }
        queue<string>Q;
        for(auto x:supplies)Q.push(x);
        vector<string>ans;
        while(!Q.empty())
        {
            string item=Q.front();Q.pop();
            if(dish.find(item)!=dish.end())ans.push_back(item);
            for(auto x:graph[item])
            {
                req[x]--;
                if(req[x]==0)Q.push(x);
            }
        }
        return ans;
    }
};