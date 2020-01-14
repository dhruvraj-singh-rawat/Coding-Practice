def invertBinaryTree(tree):
    if tree is None:
        return 
    
    if tree.left is None or tree.right is None:
        temp = tree.left
        tree.left = tree.right
        tree.right = temp
    
    invertBinaryTree(tree.left)
    invertBinaryTree(tree.right)