def hasSingleCycle(array):
    visited = [0]*len(array)
    visited[0]=1
    i=0

    while True:
        i=i+array[i]

        if i>=len(array):
            i=i-len(array)
            i= i%len(array)

            if i==0:
                if sum(visited)==len(array):
                    return True
                else:
                    return False
            if visited[i]:
                return False
            else:
                visited[i]=1
        
        elif i<len(visited):
            i=len(array)+i
            while i<0:
                i=i+len(array)

            if i==0:
                if sum(visited)==len(array):
                    return True
                else:
                    return False
            if visited[i]:
                return False
            else:
                visited[i]=1
        
        else:
            if i==0:
                if sum(visited)==len(array):
                    return True
                else:
                    return False
            if visited[i]:
                return False
            else:
                visited[i]=1
            
                