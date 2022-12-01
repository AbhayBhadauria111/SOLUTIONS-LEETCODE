# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def nextLargerNodes(self, head: Optional[ListNode]) -> List[int]:
        curr=head
        arr=[]
        while(curr):
            arr.append(curr.val)
            curr=curr.next
        stack=[]
        ans=[0 for i in range(len(arr))]
        for i in range(len(arr)-1,-1,-1):
            while(stack and stack[-1]<=arr[i]):
                stack.pop()
            if stack:
                ans[i]=stack[-1]
            else:
                ans[i]=0
            stack.append(arr[i])
        return ans
            
                
        
                
                
            
            
            
            

                
        