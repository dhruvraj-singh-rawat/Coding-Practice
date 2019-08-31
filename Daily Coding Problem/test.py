

with open("votingData.txt", "r") as f:
    for line in f:
        for word in line.split():
           print(word)   

'''
abc = f.readline().split()
print("1st : ",abc[0]," 2nd : ",abc[1])

for abc1 in f.readline():
    abc = abc1.split()
    #print("1st : ",abc[0]," 2nd : ",abc[1])
    print(abc)



for x in f:



    for a,b in x.split():
        print("The 1st :",a," the second :",b)

'''