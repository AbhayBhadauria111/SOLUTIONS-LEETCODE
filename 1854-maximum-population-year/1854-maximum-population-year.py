class Solution:
    def maximumPopulation(self, logs: List[List[int]]) -> int:
        D={}
        for i in logs:
            D[i[0]]=D.get(i[0],0)+1
            D[i[1]]=D.get(i[1],0)-1
        years=list(D.keys())
        years.sort()
        curr=0
        maxpop=0
        ans=0
        for i in years:
            curr+=D[i]
            if curr>maxpop:
                maxpop=curr
                ans=i
        return ans
        