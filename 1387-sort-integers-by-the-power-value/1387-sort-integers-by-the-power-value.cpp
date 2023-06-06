class Solution {
private:
    int pow(int a)
    {
        int count=0;
        while(a!=1)
        {
            if(a%2==0)a=a/2;
            else a=3*a+1;
            count++;
        }
        return count;
    }
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>A;
        for(int i=lo;i<=hi;i++)
        {
            A.push_back({pow(i),i});
        }
        sort(A.begin(),A.end());
        return A[k-1].second;
    }
};