class Node{
public:
    Node* arr[26];
    bool end=false;
    bool contains(char c)
    {
        return arr[c-'a']!=nullptr;
    }
    Node* get(char c)
    {
        return arr[c-'a'];
    }
    void put(char c)
    {
        arr[c-'a']=new Node();
    }
};
class Trie {
    Node* root=new Node();
public:
    Trie() {
        // Node root;                                                                                          
    }
    
    void insert(string word) {
        Node* temp=root;
        for(char c:word)
        {
            if(temp->contains(c))
            {
                temp=temp->get(c);
            }
            else
            {
                temp->put(c);
                temp=temp->get(c);
            }
        }
        temp->end=true;
    }
    
    bool search(string word) {
        Node *temp=root;
        for(char c:word)
        {
            if(!temp->contains(c))
            {
                return false;
            }
            temp=temp->get(c);
        }
        return temp->end;
    }
    
    bool startsWith(string prefix) {
        Node *temp=root;
        for(char c:prefix)
        {
            if(!temp->contains(c))
            {
                return false;
            }
            temp=temp->get(c);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */