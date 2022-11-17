# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        stack=[root]
        temp=root
        Last=None
        while(True):
            while(temp!=None):
                if temp.left:
                    stack.append(temp.left)
                temp=temp.left
            if len(stack)==0:
                break
            curr=stack.pop()
            if Last!=None:
                Last.right=curr
                Last.left=None
                Last=curr     
            else:
                Last=curr
                head=curr
                Last.left=None
            temp=curr.right
            if temp:
                stack.append(temp)  
            Last.left=None
        return head
        
        