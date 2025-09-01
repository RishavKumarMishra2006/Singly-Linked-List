class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
def print_linked_list(head):
    temp = head
    while temp:
        print(temp.data)
        temp = temp.next
