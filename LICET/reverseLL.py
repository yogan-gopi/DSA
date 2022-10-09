class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, newVal):
        n = Node(newVal)
        
        if self.head is None:
            self.head = n
            return
        last = self.head
        while last.next:
            last = last.next
        
        last.next = n

    def printLL(self, head):
        while head:
            print(head.val, "->", end = " ")
            head = head.next
        print("None")

    def printRev(self, head):
        items = []
        while head:
            items.append(head.val)
            head = head.next
        for i in reversed(items):
            print(i)



if __name__ == '__main__':
    ll = LinkedList()
    ll.head = Node(1)
    ll.append(2)
    ll.append(3)
    ll.append(4)
    ll.append(5)

    ll.printLL(ll.head)
    ll.printRev(ll.head)
