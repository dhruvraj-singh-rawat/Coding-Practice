# Do not edit the class below except for
# the insert, contains, and remove methods.
# Feel free to add new properties and methods
# to the class.
class BST:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


    def insert(self, value):
        # Write your code here.
        # Do not edit the return statement of this method.
        currentNode = self
        while True:
            if currentNode.value <= value:
                if currentNode.right is None:
                    currentNode.right  = BST(value)
                    break
                currentNode = currentNode.right
            else:
                if currentNode.left is None:
                    currentNode.left = BST(value)
                    break
                currentNode = currentNode.left
                                
            
        return self

    def contains(self, value):
        # Write your code here.
        currentNode = self
        while currentNode is not None:
            if currentNode.value < value:
                currentNode = currentNode.right
            elif currentNode.value > value:
                currentNode = currentNode.left
            else:
                return True
        return False
    def getMinvalue(self):
        currentNode = self
        while True:
            if currentNode.left is not None:
                currentNode = currentNode.left
            else:
                return currentNode.value

    def remove(self, value,parentNode = None):
        # Write your code here.
        # Do not edit the return statement of this method.
        currentNode = self
        while currentNode is not None : 
            if currentNode.value < value :
                parentNode = currentNode
                currentNode = currentNode.right
            elif currentNode.value > value:
                parentNode = currentNode
                currentNode = currentNode.left
            else:

                if currentNode.left is not None and currentNode.right is not None:
                    min_value  = currentNode.right.getMinvalue() 
                    currentNode.value = min_value
                    currentNode.right.remove(min_value,currentNode)

                elif parentNode is not None:
                    if parentNode.left is currentNode:
                        parentNode.left = currentNode.left if currentNode.left is not None else currentNode.right
                    else:
                        parentNode.right = currentNode.left if currentNode.left is not None else currentNode.right
                else:
                    if currentNode.left is not None:
                        currentNode.value = currentNode.left.value
                        currentNode.right = currentNode.left.right
                        currentNode.left = currentNode.left.left
                    elif currentNode.right is not None:
                        currentNode.value = currentNode.right.value
                        currentNode.left = currentNode.right.left
                        currentNode.right = currentNode.right.right
                    else:
                        currentNode.value = None
                break

        return self
