class Solution {
public:
    int partitionString(string s) {
        int count=0;
        unordered_set<char>Set;
        for(int i=0;i<s.size();i++)
        {
            if(Set.find(s[i])!=Set.end())
            {
                count++;
                Set.clear();
            }
            Set.insert(s[i]);
        }
        return count+1;
    }
};