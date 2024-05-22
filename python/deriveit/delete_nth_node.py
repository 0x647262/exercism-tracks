"""
Delete Nth Node
"""

from typing import Optional


class ListNode:
    def __init__(
        self, val: Optional[int] = None, next: Optional["ListNode"] = None
    ) -> None:
        self.val: Optional[int] = val
        self.next: Optional[ListNode] = next


def delete(head: ListNode, nth: int) -> Optional[ListNode]:
    if nth == 0:
        return head.next

    node: Optional[ListNode] = head
    for _ in range(nth - 1):
        if not node:
            return head
        node = node.next

    if not node or not node.next:
        return head

    node.next = node.next.next

    return head
