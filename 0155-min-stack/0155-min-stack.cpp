class MinStack {
public:
    vector<int>mainstack;
    vector<int>minlist;
    int ind;
    MinStack() {
        ind=-1;
    }
    
    void push(int val) {
        ind++;
        if(minlist.size()==0)
            minlist.push_back(ind);
        else if(mainstack[minlist.back()]>val)minlist.push_back(ind);
        mainstack.push_back(val);
        
    }
    
    void pop() {
        if(mainstack.size()-1<=minlist.back())minlist.pop_back();
        mainstack.pop_back();
        ind--;
    }
    
    int top() {
       return mainstack.back();
    }
    
    int getMin() {
        
        return mainstack[minlist.back()];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */