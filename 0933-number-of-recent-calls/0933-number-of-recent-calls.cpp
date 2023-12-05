class RecentCounter {
public:
    queue<int>counter;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        counter.push(t);
        while(counter.front()<t-3000)counter.pop();
        return counter.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */