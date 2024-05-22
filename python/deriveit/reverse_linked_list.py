"""
Reverse Linked List
"""

# Here's the definition of a ListNode:
from typing import Optional


class ListNode:
    def __init__(
        self, val: Optional[int] = None, next: Optional["ListNode"] = None
    ) -> None:
        self.val = val
        self.next = next


def reverse_list(head: ListNode) -> Optional[ListNode]:
    """
    Walk a linked list and return the reversed list

    Starting positions:

        p    c      n
        |    |      |
        N   [ ] -> [ ] -> [ ] -> N

    Ending positions:

                            p    c(n)
                            |    |
        N <- [ ] <- [ ] <- [ ]   N
    """
    current: Optional[ListNode] = head
    previous: Optional[ListNode] = None

    while current:
        next: Optional[ListNode] = current.next
        current.next = previous
        previous = current
        current = next

    return previous


def reverseList(head: ListNode) -> Optional[ListNode]:
    return reverse_list(head)
