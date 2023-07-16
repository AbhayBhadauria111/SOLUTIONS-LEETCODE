class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int t=accumulate(arr.begin(),arr.end(),0);
        if(t%3!=0)return false;
        t=t/3;
        int count=0,curr=0;
        for(int i=0;i<arr.size();i++)
        {
            curr+=arr[i];
            if(curr==t)
            {
                curr=0;count++;
                if(count==2 and i+1<arr.size())return true;
            }
            
        }
        return false;
    }
};