class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        bool flag=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                flag=1;
                break;
            }
        }
        int ans=0;
        if(flag)sort(arr.begin(),arr.end());
        arr[0]=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]>1)
            {
                arr[i]=arr[i-1]+1;
            }
        }
        // for(auto x:arr)cout<<x<<" ";cout<<endl;
        return arr[arr.size()-1];
    }
};