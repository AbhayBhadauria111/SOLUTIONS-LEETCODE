class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        float s1=stoi(event1[0].substr(0,2));
        s1+=stof("0."+event1[0].substr(3,2));
        float e1=stoi(event1[1].substr(0,2));
        e1+=stof("0."+event1[1].substr(3,2));
        float s2=stoi(event2[0].substr(0,2));
        s2+=stof("0."+event2[0].substr(3,2));
        float e2=stoi(event2[1].substr(0,2));
        e2+=stof("0."+event2[1].substr(3,2));
        if(s1<s2)
        {
            if(e1>=s2)return true;
        }
        else
        {
            if(e2>=s1)return true;
        }
        return false;
    }
};