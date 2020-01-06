def threeNumberSum(array, targetSum):
    array.sort()
    solution_array=[]
    for i in range(len(array)):
        left = i+1
        right = len(array)-1
        #print(left,' ',right)

        while(left < right):
            #print('|Inside Pos|: ',left,' ',right)
            if (array[i]+array[left]+array[right] == targetSum):
                solution_array.append([array[i],array[left],array[right]])
                left+=1
                right-=1

            elif (array[i]+array[left]+array[right] < targetSum):
                left+=1
            elif (array[i]+array[left]+array[right] > targetSum):
                right-=1
    
    return solution_array


array = [12,3,1,2,-6,5,-8,6]
target = 0
print(threeNumberSum(array,target))
            

