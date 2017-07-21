# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def findMode(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        res = []
        s = []
        now = root
        pre = None
        mx, cnt = 0, 1
        while s or now:
            while now:
                s.append(now)
                now = now.left
            now = s.pop(len(s) - 1)
            if pre:
                if now.val == pre.val:
                    cnt = cnt + 1
                else:
                    cnt = 1
            if cnt >= mx:
                if cnt > mx:
                    del res[:]
                res.append(now.val)
                mx = cnt
            if not pre:
                pre = TreeNode(now.val)
            pre.val = now.val
            now = now.right
        return res