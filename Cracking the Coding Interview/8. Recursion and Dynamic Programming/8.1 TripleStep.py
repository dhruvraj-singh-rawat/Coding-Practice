def num_steps(step_arr,steps):
	if(steps == 0):
		return 1
	if (steps <0):
		return 0

	if(step_arr[steps-1]==0):
		step_arr[steps-1] = num_steps(step_arr,steps-1)+num_steps(step_arr,steps-2)+num_steps(step_arr,steps-3)

	return step_arr[steps-1]

steps = int(input('Enter the Stair Case length: '))

step_arr = [0]*steps

print('The Number of the Unique Steps possible are: ',num_steps(step_arr,steps))


