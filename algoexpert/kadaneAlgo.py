def kadanesAlgorithm(array):
    # Write your code here.
	maxSoFar = float("-inf")
    maxPrev = 0
	for i in range(len(array)):
		maxHere = max(array[i],maxPrev+array[i])
        maxPrev = maxHere
        if maxSoFar > maxHere:
		    maxSoFar = maxHere	
		#print(maxSoFar)
	if maxSoFar <1:
		return -1
	return maxSoFar
					
				
array = [8,5,-9,1,3,-2,3,4,7,2,-18,6,3,1,-5,6]
print(kadanesAlgorithm(array))
