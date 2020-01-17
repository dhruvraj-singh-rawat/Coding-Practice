def levenshteinDistance(str1, str2):
    # Write your code here.
    num_edits = [[0 for i in range(len(str1)+1)] for j in range(len(str2)+1)]
    
    for i in range(len(str2)+1):
        for j in range(len(str1)+1):
            
            if(i==0):
                num_edits[i][j]=j
            elif (j==0):
                num_edits[i][j]=i

            elif str1[j-1]==str2[i-1]:
                num_edits[i][j] = num_edits[i-1][j-1]
            else:

                num_edits[i][j] = min(num_edits[i-1][j],num_edits[i][j-1],num_edits[i-1][j-1])+1

    #print(num_edits)
    return num_edits[len(str2)][len(str1)]

str1 = ''
str2 = 'yabd'
print(levenshteinDistance(str1,str2))

    


