class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        lost={}
        m=0
        for i in matches:
            m=max(m,i[0],i[1])
            lost[i[0]]=lost.get(i[0],0)
            lost[i[1]]=lost.get(i[1],0)+1
        ans=[[],[]]
        for i in range(m+1):
            temp=lost.get(i,-1)
            if temp==0:
                ans[0].append(i)
            elif temp==1:
                ans[1].append(i)
        return ans