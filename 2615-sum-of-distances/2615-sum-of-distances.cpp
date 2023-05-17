class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        vector<long long>arr(nums.size(),0);
        unordered_map<int,vector<long long>>sumD;
        unordered_map<int,vector<int>>indD;
        for(int i=0;i<nums.size();i++)
        {
            indD[nums[i]].push_back(i);
            if(sumD[nums[i]].size()==0)
            {
                sumD[nums[i]].push_back(i);
            }
            else
            {
                sumD[nums[i]].push_back(sumD[nums[i]].back()+i);
            }
        }
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(auto x:indD[nums[i]])cout<<x<<" ";cout<<endl;
        //     for(auto x:sumD[nums[i]])cout<<x<<" ";cout<<endl;
        // }
        for(int i=0;i<nums.size();i++)
        {
            long long temp=bin(indD[nums[i]],i);
            // cout<<i<<" "<<temp<<endl;
            long long leftsum=(i*(temp+1))-sumD[nums[i]][temp];
            // cout<<leftsum<<" ";
            long long rightsum=sumD[nums[i]].back()-sumD[nums[i]][temp]-i*(sumD[nums[i]].size()-temp-1);
            // cout<<leftsum<<" "<<rightsum<<endl;
            arr[i]=leftsum+rightsum;
        }
        return arr;
    }
private:
    int bin(vector<int>&A,int i)
    {
        int l=0,r=A.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(A[mid]==i)return mid;
            if(A[mid]>i)r=mid-1;
            else l=mid+1;
        }
        return -1;
    }
};