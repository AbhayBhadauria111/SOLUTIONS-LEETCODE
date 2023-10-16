class Solution {
    int find(int curr,vector<int>&parent)
    {
        if(parent[curr]==curr)return curr;
        else
        {
            parent[curr]=find(parent[curr],parent);
            return parent[curr];
        }
    }
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<int>parent(26);
        for(int i=0;i<26;i++)parent[i]=i;
        for(int i=0;i<s1.size();i++)
        {
            int p1=find(s1[i]-'a',parent);
            int p2=find(s2[i]-'a',parent);
            if(p1<p2)
            {
                parent[p2]=p1;
                find(s2[i]-'a',parent);
            }
            else
            {
                parent[p1]=p2;
                find(s1[i]-'a',parent);
            }
        }
        for(int i=0;i<26;i++)
        {
            // cout<<(char)(i+'a')<<"="<<(char)(parent[i]+'a')<<endl;
            parent[i]=find(i,parent);
            
        }
        string ans;
        for(int i=0;i<baseStr.size();i++)
        {
            ans+=(char)('a'+parent[baseStr[i]-'a']);
        }
        // cout<<ans;
        return ans;
        
    }
};