# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def amountOfTime(self, root: Optional[TreeNode], start: int) -> int:
        parents = {}
        target = []
        def dfs(root, parent):
            if not root:
                return
            parents[root] = parent
            dfs(root.left, root)
            dfs(root.right, root)
            if root.val == start and not target:
                target.append(root)
        dfs(root, None)
        visited = set()
        queue = deque([target[0]])
        levels = []
        while queue:
            n = len(queue)
            level = []
            for i in range(n):
                node = queue.popleft()
                if node in visited:
                    pass
                else:
                    visited.add(node)
                    level.append(node.val)
                    if node.left:
                        queue.append(node.left)
                    if node.right:
                        queue.append(node.right)
                    if parents[node]:
                        queue.append(parents[node])
            if level:
                levels.append(level)
        #print(levels)
        return len(levels) - 1
