def validate(tree):
    return validate_bst(tree,float("-inf"),float("inf"))

def validate_bst(tree,min_value,max_value):
    if tree is None:
        return True
    elif ( tree.value<min_value or tree.value >= max_value):
        return False
    left_valid = validate_bst(tree.left,min_value,tree.value)

    return left_valid and validate_bst(tree.right,tree.value,max_value)