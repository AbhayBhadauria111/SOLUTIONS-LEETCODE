class RecentCounter {
public:
    vector<int>counter;
    RecentCounter() {
        counter.clear();
    }
    
    int ping(int t) {
        counter.push_back(t);
        int i=counter.size()-1;
        while(i>=0 and t-3000<=counter[i])i--;
        return counter.size()-i-1;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */