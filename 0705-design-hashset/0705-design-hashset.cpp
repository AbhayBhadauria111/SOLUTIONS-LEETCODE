class MyHashSet {
    unordered_set<int> myset;
public:
    
    MyHashSet() {
    }
    
    void add(int key) {
       myset.insert(key); 
    }
    
    void remove(int key) {
        myset.erase(key);
    }
    
    bool contains(int key) {
        return myset.find(key)!=myset.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */