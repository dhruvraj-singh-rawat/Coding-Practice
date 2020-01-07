def smallDiff(arr1,arr2):
    min_no = 1000000 # Arbitary Large Number
    sol=[0,0]
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if (abs(arr1[i]-arr2[j])<min_no):
                min_no = abs(arr1[i]-arr2[j])
                sol.pop()
                sol.pop()
                sol.append(arr1[i])
                sol.append(arr2[j])
    
    return sol

arr1= [-1,5,10,20,28,3]
arr2 = [26,134,135,15,17]

print(smallDiff(arr1,arr2))


