# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def addOneRow(self, root: Optional[TreeNode], val: int, depth: int) -> Optional[TreeNode]:
        def solve(head,depth,val,Td):
            if depth==Td+1:
                L=TreeNode(val,left=head.left)
                R=TreeNode(val,right=head.right)
                head.left=L
                head.right=R
                return
            else:
                if head.left!=None:
                    solve(head.left,depth,val,Td+1)
                if head.right!=None:
                    solve(head.right,depth,val,Td+1)
        solve(root,depth,val,1)
        if depth==1:
            N=TreeNode(val,root)
            return N
        return root

           