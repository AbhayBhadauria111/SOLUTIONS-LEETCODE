class MyCalendar {
    private:
    vector<vector<int>>calendar;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto x:calendar)
        {
            if(max(x[0],start)<min(x[1],end))return false;    
        }
        calendar.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */