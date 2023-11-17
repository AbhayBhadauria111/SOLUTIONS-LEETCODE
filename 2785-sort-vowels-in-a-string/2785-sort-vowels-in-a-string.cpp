class Solution {
public:
    string sortVowels(string s) {
        unordered_set<char>vowels={'a','e','i','o','u','A','E','I','O','U'};
        vector<char>temp;
        for(auto x:s)
        {
            if(vowels.find(x)!=vowels.end())temp.push_back(x);
        }
        sort(temp.begin(),temp.end());
        int i=0;
        string ans;
        for(auto x:s)
        {
            if(vowels.find(x)==vowels.end())
            {
                ans+=x;
            }
            else
            {
                ans+=temp[i];
                i++;
            }
        }
        return ans;
    }
};