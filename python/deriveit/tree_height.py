"""
Tree Height
"""

from typing import Optional


# Extend DeriveIt's TreeNode class for proper type introspection
class _TreeNode(TreeNode):  # type: ignore [name-defined]
    def __init__(
        self,
        val: Optional[int] = None,
        left: Optional["_TreeNode"] = None,
        right: Optional["_TreeNode"] = None,
    ) -> None:
        self.val: Optional[int] = val
        self.left: Optional[_TreeNode] = left
        self.right: Optional[_TreeNode] = right


def height(root: Optional[_TreeNode]) -> int:
    if root is None:
        return 0

    return 1 + max(height(root.left), height(root.right))
