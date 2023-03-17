class Trie {
public:
    unordered_set<string>T;
    Trie() {
        
    }
    
    void insert(string word) {
        T.insert(word);
    }
    
    bool search(string word) {
        if(T.find(word)!=T.end())return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        for(auto x:T)
        {
            if(x.size()<prefix.size())continue;
            for(int i=0;i<prefix.size();i++)
            {
                if(i<=x.size()-1 and i==prefix.size()-1 and x[i]==prefix[i])return true;
                if(x[i]!=prefix[i])break;
            }
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */