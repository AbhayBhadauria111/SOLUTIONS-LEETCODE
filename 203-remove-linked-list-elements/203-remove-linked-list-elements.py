# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        if head==None:
            return None
        else:
            while head!=None and head.val==val:
                head=head.next
            curr=head
            while(curr!=None and curr.next!=None):
                if curr.next.val==val:
                    temp=curr
                    curr=curr.next
                    while(curr.val==val):
                        curr=curr.next
                        if curr==None:
                            break
                    temp.next=curr
                else:
                    curr=curr.next
            return head
                    
            
        