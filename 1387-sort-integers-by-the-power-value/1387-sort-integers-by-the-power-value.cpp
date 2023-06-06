class Solution {
private:
    unordered_map<int,int>power;
    int getpower(int i,unordered_map<int,int>&power)
    {
        if(i==1)return 0;
        else
        {
            if(power[i]!=0)return power[i];
            if(i%2==0)
            {
                return power[i]=1+getpower(i/2,power);
            }
            else
            {
                return power[i]=1+getpower(3*i+1,power);
            }
        }
    }
public:
    int getKth(int lo, int hi, int k) {
        vector<int>A;
        power.clear();
        power[1]=0;
        for(int i=lo;i<=hi;i++)
        {
            A.push_back(i);
            getpower(i,power);
        }
        // for(auto x:A)cout<<x<<" "<<power[x]<<"||";
        // cout<<endl;
        for(int i=0;i<k;i++)
        {
            int ind=i;
            for(int j=i+1;j<A.size();j++)
            {
                if(power[A[j]]<power[A[ind]])ind=j;
                else if(power[A[j]]==power[A[ind]])
                {
                    if(A[j]<A[ind])ind=j;
                }
            }
            int temp=A[i];
            A[i]=A[ind];
            A[ind]=temp;
        }
        // cout<<endl;
        // for(auto x:A)cout<<x<<" ";
        return A[k-1];
    }
};