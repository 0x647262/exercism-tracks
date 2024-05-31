"""
Invert Tree
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


def invertAll(node: Optional[TreeNode]) -> None:
    if node is None:
        return

    node.left, node.right = node.right, node.left
    invertAll(node.left)
    invertAll(node.right)
