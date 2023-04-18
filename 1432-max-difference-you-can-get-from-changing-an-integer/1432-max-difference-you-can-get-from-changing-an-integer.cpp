class Solution {
public:
    int maxDiff(int num) {
        stack<int>num1;
        stack<int>num2;
        while(num)
        {
            int temp=num%10;
            num1.push(temp);
            num2.push(temp);
            num/=10;
        }
        int maxnum=0;
        while(!num1.empty() and num1.top()==9)
        {
            maxnum=maxnum*10+9;
            num1.pop();
        }
        if(num1.size()>0)
        {
         int a=num1.top();
            while(!num1.empty())
            {
                if(num1.top()==a)
                {
                   maxnum=maxnum*10+9;
                }
                else
                {
                    maxnum=maxnum*10+num1.top();
                }
                num1.pop();
            }
        }
        int minnum=0;
        bool flag=0;
        while(!num2.empty() and (num2.top()==0 or num2.top()==1))
        {
            minnum=minnum*10+num2.top();
            num2.pop();
            flag=1;
        }
        if(num2.size()>0)
        {
            int a=num2.top();
            while(!num2.empty())
            {
                if(num2.top()==a)
                {
                    
                    if(flag)minnum=minnum*10+0;
                    else minnum=minnum*10+1;
                }
                else
                {
                    minnum=minnum*10+num2.top();
                }
                num2.pop();
            }
        }
        // cout<<maxnum<<" "<<minnum<<endl;
        return maxnum-minnum;
    }
};