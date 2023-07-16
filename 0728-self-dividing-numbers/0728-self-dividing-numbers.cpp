class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            int temp=i;
            bool flag=0;
            while(temp!=0)
            {
                if(temp%10==0){flag=1;break;}
                else
                {
                    if(i%(temp%10)==0)
                    {
                        temp=temp/10;
                    }
                    else 
                    {
                        flag=1;break;
                    }
                }
            }
            if(!flag)ans.push_back(i);
        }
        return ans;
    }
};