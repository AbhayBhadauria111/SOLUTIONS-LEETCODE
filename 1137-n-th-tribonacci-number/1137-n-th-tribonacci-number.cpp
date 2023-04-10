class Solution {
public:
    int tribonacci(int n) {
        int a=0,b=1,c=1;
        if(n==0)return a;
        if(n==1)return b;
        if(n==2)return c;
        n-=2;
        int curr;
        while(n)
        {
            n-=1;
            curr=a+b+c;
            a=b;
            b=c;
            c=curr;
        }
        return curr;
        
    }
};