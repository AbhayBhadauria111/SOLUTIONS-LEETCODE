# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedListToBST(self, head: Optional[ListNode]) -> Optional[TreeNode]:
        arr=[]
        while(head!=None):
            arr.append(head.val)
            head=head.next
        def Tree(left,right):
            if left>right:
                return None
            mid=(left+right)//2
            Node=TreeNode(arr[mid])
            Node.left=Tree(left,mid-1)
            Node.right=Tree(mid+1,right)
            return Node
        return Tree(0,len(arr)-1)
        