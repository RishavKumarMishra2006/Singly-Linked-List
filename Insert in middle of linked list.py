class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
def insert_middle(head, data):
    if head is None:
        return Node(data)

    # Find middle (slow/fast pointer)
    slow, fast = head, head
    while fast.next and fast.next.next:
        slow = slow.next
        fast = fast.next.next

    new_node = Node(data)
    new_node.next = slow.next
    slow.next = new_node
    return head
