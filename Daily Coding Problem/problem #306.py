'''
This problem was asked by Palantir.

You are given a list of N numbers, in which each number is located at most k places away from its sorted position. For example, if k = 1, a given element at index 4 might end up at indices 3, 4, or 5.

Come up with an algorithm that sorts this list in O(N log k) time.

'''
def sort_array(array,k):
        for i in range(len(array)):
                window = array[i:i+k+1]
                low=i
                for j,item in enumerate(window,i):
                        if(item<array[low]):
                                low=j
                
                temp = array[low]
                array[low]=array[i]
                array[i]=temp
        
        return array

array = input('Input the Array: ')
array = array.split(' ')
for i in range(len(array)):
        array[i]=int(array[i])

k = int(input('Enter the Value of K: '))
print('The Sorted Array is: ',sort_array(array,k))



                        
