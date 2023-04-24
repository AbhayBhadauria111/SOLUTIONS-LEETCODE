class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>A(26,0);
        for(char c:s)
        {
            A[c-'a']++;
            if(A[c-'a']==2)return c;
        }
        return 'a';
    }
};