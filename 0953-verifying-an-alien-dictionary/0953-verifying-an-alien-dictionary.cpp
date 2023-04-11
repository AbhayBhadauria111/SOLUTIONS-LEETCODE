class Solution {
public:
    unordered_map<char,int>D;
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0;i<order.size();i++)D[order[i]]=i;
        for(int i=1;i<words.size();i++)
        {
            if(comp(words[i-1],words[i]))return false;
        }
        return true;
    }
private:
    bool comp(string word1,string word2)
    {
        int i=0,j=0;
        while(i<word1.size() and j<word2.size())
        {
            if(D[word1[i]]<D[word2[j]])return false;
            else if(D[word1[i]]>D[word2[j]])return true;
            i++;j++;
        }
        if(i==word1.size())return false;
        return true;
    }
};