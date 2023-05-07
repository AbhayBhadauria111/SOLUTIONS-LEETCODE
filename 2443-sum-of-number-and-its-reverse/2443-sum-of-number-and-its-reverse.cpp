class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int n=min(num,rev(num));
        if(num==0 or num==10)return true;
        for(int i=0;i<=n;i++)
        {
            if(i+rev(i)==num)return true;
        }
        return false;
    }
private:
    int rev(int n)
    {
        int num=0;
        while(n)
        {
            num=num*10+n%10;
            n/=10;
        }
        return num;
    }
};