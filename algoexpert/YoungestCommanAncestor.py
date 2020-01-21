class AncestralTree:
    def __init__(self,name):
        self.name = name
        self.ancestor = None

def getYoungestCommonAncestor(topAncestor, descendantOne, descendantTwo):
    descentOneDepth = getAncestorDepth(topAncestor,descendantOne)
    descentTwoDepth = getAncestorDepth(topAncestor,descendantTwo)

    if descentOneDepth > descentTwoDepth :
        return getAncestor(descendantOne,descendantTwo,descentOneDepth-descentTwoDepth)
    else:
        return getAncestor(descendantTwo,descendantOne,descentTwoDepth-descentOneDepth)

def getAncestor(lowerDescendant,higherDescendant,diff):
    while diff >0:
        lowerDescendant = lowerDescendant.ancestor
        diff -=1
    while lowerDescendant !=higherDescendant:
        lowerDescendant = lowerDescendant.ancestor
        higherDescendant = higherDescendant.ancestor
    
    return lowerDescendant



def getAncestorDepth(topAncestor,Descendant):
    depth = 0
    while Descendant != topAncestor:
        Descendant = Descendant.ancestor
        depth +=1
    return depth
