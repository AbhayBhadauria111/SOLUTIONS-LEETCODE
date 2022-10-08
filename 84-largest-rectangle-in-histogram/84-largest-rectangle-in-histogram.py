class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        def leftsmall(Arr):
            stack=[-1]
            left=[]
            for i in range(len(Arr)):
                while(len(stack)!=1 and Arr[stack[-1]]>=Arr[i]):
                    stack.pop()
                left.append(stack[-1])
                stack.append(i)
            return left
        def rightsmall(Arr):
            stack=[len(Arr)]
            right=[]
            for i in range(len(Arr)-1,-1,-1):
                while(len(stack)!=1 and Arr[stack[-1]]>=Arr[i]):
                    stack.pop()
                right.append(stack[-1])
                stack.append(i)
            return right[::-1]
        left=leftsmall(heights)
        right=rightsmall(heights)
        ans=0
        for i in range(len(heights)):
            ans=max(ans,heights[i]*(right[i]-left[i]-1))
        return ans