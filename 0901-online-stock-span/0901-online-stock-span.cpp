class StockSpanner {
public:
    vector<int>stockprices;
    vector<int>span;
    int i;
    StockSpanner() {
        i=-1;
    }
    
    int next(int price) {
        int res=1;
        stockprices.push_back(price);
        i++;
        if(span.size()==0)
        {
            span.push_back(i);
            return res;
        }
        while(span.size()>0 and stockprices[span.back()]<=price)
        {
            span.pop_back();
        }
        if(span.size()==0)res=stockprices.size();
        else res=stockprices.size()-1-span.back();
        span.push_back(i);
        return res;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */