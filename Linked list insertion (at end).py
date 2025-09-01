class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
def insert_end(head, data):
    new_node = Node(data)
    if head is None:
        return new_node
    temp = head
    while temp.next:
        temp = temp.next
    temp.next = new_node
    return head
