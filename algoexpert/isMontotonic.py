def isMonotonic(array):
    # Write your code here.
	last = 0
	slope = 0
	not_sure = 1
	for indx,element in enumerate(array):
		if indx ==0:
			last = element
		else:
			if indx==1 or not_sure:
				if last != element:					
					slope =1 if element > last else -1
					last = element
					not_sure=0
			else:
				if slope==1 and last>element:
					return False
				elif slope ==-1 and last<element:
					return False
				last = element
	return True
					
			
		
		
		
	
    
 