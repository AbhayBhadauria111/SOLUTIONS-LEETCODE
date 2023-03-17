class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int ans=0;
        int used=0;
        int c=0,r=0,o=0,a=0,k=0;
        for(int i=0;i<croakOfFrogs.size();i++)
        {
            if(croakOfFrogs[i]=='c'){c++;used++;}
            if(croakOfFrogs[i]=='r')r++;
            if(croakOfFrogs[i]=='o')o++;
            if(croakOfFrogs[i]=='a')a++;
            if(croakOfFrogs[i]=='k'){k++;used--;}
            if(!(c>=r and r>=o and o>=a and a>=k)){ans=-1;break;}
            ans=max(ans,used);
        }
        if(c==r and r==o and o==a and a==k)return ans;
        return -1;
    }
};