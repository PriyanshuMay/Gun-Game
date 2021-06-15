import sys

class Node:
    def __init__(self,data):
        self.right=self.left=None
        self.data = data
class Solution:
    def insert(self,root,data):
        if root==None:
            return Node(data)
        else:
            if data<=root.data:
                cur=self.insert(root.left,data)
                root.left=cur
            else:
                cur=self.insert(root.right,data)
                root.right=cur
        return root
        
    def levelOrder(self,root):
        from collections import deque
        if root is None: return
        q = deque()
        q.append(root)
        while q:
            node = q.popleft()
            print(node.data, end=" ")
            if node.left is not None: q.append(node.left)
            if node.right is not None: q.append(node.right)

T=int(input())
myTree=Solution()
root=None
for i in range(T):
    data=int(input())
    root=myTree.insert(root,data)
myTree.levelOrder(root)
