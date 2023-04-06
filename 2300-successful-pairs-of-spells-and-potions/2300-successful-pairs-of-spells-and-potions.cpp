class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>ans;
        int n=potions.size();
        for(int i=0;i<spells.size();i++)
        {
            int j,k;
            j=0;
            k=n;
            while(j<k)
            {
                int mid=(j+k)/2;
                if((long long)spells[i]*potions[mid]>=success)k=mid;
                else j=mid+1;
            }
            ans.push_back((n-k));
        }
        return ans;
    }
};