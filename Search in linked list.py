class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def search_linked_list(head, key):
    temp = head
    while temp:
        if temp.data == key:
            return True
        temp = temp.next
    return False
