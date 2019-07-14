'''
This problem was asked by Palantir.

You are given a list of N numbers, in which each number is located at most k places away from its sorted position. For example, if k = 1, a given element at index 4 might end up at indices 3, 4, or 5.

Come up with an algorithm that sorts this list in O(N log k) time.

'''

import heapq

def sortArray_k(array,k):
    result = []
    heap_array = []

    for i in range(k+1):
        heapq.heappush(heap_array,array[i])
    
    for i in range(k+1,len(array)):
        result.append(heapq.heappop(heap_array))
        heapq.heappush(heap_array,array[i])
    
    for i in range(k+1):
        result.append(heapq.heappop(heap_array))
        

    
    return result

array = input('Input the Array: ')
array = array.split(' ')
for i in range(len(array)):
        array[i]=int(array[i])

k = int(input('Enter the Value of K: '))
print('The Sorted Array is: ',sortArray_k(array,k))