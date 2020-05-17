arr = [[1,2,3],
[4,5,6],
[7,8,9]]

def swap (arr,temp,i,j,k,l):
    if temp is None:
        temp = arr[k][l]
        arr[k][l] = arr[i][j]
        return (temp,arr)
    else:
        temp_int = arr[k][l]
        arr[k][l] = temp
        #print (temp)
        return (temp_int,arr)


def rotate(arr):
    row,colm = len(arr) , len(arr[0])

    for layer in range(row-1):
        temp = None
        for i in range(layer,row-1-layer):
            temp,arr = swap(arr,temp,*(layer,i),*(i,colm-layer-1))
            
            temp,arr = swap(arr,temp,*(i,colm-layer-1),*(row-layer-1,colm-i-1))
             
            temp,arr = swap(arr,temp,*(row-layer-1,colm-i-1),*(row-i-1,layer))
        
            temp,arr = swap(arr,temp,*(row-i-1,layer),*(layer,i))
            
            temp = None
         
    return arr

print(rotate(arr))
#swap(arr,1,*(2,3),*(7,9))