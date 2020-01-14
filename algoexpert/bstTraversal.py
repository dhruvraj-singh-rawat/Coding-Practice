def inOrderTraversal(tree,array):
    if tree is None:
        return 
    inOrderTraversal(tree.left,array)
    array.append(tree.value)
    inOrderTraversal(tree.right,array)

def preOrderTraversal(tree,array):
    if tree is None:
        return

    array.append(tree.value)
    preOrderTraversal(tree.left,array)
    preOrderTraversal(tree.right,array)


def postOrderTraversal(tree,array):
    if tree is None:
        return    
    postOrderTraversal(tree.left,array)
    if(tree.right is None):
        array.append(tree.value)
    else:
        postOrderTraversal(tree.right,array)
        array.append(tree.value)