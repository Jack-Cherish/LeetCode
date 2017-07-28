# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def pathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: List[List[int]]
        """
        if not root:
            return []
        res = []
        self.find(root, sum, [], res)
        return res
    
    def find(self, root, sum, ls, res):
        if not root.left and not root.right and root.val == sum:
            ls.append(root.val)
            res.append(ls)
        if root.left:
            self.find(root.left, sum - root.val, ls + [root.val], res)
        if root.right:
            self.find(root.right, sum - root.val, ls + [root.val], res)
            
    
            
            
