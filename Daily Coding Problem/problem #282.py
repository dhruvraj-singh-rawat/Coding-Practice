'''
This problem is asked by Netflix

Given an array of integers,determine whether it contains a Pythagorean triplet.
Recall a Pythagorean triplet (a,b,c) is defined by the equation a^2+b^2 = c^2 

'''




def Pythagorous(arr):
    for i in range(len(arr)):
        arr[i] = arr[i]*arr[i]

    arr.sort()

    for i in reversed(range(len(arr))):

        left = 0
        right = i-1
        
        while(left != right):
            if(arr[left]+arr[right]==arr[i]):
                #print('The Triplets are: ',arr[left]," ",arr[right]," ",arr[i])
                return True
            elif (arr[left]+arr[right]<arr[i]):
                left=left+1
            
            elif (arr[left]+arr[right]>arr[i]):
                right = right -1
            
    
    return False


num=int(raw_input('Enter the Size of List: '))
arr=[]
for i in range(num):
    arr.append(int(raw_input()))
print(Pythagorous(arr))


