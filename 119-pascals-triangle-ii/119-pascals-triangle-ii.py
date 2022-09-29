class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        def row(index):
            if index==0:
                return [1]
            else:
                ans=[]
                A=row(index-1)
                ans.append(1)
                for i in range(index-1):
                    ans.append(A[i]+A[i+1])
                ans.append(1)
                return ans
        return row(rowIndex)
        