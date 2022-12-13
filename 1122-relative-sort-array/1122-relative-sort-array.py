class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        temp=[0 for i in range(1001)]
        for i in arr1:
            temp[i]+=1
        ans=[]
        for i in arr2:
            while(temp[i]):
                temp[i]-=1
                ans.append(i)
        for i in range(1001):
            while(temp[i]):
                temp[i]-=1
                ans.append(i)
        return ans
        