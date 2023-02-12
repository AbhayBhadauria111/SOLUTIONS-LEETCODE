class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int>,greater<int>> heap;
    set<int>notin;
    SmallestInfiniteSet() {
        for(int i=1;i<1001;i++)heap.push(i);
    }
    
    int popSmallest() {
        int a=heap.top();
        heap.pop();
        notin.insert(a);
        return a;
    }
    
    void addBack(int num) {
        if(notin.find(num)!=notin.end())
        {
            heap.push(num);
            notin.erase(notin.find(num));
        }
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */