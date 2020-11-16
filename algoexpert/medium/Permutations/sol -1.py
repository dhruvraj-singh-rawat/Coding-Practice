def getPermutations(array):
	# Write your code here.
	permutations = []	
	permutationHelper(array,[],permutations)
	return permutations

def permutationHelper(array,currentPermutation,permutations):
	
	if not len(array) and len(currentPermutation):
		permutations.append(currentPermutation)
	else:
		for i in range(len(array)):
			currArray = array[ :i ] + array[ i + 1 : ]
			newPermutation = currentPermutation + [array[i]]	


			permutationHelper(currArray,newPermutation,permutations)
	
