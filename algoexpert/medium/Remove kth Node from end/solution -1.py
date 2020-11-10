# This is an input class. Do not edit.
class LinkedList:
    def __init__(self, value):
        self.value = value
        self.next = None

def removeKthNodeFromEnd(head, k):
    # Write your code here.
    len_linkedlist = 0 
	itr = head
	while itr:
		len_linkedlist += 1
		itr = itr.next
		
	print("Linked List length: ",len_linkedlist)
	
	itr = head
	
	if len_linkedlist == k :
		head.value = head.next.value
		head.next = head.next.next
		
	else:
		print("hheee")
		for i in range(len_linkedlist - k -1 ):
			itr = itr.next
		itr.next = itr.next.next
	