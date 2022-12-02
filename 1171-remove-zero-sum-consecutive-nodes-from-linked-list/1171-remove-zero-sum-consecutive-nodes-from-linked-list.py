# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeZeroSumSublists(self, head: Optional[ListNode]) -> Optional[ListNode]:
        def remove(s,end):
            if s==0:
                node=head
            else:
                node=D[s].next
            temp=s
            while(node!=end):
                temp+=node.val
                del D[temp]
                node=node.next
        if head is None:
            return None
        D={}
        curr=head
        s=0
        while(curr!=None):
            s+=curr.val
            if s==0:
                remove(s,curr)
                head=curr.next
                curr=curr.next
                continue
            elif s in D:
                remove(s,curr)
                D[s].next=curr.next
                curr=curr.next
                continue
            D[s]=curr
            curr=curr.next
        return head
        
                
            
        