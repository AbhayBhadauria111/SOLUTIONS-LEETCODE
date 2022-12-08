class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        D={}
        for i in trips:
            D[i[1]]=D.get(i[1],0)+i[0]
            D[i[2]]=D.get(i[2],0)-i[0]
        A=list(D.keys())
        A.sort()
        c=0
        for i in A:
            c+=D[i]
            if c>capacity:
                return False
        return True
        
        