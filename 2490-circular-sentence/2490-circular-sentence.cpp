class Solution {
public:
    bool isCircularSentence(string sentence) {
       vector<string>V;
        string temp="";
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            {
                if(temp!=" ")V.push_back(temp);
                temp="";
                continue;
            }
            else
            {
                temp+=sentence[i];
            }
        }
        if(temp!=" ")V.push_back(temp);
        // for(auto x:V)cout<<x<<" ";
        if(V.size()==0)return true;
        for(int i=0;i<V.size()-1;i++)
        {
            if(V[i][V[i].size()-1]!=V[i+1][0])return false;
        }
        if(V[V.size()-1][V[V.size()-1].size()-1]!=V[0][0])return false;
        return true;
    }
};