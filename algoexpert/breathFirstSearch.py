# Do not edit the class below except
# for the breadthFirstSearch method.
# Feel free to add new properties
# and methods to the class.
from collections import deque 
class Node:
    def __init__(self, name):
        self.children = []
        self.name = name

    def addChild(self, name):
        self.children.append(Node(name))
        return self

    def breadthFirstSearch(self, array):
        q = deque()
        sol = []
        currentNode= self
        sol.append(currentNode.name) # Saving the First Node
        while currentNode is not None:
            for i in currentNode.children:
                q.append(i)
            if len(q) == 0:
                return sol
            temp=q.popleft()
            sol.append(temp.name)
            currentNode = temp

		
			
