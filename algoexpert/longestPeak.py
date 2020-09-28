def longestPeak(array):
    # Write your code here.
	
	peak = 0
	peak_length = 0
	temp_peak_length = 0
	previous_element =0
	
	for pos , element in enumerate(array):
		if pos == 0 :
			previous_element = element
			temp_peak_length = 1 
		
		elif ( previous_element < element ) :
			if peak==1 and temp_peak_length>=3:	
				if temp_peak_length > peak_length :
					peak_length = temp_peak_length
				peak = 0
					
				temp_peak_length = 2
				previous_element = element
			else:
				temp_peak_length+=1
				previous_element = element
				
		elif previous_element == element:
			if peak ==1 and temp_peak_length>=3:
				if temp_peak_length >= peak_length:
					peak_length = temp_peak_length
					peak = 0
			temp_peak_length = 1
			previous_element = element
			
		elif previous_element > element:
			if temp_peak_length>=2:
				peak = 1
				temp_peak_length+=1
				previous_element = element
			else:
				temp_peak_length=1
				previous_element = element
		
	if temp_peak_length > peak_length and peak ==1:
		peak_length = temp_peak_length
	
	return peak_length


