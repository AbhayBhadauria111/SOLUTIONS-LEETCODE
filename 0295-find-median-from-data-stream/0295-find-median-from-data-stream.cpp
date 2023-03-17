class MedianFinder {
public:
    priority_queue<int>minheap;
    priority_queue<int,vector<int>,greater<int>>maxheap;
    MedianFinder() {
    }
    
    void addNum(int num) {
     if(minheap.size()==0 and maxheap.size()==0)minheap.push(num);
    else if(num>minheap.top())maxheap.push(num);
        else minheap.push(num);
    while(abs(int(minheap.size())-int(maxheap.size()))>1)
    {
        if(minheap.size()>maxheap.size())
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
        else
        {
            minheap.push(maxheap.top());
            maxheap.pop();
        }
    }
    }
    
    double findMedian() {
        // if(minheap.size()>0)cout<<minheap.top()<<" ";
        // if(maxheap.size()>0)cout<<maxheap.top();
        // cout<<endl;
        if(maxheap.size()==minheap.size())return (maxheap.top()+minheap.top())/float(2);
        else if(maxheap.size()>minheap.size())return maxheap.top();
        else return minheap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */