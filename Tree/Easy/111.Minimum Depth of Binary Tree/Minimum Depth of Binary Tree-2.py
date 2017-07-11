# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def minDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not root:
            return 0
        queue = [root]
        height = 0
        while queue:
            # node = queue.pop(0)
            height += 1 
            ls = [] 
            for temp in queue:
                if not temp.right and not temp.left:
                    return height 
                if temp.left:
                    ls.append(temp.left)
                if temp.right:
                    ls.append(temp.right)
            queue = ls 
        return height 
    