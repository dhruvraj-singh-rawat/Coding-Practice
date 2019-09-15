char_dict = {}

input_string = "abc"
sol=[]
for char in input_string:
    if char in char_dict.keys():    
        char_dict[char]=char_dict[char]+1
    
    else:
        char_dict[char]=1


def recursive_string(char_dict,sol,pos):
    if(pos==len(input_string)):
        print(sol)
        return
    
    for (i in range(char_dict)):
        
