class Solution {
public:
    int minimumRecolors(string blocks, int k) {
      int i=0;
        int j=0;
        int whitecount=0;
        int ans=INT_MAX;
        while(j<i+k)
        {
            if(blocks[j]=='W')whitecount++;
            j++;
        }
        ans=min(ans,whitecount);
        while(j<blocks.size())
        {
            if(blocks[j]=='W')whitecount++;
            if(blocks[i]=='W')whitecount--;
            
            ans=min(ans,whitecount);
            i++;
            j++;
        }
        return ans;
    }
};