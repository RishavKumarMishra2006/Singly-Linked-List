class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
def remove_loop(head):
    slow, fast = head, head
    loop_found = False
    
    # Detect loop
    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            loop_found = True
            break
    
    if not loop_found:
        return
    
    # Move one pointer to head, keep other at meeting point
    slow = head
    while slow.next != fast.next:
        slow = slow.next
        fast = fast.next
    
    # Break loop
    fast.next = None
