def diag(visited,pos,loc):
    for i in range(pos):
      
        
        if (abs(i-(pos)) == abs(visited[i]-loc)):
            return True
    else:
        return False

def recursive(visited,pos):
    if(len(visited)==pos):
                
        print('solution: ',visited)
        return
    
    for i in range(len(visited)):
      
        if i in visited:
            continue
        elif ( diag(visited,pos,i)):
         
            continue
        else:
            visited[pos]=i
            recursive(visited,pos+1)
            visited[pos]=None
count=0
n = int(input('Enter the Size of Board: '))
visited = [None]*n
recursive(visited,pos=0)
print(count)
