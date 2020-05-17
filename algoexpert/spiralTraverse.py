'''
array = [[1,2,3,4],
    [5,6,7,8],
    [9,10,11,12],
    [13,14,15,16],
    [17,18,19,20]]
'''
array = [[1,2,3],
        [4,5,6],
        [7,8,9],
        [10,11,12],
        [13,14,15]]

def spiralTraverse(array):
    row,colm = len(array),len(array[0])
    sol = []
    for layer in range(row-1):


   
        for j in range(layer,colm-layer-1):
            if len(sol) == row*colm:
                return sol
            sol.append(array[layer][j])        
    
        for i in range(layer,row-layer-1):
            if len(sol) == row*colm:
                return sol
            sol.append(array[i][colm-layer-1])
       
        for j in range(colm-layer-1,layer,-1):
            if len(sol) == row*colm:
                return sol
            sol.append(array[row-layer-1][j])
        
        for i in range(row-layer-1,layer,-1):
            if len(sol) == row*colm:
                return sol
            sol.append(array[i][layer])
      
    if (row % 2) and (colm%2) is not 0: 
        sol.append(array[int(row/2)][int(colm/2)])
    return sol

print(spiralTraverse(array))




