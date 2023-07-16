class MyHashMap {
    vector<int>map;
public:
    MyHashMap() {
        map.resize(1e6+1,-1);
    }
    
    void put(int key, int value) {
        map[key]=value;
    }
    
    int get(int key) {
        if(map[key]!=-1)return map[key];
        return -1;
    }
    
    void remove(int key) {
        map[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */