# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def verticalTraversal(self, root: Optional[TreeNode]) -> List[List[int]]:
        D={}
        def traverse(i,j,root,D):
            if root==None:
                return
            else:
                if j not in D:
                    D[j]={i:[root.val]}
                else:
                    T=D[j]
                    if i not in T:
                        T[i]=[root.val]
                    else:
                        T[i].append(root.val)
                if root.left:
                    traverse(i+1,j-1,root.left,D)
                if root.right:
                    traverse(i+1,j+1,root.right,D)
        traverse(0,0,root,D)
        A=list(D.keys())
        A.sort()
        Ans=[]
        for i in A:
            T=D[i]
            temp=list(T.keys())
            temp.sort()
            arr=[]
            for j in temp:
                curr=T[j]
                curr.sort()
                for k in curr:
                    arr.append(k)
            Ans.append(arr)
        return Ans
                
            
            
                
            
                    