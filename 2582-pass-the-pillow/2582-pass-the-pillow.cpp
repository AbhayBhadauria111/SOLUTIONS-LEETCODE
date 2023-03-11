class Solution {
public:
    int passThePillow(int n, int time) {
        int t=time%(n-1);
        if((time/(n-1))%2==0)
        {
            return t+1;
        }
        else
        {
            return n-t;
        }
    }
};
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18