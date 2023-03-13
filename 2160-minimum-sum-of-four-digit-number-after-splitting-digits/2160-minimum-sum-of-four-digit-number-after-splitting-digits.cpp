class Solution {
public:
    int minimumSum(int num) {
        vector<int>s;
        while(num)
        {
            s.push_back(num%10);
            num/=10;
        }    
        int a=0,b=0;
        bool flag=0;
        sort(s.begin(),s.end(),greater<int>());
        while(!s.empty())
        {
            if(flag)
            {
                flag=0;
                a=a*10+s.back();
                s.pop_back();
            }
            else
            {
                flag=1;
                b=b*10+s.back();
                s.pop_back();
            }
        }
        return a+b;
        
        
        
        
        
        
        
        
    }
};