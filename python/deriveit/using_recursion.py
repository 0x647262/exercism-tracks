"""
Using Recursion
"""

from typing import Optional


class TreeNode:
    def __init__(
        self,
        val: Optional[int] = None,
        left: Optional["TreeNode"] = None,
        right: Optional["TreeNode"] = None,
    ) -> None:
        self.val: Optional[int] = val
        self.left: Optional[TreeNode] = left
        self.right: Optional[TreeNode] = right


def numNodes(root: Optional[TreeNode]) -> int:
    if root is None:
        return 0

    return 1 + numNodes(root.left) + numNodes(root.right)
