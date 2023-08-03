class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size(),-1),right(height.size(),-1);
        int maxx=0;
        for(int i=0;i<height.size();i++)
        {
            left[i]=maxx;
            maxx=max(maxx,height[i]);
        }
        maxx=0;
        for(int i=height.size()-1;i>=0;i--)
        {
            right[i]=maxx;
            maxx=max(maxx,height[i]);
        }
        int ans=0;
        for(int i=0;i<height.size();i++)
        {
            int temp=min(left[i],right[i])-height[i];
            if(temp>0)ans+=temp;
        }
        return ans;
        
    }
};