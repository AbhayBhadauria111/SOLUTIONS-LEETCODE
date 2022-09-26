class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        i=0
        j=len(matrix)-1
        pos=0
        while(i<=j):
            mid=(i+j)>>1
            if matrix[mid][0]==target:
                return True
            elif matrix[mid][0]<=target:
                pos=mid
                i=mid+1
            else:
                j=mid-1
        i=0
        j=len(matrix[0])-1
        while(i<=j):
            mid=(i+j)>>1
            if matrix[pos][mid]==target:
                return True
            elif matrix[pos][mid]>target:
                j=mid-1
            else:
                i=mid+1
        return False
                
        