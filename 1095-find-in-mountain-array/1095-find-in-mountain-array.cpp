/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
    int searchasc(int l,int r,int target, MountainArray &mountainArr)
    {
        while(l<=r)
        {
            int mid=(l+r)/2,curr=mountainArr.get(mid);
            if(curr==target)return mid;
            if(curr<target)l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
    int searchdesc(int l,int r,int target, MountainArray &mountainArr)
    {
        while(l<=r)
        {
            int mid=(l+r)/2,curr=mountainArr.get(mid);
            if(curr==target)return mid;
            if(curr>target)l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int ind,i=0,mid,n=mountainArr.length();
        int j=n-1;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            int left=(mid-1>=0)?mountainArr.get(mid-1):-1;
            int right=(mid+1<n)?mountainArr.get(mid+1):-1;
            int curr=mountainArr.get(mid);
            if(left<curr and curr>right)
            {
                ind=mid;
                break;
            }
            else if(left<curr and right>curr)
            {
                i=mid+1;
            }
            else if(left>curr and right<curr)
            {
                j=mid-1;
            }
        }
        // cout<<ind;
        int ans=searchasc(0,ind,target,mountainArr);
        if(ans!=-1)return ans;
        ans=searchdesc(ind,n-1,target,mountainArr);
        return ans;
        
    }
};