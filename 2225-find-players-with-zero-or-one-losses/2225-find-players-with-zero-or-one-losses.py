class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        lost={}
        for i in matches:
            lost[i[0]]=lost.get(i[0],0)
            lost[i[1]]=lost.get(i[1],0)+1
        ans=[[],[]]
        for i in lost:
            if lost[i]==0:
                ans[0].append(i)
            elif lost[i]==1:
                ans[1].append(i)
        ans[0].sort()
        ans[1].sort()
        return ans