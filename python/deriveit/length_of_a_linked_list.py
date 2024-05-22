"""
Length of a Linked List
"""

# Here's the definition of a ListNode:
from typing import Optional


class ListNode:
    def __init__(
        self, val: Optional[int] = None, next: Optional["ListNode"] = None
    ) -> None:
        self.val = val
        self.next = next


def list_length(head: ListNode) -> int:
    """
    Walks a linked list and returns the number of nodes
    """
    nodes: int = 0
    node: Optional[ListNode] = head

    while node:
        nodes += 1
        node = node.next

    return nodes


def listLength(head: ListNode) -> int:
    return list_length(head)
