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


def delete_nth_to_last_node(head: ListNode, nth_to_last: int) -> Optional[ListNode]:
    temp: ListNode = ListNode()
    temp.next = head

    l: Optional[ListNode] = temp
    r: Optional[ListNode] = temp

    # Create a window of `nth_to_last` + 1 to slide down the list:
    for _ in range(nth_to_last + 1):
        if not r:
            # If the window exceeds the size of the list, delection is not
            # possible. Raise a `ValueError` instead:
            raise ValueError("r.next is inaccessible")
        r = r.next

    while r:
        if not l:
            # Raise a `ValueError` if l.next is not accessible:
            raise ValueError("l.next is inaccessible")
        l = l.next
        r = r.next

    if not l:
        raise ValueError("l.next is inaccessible")
    if not l.next:
        raise ValueError("l.next.next is inaccessible")

    l.next = l.next.next

    return temp.next


def deleteNthToLastNode(head: ListNode, nth_to_last: int) -> Optional[ListNode]:
    return delete_nth_to_last_node(head, nth_to_last)
