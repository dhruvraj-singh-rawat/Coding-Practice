def threeNumberSum(array, targetSum):
    # Write your code here.
    array.sort()
    solution=[]

    for i in range(len(array)-2):
        for j in range(i+1,len(array)-1):
            for k in range(j+1,len(array)):
                intrim_sol=[]
                if(array[i]+array[j]+array[k]== targetSum):
                    intrim_sol.append(array[i])
                    intrim_sol.append(array[j])
                    intrim_sol.append(array[k])
                    solution.append(intrim_sol)

    return solution
    

    

array = [12,3,1,2,-6,5,-8,6]
target = 0
print(threeNumberSum(array,target))
			
			