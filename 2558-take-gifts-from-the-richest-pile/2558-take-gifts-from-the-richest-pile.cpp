class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> Gifts;
        for(int x:gifts)
            Gifts.push(x);
        int take;
     while(k)
     {
         k-=1;
         take=Gifts.top();
         Gifts.pop();
         Gifts.push(floor(sqrt(take)));
     }
    long long ans;
        while(Gifts.size()!=0)
        {
            ans+=Gifts.top();
            Gifts.pop();
        }
        return ans;
    }
};