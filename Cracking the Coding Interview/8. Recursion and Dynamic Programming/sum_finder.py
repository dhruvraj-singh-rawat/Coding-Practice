def recursive(sol_arr,given_arr,pos,len_given,passed_places,remaining,required):
    '''
    if(sol_arr in printed_sol):
        return 
    '''
    if(sum(sol_arr)==required):
        print(sol_arr)
        
        return
    elif(sum(sol_arr)>required):
        return
    elif(required-sum(sol_arr)>remaining):
        return
    
    for i in range(pos,len_given):
        if given_arr[i] in sol_arr:
            continue
        if i in passed_places:
            continue

        sol_arr.append(given_arr[i])
        recursive(sol_arr,given_arr,i+1,len_given,passed_places,remaining-given_arr[i],required)
        sol_arr.pop()

        if len(sol_arr) == 0:
            passed_places.add(i)


passed_places = set()
given_arr = [2,5,3,7,10]
sol_arr= []
pos=0
len_given = len(given_arr)
recursive(sol_arr,given_arr,pos,len_given,passed_places,15,15)