def diag(visited,pos,loc):
    for i in range(pos):
        #print('The Previous Row: ',i,' the column pos: ',visited[i])
        #print('The current Row: ',pos,' the column pos: ',loc)
        
        
        if (abs(i-(pos)) == abs(visited[i]-loc)):
            #print('Diagonal')
            #print('')
            return True
    else:
        #print('NOT-Diagonal')
        #print('')
        return False

def recursive(visited,pos):
    if(len(visited)==pos):
                
        print('solution: ',visited)
        return
    
    for i in range(len(visited)):
        #print(visited)
        if i in visited:
            continue
        elif ( diag(visited,pos,i)):
            #print('here')
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
