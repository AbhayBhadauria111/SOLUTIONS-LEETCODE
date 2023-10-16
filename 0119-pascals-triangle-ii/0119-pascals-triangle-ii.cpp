class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0)return {1};
        else
        {
            vector<int>prev=getRow(rowIndex-1);
            // for(auto x:prev)cout<<x<<" ";cout<<endl;
            vector<int>ans(rowIndex+1,0);
            ans[0]=prev[0];
            for(int i=1;i<rowIndex;i++)
            {
                ans[i]=prev[i]+prev[i-1];
            }
            ans[rowIndex]=1;
            return ans;
        }
    }
};