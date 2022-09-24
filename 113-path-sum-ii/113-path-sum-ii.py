# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        def traverse(root,count,arr,ans):
            arr.append(root.val)
            count+=root.val
            if root.left==None and root.right==None:
                if count==targetSum:
                    ans.append(arr)
            else:
                if root.left!=None:
                    traverse(root.left,count,arr[::],ans)
                if root.right!=None:
                    traverse(root.right,count,arr[::],ans)
        ans=[]
        if root==None:
            return []
        traverse(root,0,[],ans)
        return ans
        