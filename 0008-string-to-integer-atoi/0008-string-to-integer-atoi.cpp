class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        bool neg=0;
        bool plus=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ' and neg==0 and plus==0)continue;
            if(s[i]=='+' and neg==0 and plus==0){plus=1;continue;}
            if(s[i]=='-' and plus==0 and neg==0){neg=1;continue;}
            if(isdigit(s[i]))
            {
                plus=1;
                ans=ans*10+int(s[i]-'0');
                if(!(ans<INT_MAX and ans>INT_MIN))break;
            }
            else{
                break;
            }
            
        }
        if(neg==0)
        {
            if(ans>=INT_MAX)return INT_MAX;
            if(ans<=INT_MIN)return INT_MIN;
        }
        else
        {
            ans=-ans;
            if(ans>=INT_MAX)return INT_MAX;
            if(ans<=INT_MIN)return INT_MIN;
        }
        return int(ans);
    }
};