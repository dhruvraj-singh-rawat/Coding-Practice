class Node:
    def __init__(self,data = None , next = None):
        self.data = data
        self.next = next

class Linkedlist:
    def __init__(self):
        self.head = None
    
    def insert_begining(self,data):
        node = Node(data , self.head)
        self.head = node

    def insert_tail(self,data):
        itr = self.head
        while itr.next :
            itr = itr.next
        node = Node(data,itr.next)
        itr.next =node

    def traverse_linked_list(self):
        itr = self.head
        linklist_str = ''
        while itr:
            linklist_str = linklist_str+'-->'+str(itr.data)
            itr = itr.next
        print(linklist_str)

node = Linkedlist()
node.insert_begining(1)
node.insert_begining(10)
node.insert_begining(7)

node.insert_tail(100)
node.insert_tail(200)
node.traverse_linked_list()


    