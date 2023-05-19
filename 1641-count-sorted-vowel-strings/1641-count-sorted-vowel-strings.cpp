class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>curr(5,0);
        vector<int>prev={1,1,1,1,1};
        while(n!=0)
        {
            n-=1;
            for(int j=0;j<5;j++)
            {
                int temp=accumulate(prev.begin()+j,prev.end(),0);
                curr[j]=temp;
            }
            curr.swap(prev);
        }
        return prev[0];
    }
};