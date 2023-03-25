class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
       int ans=INT_MAX;
        int temp;
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==target)
            {
                temp=startIndex-i;
                ans=min(ans,abs(temp));
                temp=words.size()-i+startIndex;
                ans=min(ans,abs(temp));
                temp=i+words.size()-startIndex;
                ans=min(ans,abs(temp));
            }
            // cout<<ans<<" ";
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};