def create_map(input_str):
    str_map={}
    for chrr in input_str:
        if chrr not in str_map.keys():
            str_map[chrr]=1
        else:
            str_map[chrr]= str_map[chrr]+1
        
    return str_map

def recursive(sol_arr,str_map,pos,len_org):

    if(pos==len_org):
        print(sol_arr)
        return

    for i in range(len(str_map)):
        
        if( str_map[list(str_map)[i]] == 0):    
                 
            continue
        
        sol_arr[pos]=list(str_map)[i]
        str_map[list(str_map)[i]]-=1
        recursive(sol_arr,str_map,pos+1,len_org)
        str_map[list(str_map)[i]]+=1



input_str='bcdd'
sol_arr=['a']*len(input_str) 
len_org = len(input_str)
pos=0
recursive(sol_arr,create_map(input_str),pos,len_org)
