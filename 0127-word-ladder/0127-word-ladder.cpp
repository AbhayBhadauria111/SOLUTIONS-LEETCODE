class Solution {
public:
    deque<vector<string>> Queue;
     unordered_set<string>Wordset;
    vector<string> changeword(string s)
    {
         vector<string>ret={};
        for(int i=0;i<s.size();i++)
        {
            string temp=s;
            for(int j=0;j<27;j++)
            {
                temp[i]=char(j+97);
                if(Wordset.find(temp)!=Wordset.end())
                {
                    Wordset.erase(Wordset.find(temp));
                    ret.push_back(temp);
                }
            }
        }
        return ret;
    }
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        for(auto x:wordList)Wordset.insert(x);
        Queue.push_back({beginWord});
        vector<string>temp;
        vector<string>next;
        vector<string>temp2;
        int count=1;
        while(!Queue.empty())
        {
            next.clear();
            temp2.clear();
            temp=Queue.front(); Queue.pop_front();
        
            for(auto word:temp)
            {
                if(word==endWord)return count;
                temp2=changeword(word);
                if(temp2.size()>=1)next.insert(next.end(),temp2.begin(),temp2.end());
            }
            if(next.size()>=1)
            Queue.push_back(next);
            count++;
        }
        return 0;
    }
    
};