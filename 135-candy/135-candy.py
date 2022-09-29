class Solution:
    def candy(self, ratings: List[int]) -> int:
        candies=0
        ans=[0]*len(ratings)
        ans[0]=1
        ans[-1]=1
        for i in range(1,len(ratings)):
            if ratings[i]>ratings[i-1]:
                ans[i]=ans[i-1]+1
            else:
                ans[i]=1
        for i in reversed(range(len(ratings)-1)):
            if ratings[i]>ratings[i+1]:
                ans[i]=max(ans[i],ans[i+1]+1)
        print(ans)
        return sum(ans)
        