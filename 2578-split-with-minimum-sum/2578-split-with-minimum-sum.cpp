class Solution {
public:
    int splitNum(int num) {
        vector<int>N;
        while(num)
        {
            N.push_back(num%10);
            num/=10;
        }
        sort(N.begin(),N.end());
        int a=0,b=0;
        for(int i=0;i<N.size();i++)
        {
            if(i%2==0)
            {
                a=a*10+N[i];
            }
            else
            {
                b=b*10+N[i];
            }
        }
        return a+b;
    }
};