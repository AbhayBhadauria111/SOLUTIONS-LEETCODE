# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        stack=[]
        while(head!=None):
            stack.append(head)
            head=head.next
        last=stack.pop()
        mval=last.val
        while(stack):
            temp=stack.pop()
            if temp.val>=mval:
                mval=temp.val
                temp.next=last
                last=temp
        return last