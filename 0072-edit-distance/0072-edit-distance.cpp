class Solution {
private:
    map<pair<int,int>,int>DP;
    int solve(int i,int j,string &word1, string &word2)
    {
        if(j<0)return i+1; 
        if(i<0)return j+1;
        else
        {
            if(DP.find({i,j})!=DP.end())return DP[{i,j}];
            if(word1[i]==word2[j])return solve(i-1,j-1,word1,word2);
            else
            {
                int a,b,c;
                a=1+solve(i-1,j-1,word1,word2);//REPLACE A CHAR
                b=1+solve(i-1,j,word1,word2);//DELETE A CHAR
                c=1+solve(i,j-1,word1,word2);//INSERT A CHAR
                // cout<<i<<" "<<j<<" "<<a<<" "<<b<<" "<<c<<endl;
                return DP[{i,j}]=min(a,min(b,c));
            }
        }
    }
public:
    int minDistance(string word1, string word2) {
        return solve(word1.size()-1,word2.size()-1,word1,word2);
    }
};