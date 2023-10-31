class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        int curr=1;
        while(target!=1)
        {
            if(maxDoubles==0)return target-1+count;
            if(target%2==0 )
            {
                maxDoubles--;
                target/=2;
            }
            else target--;
            count++;
        }
        return count;
    }
};