


def edit_distance(str1,str2):
    str1_len = len(str1)+1
    str2_len = len(str2)+1

    
    #arr = [[0]*str2_len]*str1_len
    arr=[]
    a_prev=[]
    a=[]
    
    for i in range(str1_len):
        a_prev=a
        a=[]
        for j in range(str2_len):
            
            if(i==0):
                #arr[i][j]=j
                a.append(j)
                
            elif (j==0):
                #arr[i][j]=i
                a.append(i)
            
            elif (str1[i-1]==str2[j-1]):
                #arr[i][j]=arr[i-1][j-1]
                a.append(arr[i-1][j-1])
                

            elif(str1[i-1]!=str2[j-1]):
                #arr[i][j]=min(arr[i-1][j],arr[i-1][j-1],arr[i][j-1])+1
                a.append(min(a[j-1],a_prev[j-1],a_prev[j])+1)
                
        
        arr.append(a)
        

    
    return arr[str1_len-1][str2_len-1]










str1 = raw_input('Enter the 1st String: ')
str2 = raw_input('Enter the 2nd String: ')

print ('The Edit Distance Between 2 string is: '+str(edit_distance(str1,str2)))