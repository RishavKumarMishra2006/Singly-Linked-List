class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
def delete_node(head, position):
    if head is None:
        return None
    if position == 1:
        return head.next

    temp = head
    for _ in range(position-2):
        if temp is None or temp.next is None:
            return head
        temp = temp.next
    if temp.next:
        temp.next = temp.next.next
    return head
