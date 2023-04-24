class Solution {
    int n;
    vector<int>A;
    vector<vector<int>>tbl;
public:
    int maxCoins(vector<int>& nums) {
        n=nums.size();
     A.resize(n+2);
        A[0]=A[n+1]=1;
        for(int i=0;i<n;i++)
        {
            A[i+1]=nums[i];
        }
        tbl.resize(n+2,vector<int>(n+2,INT_MIN));
        return f1(1,n);
    }
private:
    int f1(int i,int j)
    {
        if(tbl[i][j]!=INT_MIN)return tbl[i][j];
        if(j==i-1)return tbl[i][j]=0;
        else if(j==i)return tbl[i][j]=A[i-1]*A[i]*A[i+1];
        else
        {
            tbl[i][j]=0;
            for(int k=i;k<=j;k++)
            {
                tbl[i][j]=max(tbl[i][j],A[i-1]*A[k]*A[j+1]+f1(i,k-1)+f1(k+1,j));
            }
            return tbl[i][j];
        }
    }
};