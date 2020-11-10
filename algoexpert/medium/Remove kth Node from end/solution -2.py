# This is an input class. Do not edit.
class LinkedList:
    def __init__(self, value):
        self.value = value
        self.next = None


def removeKthNodeFromEnd(head, k):
    # Write your code here.
    f = head
	s = head
	count = 1
	
	while count <=k:
		s = s.next
		count +=1
	if s is None:
		f.value = f.next.value
		f.next = f.next.next
	else:
		while s.next != None:
			s = s.next
			f = f.next
		f.next = f.next.next
