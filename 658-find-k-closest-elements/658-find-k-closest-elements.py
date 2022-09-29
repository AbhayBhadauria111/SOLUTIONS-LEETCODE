class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        D={}
        for i in range(len(arr)):
            if abs(arr[i]-x) not in D:
                D[abs(arr[i]-x)]=[arr[i]]
            else:
                D[abs(arr[i]-x)].append(arr[i])
        A=sorted(D.keys())
        ans=[]
        f=0
        for i in A:
            for j in D[i]:
                ans.append(j)
                if len(ans)==k:
                    f=1
                    break
            if f==1:
                break
        return sorted(ans)
        