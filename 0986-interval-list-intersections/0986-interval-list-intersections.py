class Solution:
    def intervalIntersection(self, firstList: List[List[int]], secondList: List[List[int]]) -> List[List[int]]:
        def check(A,B):
            temp=min(A[1],B[1])-max(A[0],B[0])
            return temp
        F=S=0
        ans=[]
        while(F<len(firstList) and S<len(secondList)):
            A=firstList[F]
            B=secondList[S]
            if check(A,B)>=0:
                ans.append([max(A[0],B[0]),min(A[1],B[1])])
            if B[1]<A[1]:
                S+=1
            else:
                F+=1
        return ans
            
        