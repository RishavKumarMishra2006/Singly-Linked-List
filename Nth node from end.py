class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
def nth_from_end(head, n):
    first = head
    for _ in range(n):
        if not first:
            return -1
        first = first.next

    second = head
    while first:
        first = first.next
        second = second.next
    return second.data
