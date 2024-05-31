"""
Clone Tree
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


def cloneTree(root: Optional[_TreeNode]) -> Optional[_TreeNode]:
    if root is None:
        return None

    clone: _TreeNode = _TreeNode(root.val)
    clone.left = cloneTree(root.left)
    clone.right = cloneTree(root.right)

    return clone
