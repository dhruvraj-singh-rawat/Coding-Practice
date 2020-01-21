def recursive(current_pos,visited_set,matrix,size):
    row,colm = current_pos
    print(row,' ',colm)
    if (row >= len(matrix) or row <0 or colm>=len(matrix[0]) or colm<0  ):
        return visited_set,size
         
    if (matrix[row][colm]==0 or (row,colm) in visited_set):
        return visited_set,size

    if matrix[row][colm] == 1:
        size+=1
        visited_set.add((row,colm))
    
    visited_set,size = recursive((row+1,colm),visited_set,matrix,size)
    visited_set,size = recursive((row,colm+1),visited_set,matrix,size)
    visited_set,size = recursive((row-1,colm),visited_set,matrix,size)
    visited_set,size = recursive((row,colm-1),visited_set,matrix,size)
    
    return visited_set,size
    
def riverSizes(matrix):
    visited_set=set()
    sol = []
    if len(matrix) == 0:
        return [0]
    for row in range(len(matrix)):
        for colm in range(len(matrix[0])):
            size = 0
            if matrix[row][colm] ==1 and (row,colm) not in visited_set:
                visited_set,size = recursive((row,colm),visited_set,matrix,size)
            if size:
                sol.append(size)
    
    return sol


matrix = [
    [1,0,0,1,0],
    [1,0,1,0,0],
    [0,0,1,0,1],
    [1,1,0,0,0]
]
print(riverSizes(matrix))
