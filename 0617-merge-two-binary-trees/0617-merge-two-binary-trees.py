# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def mergeTrees(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> Optional[TreeNode]:
        def solve(head1,head2):
            if head1==None and head2==None:
                return
            if head2==None:
                return
            if head1!=None and head2!=None:
                head1.val+=head2.val
            if head1.left!=None and head2.left!=None:
                solve(head1.left,head2.left)
            if head1.right!=None and head2.right!=None:
                solve(head1.right,head2.right)
            if head1.left==None and head2.left!=None:
                head1.left=head2.left
            if head1.right==None and head2.right!=None:
                head1.right=head2.right
            
                
        if root1==None:
            return root2
        if root2==None:
            return root1
        solve(root1,root2)
        return root1
                
        