class Node{
    Node* arr[26];
   
    public:
        bool end=false;
        void addchar(char c)
        {
            arr[c-'a']=new Node();
        }
        bool contains(char c)
        {
            return arr[c-'a']!=nullptr;
        }
        Node* getchar(char c)
        {
            // cout<<c<<" ";
            return arr[c-'a'];
        }
};

class WordDictionary {
    Node* root;
public:
    WordDictionary() {
        root=new Node();
    }
    
    void addWord(string word) {
        if(word.size()==0)return;
        // cout<<word<<" ";
        Node* temp=root;
        for(auto x:word)
        {
            // cout<<x<<" ";
            if(temp->contains(x))
            {
                temp=temp->getchar(x);
            }
            else
            {
                temp->addchar(x);
                temp=temp->getchar(x);
            }
        }
        // cout<<endl;
        temp->end=true;
    }
    
    bool search(string word) {
        if(word.size()==0)return true;;
        Node* temp=root;
        if(word[0]!='.' and !temp->contains(word[0]))return false;
        vector<Node*>curr={temp},next;
        for(auto x:word)
        {
            next.clear();
            bool flag=false;
            for(auto node:curr)
            {
                if(x=='.')
                {
                    for(int i=0;i<26;i++)
                    {
                        if(node->contains(char('a'+i)))
                       { next.push_back(node->getchar(char('a'+i)));flag=true;}   
                    }
                }
                else
                {
                    if(node->contains(x))
                    {
                        next.push_back(node->getchar(x));
                        flag=true;
                    }
                }
            }
            if(!flag)return false;
            curr=next;
        }
        for(auto x:curr)if(x->end)return true;
        return false;
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */