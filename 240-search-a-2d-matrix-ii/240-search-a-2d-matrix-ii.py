class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for i in matrix:
            j=0
            k=len(i)-1
            if i[-1]<target:
                continue
            while(j<=k):
                mid=(k+j)>>1
                if i[mid]==target:
                    return True
                elif i[mid]>target:
                    k=mid-1
                else:
                    j=mid+1
        return False
                    
        