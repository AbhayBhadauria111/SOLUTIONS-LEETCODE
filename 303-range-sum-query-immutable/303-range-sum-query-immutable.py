class NumArray:

    def __init__(self, nums: List[int]):
        self.arr=nums
        c=0
        self.pre=[]
        for i in self.arr:
            c+=i
            self.pre.append(c)
        
    def sumRange(self, left: int, right: int) -> int:
        if left==0:
            return self.pre[right]
        else:
            return self.pre[right]-self.pre[left-1]
        


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)