class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>V={0,INT_MAX};
        int ans=INT_MAX;
        vector<int>A;
        int k=0;
        for(int i=left;i<=right;i++)
        {
            if(isprime(i))
            {
                // cout<<i<<" "<<V[0]<<V[1]<<endl;
                k++;
                V[k%2]=i;
                if(abs(V[k%2]-V[(k+1)%2])<ans and V[0]!=0 and V[1]!=INT_MAX)
                {
                   A={V[0],V[1]}; 
                    ans=abs(V[k%2]-V[(k+1)%2]);
                }
            }
        }
        sort(A.begin(),A.end());
        if(V[0]==0 or V[1]==INT_MAX)return {-1,-1};
        return A;
    }
private:
    bool isprime(int num)
    {
        if(num==2)return true;
        if(num%2==0 or num==1)return false;
        for(int i=3;i<(int)(pow(num,0.5)+1);i+=2)
        {
            if(num%i==0)return false;
        }
        return true;
    }
};