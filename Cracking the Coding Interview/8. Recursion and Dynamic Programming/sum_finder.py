def recursive(sol_arr,given_arr,pos,remaining,required):

    if(sum(sol_arr)==required):
        print(sol_arr)        
        return

    elif(sum(sol_arr)>required):
        return
    elif(required-sum(sol_arr)>remaining):
        return
    
    for i in range(pos,len(given_arr)):
        sol_arr.append(given_arr[i])
        recursive(sol_arr,given_arr,i+1,remaining-given_arr[i],required)
        sol_arr.pop()

given_arr = [2,5,3,7,10]
sol_arr= []
pos=0
recursive(sol_arr,given_arr,pos,15,15)