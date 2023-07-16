class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int n=arr.size();
        vector<int>next(n,n);
        unordered_map<int,int>map;
        for(int i=n-1;i>=0;i--)
        {
            if(map.find(arr[i]+difference)!=map.end())
            {
                next[i]=map[arr[i]+difference];
            }
            map[arr[i]]=i;
        }
        vector<int>f1(n+1,0),f2(n+1,0);
        for(int i=n-1;i>=0;i--)
        {
            if(next[i]<n)
                f2[i]=1+f2[next[i]];
            else
                f2[i]=1;
        }
        for(int i=n-1;i>=0;i--)
        {
            f1[i]=max(f1[i+1],1+f2[next[i]]);
        }
       return f1[0];
        
    }
};