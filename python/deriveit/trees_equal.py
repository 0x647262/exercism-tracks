"""
Trees Equal
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


def treesEqual(node_one: Optional[_TreeNode], node_two: Optional[_TreeNode]) -> bool:
    # Equal (None)
    if node_one is None and node_two is None:
        return True
    # Unequal (None)
    if not node_one or not node_two:
        return False
    if node_one.val != node_two.val:
        return False

    return treesEqual(node_one.left, node_two.left) and treesEqual(
        node_one.right, node_two.right
    )
