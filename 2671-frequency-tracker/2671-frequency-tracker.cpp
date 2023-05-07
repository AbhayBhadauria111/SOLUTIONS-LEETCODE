class FrequencyTracker {
    unordered_map<int,int>D;
    unordered_map<int,int>freq;
public:
    
    FrequencyTracker() {
    }
    
    void add(int number) {
        D[number]++;
        freq[D[number]]++;
        freq[D[number]-1]--;
    }
    
    void deleteOne(int number) {
        if(D[number]>0)
        {
            D[number]--;
            freq[D[number]]++;
            freq[D[number]+1]--;
        }
    }
    
    bool hasFrequency(int frequency) {
        return (freq[frequency]>0);
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */