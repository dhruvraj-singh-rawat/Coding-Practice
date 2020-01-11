def swap_values(array,left_pos,right_pos):
	temp = array[left_pos]
	array[left_pos]=array[right_pos]
	array[right_pos] = temp
	return array

def moveElementToEnd(array, toMove):
    # Write your code here.
	left_pos=0
	right_pos = len(array)-1
	while(left_pos < right_pos):

		print(left_pos,' ',right_pos)

		if(array[left_pos]==toMove):
			if(array[right_pos]!=toMove):
				array  = swap_values(array,left_pos,right_pos)
				right_pos-=1
				left_pos+=1
			else:
				while(array[right_pos]==toMove and left_pos!=right_pos):
					right_pos-=1
				array = swap_values(array,left_pos,right_pos)
				
				right_pos-=1
				left_pos+=1
		else:
			while(array[left_pos]!=toMove and left_pos!=right_pos):
				left_pos+=1
				
			if(array[right_pos]==toMove):
				while(array[right_pos]==toMove and left_pos!=right_pos):
					right_pos-=1
				array = swap_values(array,left_pos,right_pos)
				left_pos+=1
				right_pos-=1
			else:
				array=swap_values(array,left_pos,right_pos)
				left_pos+=1
				right_pos-=1
	
	return array

array =[5,1,2,5,5,3,4,6,7,5,8,9,10,11,5,5,12]
toMove = 5
print(moveElementToEnd(array,toMove))
				
			
			
				
			
    