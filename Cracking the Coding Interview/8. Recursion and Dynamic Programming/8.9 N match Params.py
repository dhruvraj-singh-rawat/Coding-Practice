def matchParams(remain_left,remain_right,sol,pos):
    #print(remain_left,' ',remain_right)

    if(remain_left==0):
        if(remain_right==0):
            print(sol)
            return
        else:
            sol[pos]=')'
            matchParams(remain_left,remain_right-1,sol,pos+1)
    
    if(remain_left<remain_right and remain_left!=0):
        sol[pos]='('
        matchParams(remain_left-1,remain_right,sol,pos+1)
        sol[pos]=')'
        matchParams(remain_left,remain_right-1,sol,pos+1)
    if(remain_left==remain_right):
        sol[pos]='('
        matchParams(remain_left-1,remain_right,sol,pos+1)

N=3
sol = [0]*(2*N)
matchParams(N,N,sol,0)