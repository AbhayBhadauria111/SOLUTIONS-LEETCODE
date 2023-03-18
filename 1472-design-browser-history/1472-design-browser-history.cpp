class BrowserHistory {
public:
    vector<string>history;
    int curr;
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        curr=0;
    }
    
    void visit(string url) {
        history.erase(history.begin()+curr+1,history.end());
        history.push_back(url);
        curr=history.size()-1;
    }
    
    string back(int steps) {
        curr-=steps;
        if(curr>=0)
        {
            string ret=history[curr];
            return ret;
        }
        else
        {
            curr=0;
            return history[0];
        }
        return "";
    }
    
    string forward(int steps) {
     curr+=steps;
        if(curr<history.size())
        {
            return history[curr];
        }
        else
        {
            curr=history.size()-1;
            return history[curr];
        }
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */