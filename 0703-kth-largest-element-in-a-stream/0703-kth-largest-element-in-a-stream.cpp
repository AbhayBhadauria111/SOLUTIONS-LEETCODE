class KthLargest {
    priority_queue<int,vector<int>,greater<int>>Q;
    int pos;
public:
    KthLargest(int k, vector<int>& nums) {
        pos=k;
        for(auto x:nums){
            if(Q.size()<k)Q.push(x);
            else
            {
                if(x>Q.top())
                {
                    Q.pop();
                    Q.push(x);
                }
            }
        }
    }
    
    int add(int val) {
        if(Q.size()>pos and val<Q.top())return Q.top();
        Q.push(val);
        if(Q.size()>pos)Q.pop();
        return Q.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */