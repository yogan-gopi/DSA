class Node:
    def __init__(self, data):

        self.data = data
        self.next = None

    def __del__(self):
        if(self.next):
            del self.next


def addTwoNumbers(head1, head2):
    # Write your code here.
    def getNum(header):
        res = header.data
        header = header.next
        i = 1
        while header.next:
            res = header.data*(10**i)+res
            header = header.next
            i += 1
        return res
    def createList(n):

        head =  Node(n%10)
        n //= 10
        prev = head
        while(n > 0):
            newNode = Node(n%10)
            prev.next = newNode
            prev = newNode
            n //= 10
        last = Node(-1)
        prev.next = last
           
        return head
    
        
    num1 = getNum(head1)

    num2 = getNum(head2)
    summ = num1+num2
    print(num1, num2, summ)
    
    return createList(summ)

def printL(head):
    while head:
        print(head.data, end = " ")
        head = head.next
    print()

if __name__ == '__main__':
    n1 = [7,5,9,4,6, -1]
    n2 = [8,4, -1]
    head1 = Node(n1.pop(0))
    head2 = Node(n2.pop(0))
    prev1 = head1
    prev2 = head2

    for i in n1:
        newNode1 = Node(i)
        prev1.next = newNode1
        prev1 = newNode1
    for j in n2:
        newNode2 = Node(j)
        prev2.next = newNode2
        prev2 = newNode2

    printL(head1)
    printL(head2)

    printL(addTwoNumbers(head1, head2))
