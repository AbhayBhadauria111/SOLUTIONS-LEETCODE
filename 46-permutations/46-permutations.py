class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        def permute(a, l, r,A): 
            if l==r:
                A.append(a[::])
            else: 
                for i in range(l,r): 
                    a[l], a[i] = a[i], a[l] 
                    permute(a, l+1, r,A) 
                    a[l], a[i] = a[i], a[l] 
        A=[]
        permute(nums,0,len(nums),A)
        return A
            
            
        