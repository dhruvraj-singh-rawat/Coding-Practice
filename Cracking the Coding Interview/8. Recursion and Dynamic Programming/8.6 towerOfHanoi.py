from collections import deque


pegs=[]
pegs.append(deque()) 
pegs.append(deque())
pegs.append(deque())

def init_pegs(numPlates):
    for i in range(numPlates,0,-1):
        pegs[0].append(i)



def towerOfHanoi(numPlates,pegs,from_peg,to_peg,using_peg):
    if(numPlates>0):
        towerOfHanoi(numPlates-1,pegs,from_peg,using_peg,to_peg)

        pegs[to_peg].append(pegs[from_peg].pop())
        print('Moved from ',from_peg,' to ',to_peg)
        towerOfHanoi(numPlates-1,pegs,using_peg,to_peg,from_peg)

init_pegs(3)
towerOfHanoi(3,pegs,0,1,2)