def append_values(val1,val2,arr):
    if(len(arr)):
        arr.pop()
        arr.pop()
        arr.append(val1)
        arr.append(val2)
    else:
        arr.append(val1)
        arr.append(val2)
    
    return arr

def smallestDifference(arr1,arr2):
    arr1.sort()
    arr2.sort()
    min_no = 100000
    pos1=0
    pos2=0
    sol=[]

    while(pos1!=len(arr1) or pos2!=len(arr2)):
        diff = arr1[pos1]-arr2[pos2]
        #print(arr1[pos1],' ',arr2[pos2])
        #print('The value of Diff: ',diff,' and value of min: ',min_no)    

        if(pos1==len(arr1)-1 and pos2==len(arr2)-1):
            diff=arr1[pos1]-arr2[pos2]
            
            if(abs(diff)<min_no):
                sol = append_values(arr1[pos1],arr2[pos2],sol)
                return sol
                
            else:
                return sol
                        
        if(diff<0):
            #print('Here 1')
            if(abs(diff)<min_no):
                min_no=abs(diff)
                sol = append_values(arr1[pos1],arr2[pos2],sol)

            if(pos1+1!=len(arr1)):
                pos1+=1
            else:
                pos2+=1

        elif(diff>0):
            #print('Here 2')
            if(abs(diff)<min_no):
                min_no=abs(diff)
                sol = append_values(arr1[pos1],arr2[pos2],sol)

            if(pos2+1!=len(arr2)):
                pos2+=1
            else:
                pos1+=1
        elif(diff==0):

            if(abs(diff)<min_no):
                min_no=abs(diff)
                sol = append_values(arr1[pos1],arr2[pos2],sol)

            if (pos1+1!=len(arr1) and pos2+1!=len(arr2)):
                pos1+=1
                pos2+=1
            elif(pos1+1!=len(arr1)):
                pos1+=1
            else:
                pos2+=1
    
    


arr1= [-2,21]
arr2 = [0,20]

print(smallestDifference(arr1,arr2))