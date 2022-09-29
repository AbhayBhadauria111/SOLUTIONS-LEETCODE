class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans=[]
        for i in range(numRows):
            temp=[]
            for j in range(i+1):
                if j==0 or j==i:
                    temp.append(1)
                else:
                    temp.append(ans[i-1][j-1]+ans[i-1][j])
            ans.append(temp)
        return ans
        