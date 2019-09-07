'''
Describe an algorithm to compute the longest increasing subsequence of an array of numbers 
'''

def lis(arr):
    sol = [1] *len(arr)

    for i in range(len(arr)):
        for j in range(i):
            if(arr[j]<arr[i]):
                sol[i]=max(sol[j]+1,sol[i])
    
    return max(sol)


arr =  [0, 8, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15,4]

print(lis(arr))