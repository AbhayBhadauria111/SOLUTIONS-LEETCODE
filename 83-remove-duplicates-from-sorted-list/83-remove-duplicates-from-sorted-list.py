# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        T=head
        if T==None:
            return None
        while(T!=None and T.next!=None):
            if T.val==(T.next).val:
                if (T.next).next==None:
                    T.next=None
                else:
                    T.next=(T.next).next        
            else:
                T=T.next
        return head
        