# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumEvenGrandparent(self, root: TreeNode) -> int:
        visited = []
        def dfs(root, parent, grandparent):
            if not root:
                return
            if grandparent.val % 2 == 0:
                visited.append(root.val)
            dfs(root.left, root, parent)
            dfs(root.right, root, parent)
        if root:
            if root.left:
                if root.left.left:
                    dfs(root.left.left, root.left, root)
                if root.left.right:
                    dfs(root.left.right, root.left, root)
            if root.right:
                if root.right.left:
                    dfs(root.right.left, root.right, root)
                if root.right.right:
                    dfs(root.right.right, root.right, root)
        return sum(visited)
